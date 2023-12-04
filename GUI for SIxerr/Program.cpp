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
	//GUIforSIxerr::LOSF loginFormF;
	GUIforSIxerr::SignUpForC SignUpCust;
	GUIforSIxerr::SignUpForF SignUpFree;

	User^ user = nullptr;
	GUIforSIxerr::Freelencer FreelancerForm(user);
	GUIforSIxerr::Customer Customerform(user);

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
	if (loginForm.CustomerStatus) {
		MessageBox::Show("Welcome " + user->Fname, "Sixerr", MessageBoxButtons::OK);
		Application::Run(% Customerform);
	}
	if (loginForm.FreelancerStatus)
	{
		MessageBox::Show("Welcome " + user->Fname, "Sixerr", MessageBoxButtons::OK);
		Application::Run(% FreelancerForm);
	}

}