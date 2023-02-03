#include "../include/Main.h"

#include "config.h"

wxBEGIN_EVENT_TABLE(Main, wxFrame)
wxEND_EVENT_TABLE();

Main::Main() : wxFrame(nullptr, wxID_ANY, "Title", wxPoint(0, 0), wxSize(800, 700))
{
	m_mainMenuBar = new wxMenuBar();
	this->SetMenuBar(m_mainMenuBar);

	// Menu Bar should have File, Settings, About

	//Define and add file menu
	wxMenu* fileMenu = new wxMenu();
	fileMenu->Append(AppID::MainMenuBar::NewFile, "New");
	fileMenu->Append(AppID::MainMenuBar::OpenFile, "Open");
	fileMenu->Append(AppID::MainMenuBar::SaveFile, "Save");
	fileMenu->Append(AppID::MainMenuBar::Exit, "Exit");
	m_mainMenuBar->Append(fileMenu, "File");


}

Main::~Main()
{}
