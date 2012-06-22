///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __object_segmentation_frame__
#define __object_segmentation_frame__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class ObjectSegmentationFrame
///////////////////////////////////////////////////////////////////////////////
class ObjectSegmentationFrame : public wxFrame 
{
	private:
	
	protected:
		wxPanel* MainPanel;
		
		wxStaticText* TitleText;
		
		wxStaticBitmap* BoschLogo;
		wxPanel* NavigationPanel;
		wxPanel* ImagePanel;
		wxStaticText* InstructionsLabel;
		
		wxBitmapButton* segment_button_;
		wxStaticText* SegmentText;
		
		wxBitmapButton* accept_button_;
		wxStaticText* AcceptText;
		
		wxBitmapButton* reset_button_;
		wxStaticText* ResetText;
		
		wxPanel* FauxFooter;
		wxPanel* Footer;
		wxButton* refresh_button_;
		wxStaticText* m_staticText4;
		
		// Virtual event handlers, overide them in your derived class
		virtual void segmentButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void acceptButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void resetButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		virtual void refreshButtonClicked( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ObjectSegmentationFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Bosch Object Segmentation Demonstration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 750,950 ), long style = wxDEFAULT_FRAME_STYLE, const wxString& name = wxT("ObjectSegmentationWindow") );
		~ObjectSegmentationFrame();
	
};

#endif //__object_segmentation_frame__
