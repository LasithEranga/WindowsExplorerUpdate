#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array <String^>^ args) {

	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	WindowsExplorer::MyForm frm;
	Application::Run(% frm);

}

