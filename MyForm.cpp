#include "MyForm.h"
#include <ctime>
#include <cstdlib>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TicTacToe::MyForm form;
	Application::Run(%form);
}