#pragma once

#include <wx/wx.h>

class Main : public wxFrame
{

public:
	Main();
	~Main();

	wxMenuBar* m_mainMenuBar = nullptr;
	wxToolBar* m_toolbar;

	void OnMenuNew(wxCommandEvent &evt);
	void OnMenuOpen(wxCommandEvent& evt);
	void OnMenuSave(wxCommandEvent& evt);
	void OnMenuExit(wxCommandEvent& evt);


	wxDECLARE_EVENT_TABLE();



};