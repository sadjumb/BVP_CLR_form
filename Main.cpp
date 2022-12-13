#include "Main.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
void main(cli::array<String^>^ args)
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);

  BVPCLRform::Main form;
  Application::Run(% form);
}