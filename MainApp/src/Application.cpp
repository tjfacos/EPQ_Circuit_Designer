#include "Application.h"


wxIMPLEMENT_APP(Application);

Application::Application()
{}

Application::~Application()
{}

bool Application::OnInit()
{

    m_frame1 = new Main();
    m_frame1->Show();
    m_frame1->Maximize(true);

    return true;
}
