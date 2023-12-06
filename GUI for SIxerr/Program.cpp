#include "Customer.h"
#include "FindFreelancers.h"
#include "Freelencer.h"
#include "Interface.h"
#include "LOSC.h"
#include "MassagesBox.h"
#include "Messages.h"
#include "SendMessage.h"
#include "Setting.h"
#include "SignUpForC.h"
#include "SignUpForF.h"
#include "MessagePresenter.h"



using namespace System;
using namespace System::Windows::Forms;


void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIforSIxerr::Interface form;
	GUIforSIxerr::LOSC loginForm;
	//GUIforSIxerr::LOSF loginFormF;
	GUIforSIxerr::SignUpForC SignUpCust;
	GUIforSIxerr::SignUpForF SignUpFree;
	GUIforSIxerr::Messages messageForm;

	User^ user = nullptr;

	//	// Connection string for Microsoft Access
			//String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\Marcus Hoang\\Documents\\SixerrDB.accdb";
	//String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users//mckay\\Documents\\SixerrDB.accdb";
	//String^ query = "SELECT USERNAME FROM [Users] WHERE FREELANCER = @Username";
	

	// Create a connection and command
	//OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
	//OleDbCommand^ command = gcnew OleDbCommand(query, connection);
	//command->Parameters->AddWithValue("@Username", username);

	GUIforSIxerr::Customer Customerform;

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
			else if (loginForm.switchToInterface) {
				loginForm.switchToInterface = false;
				continue;
			}
			else if (loginForm.switchToCustomerSignUp) {
				SignUpCust.ShowDialog();
				loginForm.switchToCustomerSignUp = false;
				continue;
			}
			else if (loginForm.switchToFreelancerSignUp) {
				SignUpFree.ShowDialog();
				loginForm.switchToFreelancerSignUp = false;
				continue;
			}
			else {
				user = loginForm.user;
				break;
			}
		}
		else {
			user = form.user;
			break;
		}
	}
	while (true) {
		if (loginForm.CustomerStatus) {
			MessageBox::Show("Welcome " + user->Fname, "Sixerr", MessageBoxButtons::OK);
			Customerform.ShowDialog();
			if (Customerform.switchToMessageC) {
				messageForm.ShowDialog();
				Customerform.switchToMessageC = false;
				continue;
			}
			else {
				break;
			}
		}
		else if (loginForm.FreelancerStatus)
		{
			MessageBox::Show("Welcome " + user->Fname, "Sixerr", MessageBoxButtons::OK);
			String^ username = loginForm.user->Password;
			String^ _Fname = loginForm.user->Fname;
			GUIforSIxerr::Freelencer FreelancerForm(username, _Fname);
			FreelancerForm.ShowDialog();
			if (FreelancerForm.switchToMessageF) {
				messageForm.ShowDialog();
				FreelancerForm.switchToMessageF = false;
				continue;
			}
			else {
				break;
			}
		}
		else{
			user = loginForm.user;
			break;
		}
	}
}