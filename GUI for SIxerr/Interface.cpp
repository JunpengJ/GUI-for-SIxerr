#include "Interface.h"
#include "Customer.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIforSIxerr::Interface form;
	Application::Run(% form);
}