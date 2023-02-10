#pragma once

#include <wx/wx.h>
#include <wx/notebook.h>
#include <wx/aui/aui.h>


#include <string>

class Main : public wxFrame
{

public:
	Main();
	~Main();

	wxMenuBar* m_mainMenuBar = nullptr;
	wxToolBar* m_toolbar = nullptr;

	wxAuiNotebook* m_notebook = nullptr;

	int untitled_counter = 0;

	// Menu methods
	void OnMenuNew(wxCommandEvent &evt);
	void OnMenuOpen(wxCommandEvent& evt);
	void OnMenuSave(wxCommandEvent& evt);
	void OnMenuExit(wxCommandEvent& evt);
	void OnMenuSettings(wxCommandEvent& evt);

	
	void CreateNewDesign();


	wxDECLARE_EVENT_TABLE();



};