#pragma once
#include <wx/wx.h>
#include <wx/minifram.h>

class SettingsFrame : public wxMiniFrame
{
public:
	SettingsFrame(wxWindow* parent, wxWindowID id, wxString title, const wxPoint& pos, const wxSize& size);
	~SettingsFrame();
};

