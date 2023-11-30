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


using namespace System;
using namespace System::Windows::Forms;


void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIforSIxerr::Interface form;
	GUIforSIxerr::LOSC loginForm;
	GUIforSIxerr::LOSF loginFormF;
	GUIforSIxerr::SignUpForC SignUpCust;
	GUIforSIxerr::SignUpForF SignUpFree;

	User^ user = nullptr;
	GUIforSIxerr::Freelencer FreelancerForm(user);
	GUIforSIxerr::Customer Customerform(user);
	GUIforSIxerr::SendMessage SendMForm(user);
	GUIforSIxerr::MassagesBox MessBForm(user);
	GUIforSIxerr::Messages MessForm(user);

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

			else if (loginForm.switchToCustomerSignUp) {
				SignUpCust.ShowDialog();
				loginForm.switchToCustomerSignUp = false;
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
			else if (loginFormF.switchToFreelancerSignUp) {
				SignUpFree.ShowDialog();
				loginFormF.switchToFreelancerSignUp = false;
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
	if (loginForm.CustomerStatus) {
		MessageBox::Show("Welcome " + user->Fname, "Sixerr", MessageBoxButtons::OK);
		Application::Run(% Customerform);
	}
	if (loginFormF.FreelancerStatus)
	{
		MessageBox::Show("Welcome " + user->Fname, "Sixerr", MessageBoxButtons::OK);
		Application::Run(% FreelancerForm);
	}

}