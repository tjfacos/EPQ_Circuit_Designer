#pragma once

#include <wx/wx.h>
#include "Main.h"

class Application : public wxApp
{
private:
	Main* m_frame1 = nullptr;


public:
	Application();
	~Application();

	virtual bool OnInit();
};

