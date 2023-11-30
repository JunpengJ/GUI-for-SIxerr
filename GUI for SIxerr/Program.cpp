#include "Customer.h"
#include "FindFreelancers.h"
#include "Freelencer.h"
#include "Interface.h"
#include "LOSC.h"
#include "LOSF.h"
#include "MassagesBox.h"
#include "Messages.h"
#include "SendMessage.h"
#include "Setting.h"
#include "SignUpForC.h"
#include "SignUpForF.h"
#include "FindFreelancers.h"
#include "FreelanceUserControl.h"

#include <string>
#include <iostream>
#include <vector>


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;

void MarshalString(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

void PopulateFreelancers(std::vector <Freelancer> &freelancers) {
	String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\mckay\\Documents\\SixerrDB.accdb";
	//String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Marcus Hoang\\Documents\\SixerrDB.accdb";
	String^ sqlQuery = "SELECT * FROM Users WHERE Desig = 'Freelancer'";

	OleDbConnection^ connection = gcnew OleDbConnection(connString);

	try
	{
		connection->Open();

		OleDbCommand^ command = gcnew OleDbCommand(sqlQuery, connection);
		OleDbDataReader^ reader = command->ExecuteReader();

		while (reader->Read())
		{
			User^ freelancer = gcnew User();

			String^ un = reader->GetString(1);
			String^ p = reader->GetString(0);
			String^ fn = reader->GetString(2);
			String^ ln = reader->GetString(3);
			int r = reader->GetInt32(4);
			String^ d = reader->GetString(5);
			
			std::string unS, pS, fnS, lnS, dS;
			MarshalString(un, unS);
			MarshalString(p, pS);
			MarshalString(fn, fnS);
			MarshalString(ln, lnS);
			MarshalString(d, dS);

			Freelancer fl = Freelancer(unS, pS, fnS, lnS, r, dS);
			freelancers.push_back(fl);
		}
	}
	catch (Exception^ ex)
	{
		String^ errorMessage = String::Format("Error: {0}\nStackTrace: {1}", ex->Message, ex->StackTrace);
		MessageBox::Show(errorMessage, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally
	{
		if (connection != nullptr)
		{
			connection->Close();
		}
	}
}

void displayFreelancerVec(std::vector <Freelancer>& freelancers) {
	String^ message = "";
	for each (Freelancer freelancer in freelancers)
	{
		System::String^ un = gcnew System::String(freelancer.username.c_str());
		System::String^ p = gcnew System::String(freelancer.pass.c_str());
		System::String^ fn = gcnew System::String(freelancer.fName.c_str());
		System::String^ ln = gcnew System::String(freelancer.lName.c_str());
		System::String^ r = freelancer.rating.ToString();
		System::String^ d = gcnew System::String(freelancer.desig.c_str());

		message += String::Format("\nUsername: {0}, Password: {1}, FirstName: {2}, LastName: {3}, Rating: {4}, Desig: {5}\n", un, p, fn, ln, r, d);
	}
	MessageBox::Show(message, "Freelancer Data", MessageBoxButtons::OK, MessageBoxIcon::Information);
}

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIforSIxerr::Interface form;
	GUIforSIxerr::LOSC loginForm;
	GUIforSIxerr::LOSF loginFormF;

	PopulateFreelancers(freelancerVec);
	//displayFreelancerVec(freelancerVec);

	User^ user = nullptr;
	while (true) {
		form.ShowDialog();
		if (form.switchToCustomer)
		{
			loginForm.ShowDialog();
			form.switchToCustomer = false;


			if (loginForm.switchToInterface) {
				loginForm.switchToInterface = false;
				continue;
			}
			else {
				user = loginForm.user;
				break;
			}
		}
		else if (form.switchToFreelancer)
		{
			loginFormF.ShowDialog();
			form.switchToFreelancer = false;


			if (loginFormF.switchToInterface) {
				loginFormF.switchToInterface = false;
				continue;
			}
			else {
				user = loginFormF.user;
				break;
			}
		}
		else {
			user = form.user;
			break;
		}
		

	}
	if (user != nullptr) {
		GUIforSIxerr::Customer Customerform(user);
		MessageBox::Show("Welcome " + user->Fname, "Program.cpp", MessageBoxButtons::OK);
		Application::Run(% Customerform);
	}
	else {
		MessageBox::Show("Canceled", "Program.cpp", MessageBoxButtons::OK);
	}


}