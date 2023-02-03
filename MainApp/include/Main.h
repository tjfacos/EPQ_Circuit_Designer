#pragma once

#include <wx/wx.h>

class Main : public wxFrame
{

public:
	Main();
	~Main();

	wxMenuBar* m_mainMenuBar = nullptr;

	wxDECLARE_EVENT_TABLE();



};