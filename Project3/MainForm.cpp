#include "MainForm.h"
#include "AddForm.h"
#include "Unit.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project3::MainForm form;
	Application::Run(%form);
}