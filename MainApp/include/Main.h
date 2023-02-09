#pragma once

#include <wx/wx.h>
#include <wx/notebook.h>

class Main : public wxFrame
{

public:
	Main();
	~Main();

	wxMenuBar* m_mainMenuBar = nullptr;
	wxToolBar* m_toolbar = nullptr;

	wxNotebook* m_notebook = nullptr;

	void OnMenuNew(wxCommandEvent &evt);
	void OnMenuOpen(wxCommandEvent& evt);
	void OnMenuSave(wxCommandEvent& evt);
	void OnMenuExit(wxCommandEvent& evt);
	void OnMenuSettings(wxCommandEvent& evt);


	wxDECLARE_EVENT_TABLE();



};