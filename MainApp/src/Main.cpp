#include "Main.h"
#include "DesignCanvas.h"
#include "SettingsFrame.h"



#include "config.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
	EVT_MENU(AppID::MainMenuBar::NewFile, Main::OnMenuNew)
	EVT_MENU(AppID::MainMenuBar::OpenFile, Main::OnMenuOpen)
	EVT_MENU(AppID::MainMenuBar::SaveFile, Main::OnMenuSave)
	EVT_MENU(AppID::MainMenuBar::Exit, Main::OnMenuExit)
	EVT_MENU(AppID::MainMenuBar::Settings, Main::OnMenuSettings)
wxEND_EVENT_TABLE();

Main::Main() : wxFrame(nullptr, wxID_ANY, "Electronic Circuit Designer v0.0.1", wxPoint(0, 0), wxDefaultSize)
{
	m_mainMenuBar = new wxMenuBar();
	this->SetMenuBar(m_mainMenuBar);

	// Menu Bar should have File, Settings, About

	//Define and add file menu
	wxMenu* fileMenu = new wxMenu();
	fileMenu->Append(AppID::MainMenuBar::NewFile, "New");
	fileMenu->Append(AppID::MainMenuBar::OpenFile, "Open");
	fileMenu->Append(AppID::MainMenuBar::SaveFile, "Save");
	fileMenu->Append(AppID::MainMenuBar::Settings, "Settings");
	fileMenu->Append(AppID::MainMenuBar::Exit, "Exit");
	m_mainMenuBar->Append(fileMenu, "File");


	// Define and add Help
	wxMenu* HelpMenu = new wxMenu();
	HelpMenu->Append(AppID::MainMenuBar::Guide, "User Guide");
	HelpMenu->Append(AppID::MainMenuBar::About, "About");
	m_mainMenuBar->Append(HelpMenu, "Help");

	m_toolbar = this->CreateToolBar(wxTB_VERTICAL, wxID_ANY);
	m_toolbar->Realize();
}

Main::~Main()
{}

void Main::OnMenuSettings(wxCommandEvent& evt)
{
	SettingsFrame* f = new SettingsFrame(this, wxID_ANY, "Settings", wxDefaultPosition, wxDefaultSize);
	f->Show();
	evt.Skip();
}

void Main::OnMenuNew(wxCommandEvent & evt)
{
	DesignFrame* f = new DesignFrame(this, wxID_ANY, "Test", wxPoint(100, 100), wxDefaultSize);
	f->Show();
	evt.Skip();
}

void Main::OnMenuOpen(wxCommandEvent& evt)
{
}

void Main::OnMenuSave(wxCommandEvent& evt)
{
}

void Main::OnMenuExit(wxCommandEvent& evt)
{
	Close();
	evt.Skip();
}

