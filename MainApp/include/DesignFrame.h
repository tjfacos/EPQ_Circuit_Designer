#pragma once
#include <wx/wx.h>
#include <wx/minifram.h>

class DesignFrame : public wxPanel
{
public:
	DesignFrame(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size);
	~DesignFrame();

	void OnPaint(wxPaintEvent& evt);
};

