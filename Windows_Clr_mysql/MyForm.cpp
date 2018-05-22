#include "MyForm.h"
#include "dominio/dto/Aluno.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main()
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WindowsClrmysql::MyForm form;
	Application::Run(%form);
}
