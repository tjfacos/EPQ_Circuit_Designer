#include "DesignCanvas.h"

DesignFrame::DesignFrame(wxWindow* parent, wxWindowID id, wxString title, const wxPoint& pos, const wxSize& size) : 
	wxMiniFrame(parent, id, title, pos, size, wxCAPTION | wxRESIZE_BORDER )
{
}

DesignFrame::~DesignFrame()
{
}

void DesignFrame::OnPaint(wxPaintEvent& evt)
{
}
