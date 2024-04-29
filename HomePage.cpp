#include "HomePage.h"


using namespace System;
using namespace System::Windows::Forms;


namespace Gymmanagment {

    [STAThread]
        int main()
    {
        Application::EnableVisualStyles();
        Application::SetCompatibleTextRenderingDefault(false);
        Application::Run(gcnew Gymmanagment::HomePage());
        return 0;
    }

}