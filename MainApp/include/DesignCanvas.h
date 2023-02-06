#pragma once
#include <wx/wx.h>
#include <wx/minifram.h>

class DesignFrame : public wxMiniFrame
{
public:
	DesignFrame(wxWindow* parent, wxWindowID id, wxString title, const wxPoint& pos, const wxSize& size);
	~DesignFrame();

	void OnPaint(wxPaintEvent& evt);
};

