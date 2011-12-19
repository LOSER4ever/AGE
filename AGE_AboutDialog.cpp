/* AGEAbouDialog.cpp */

#include "AGE_AboutDialog.h"

AGE_AboutDialog::AGE_AboutDialog(wxWindow * parent)
: wxDialog(parent, -1, "About Advanced Genie Editor", wxDefaultPosition, wxSize(0, 20), wxDEFAULT_DIALOG_STYLE | wxNO_DEFAULT)
{
	Title = new wxStaticText(this, wxID_ANY, "Advanced Genie Editor\nVersion 2.11\nCopyleft 2011\n\nDevelopers:\nKeisari Tapsa (from 2.0b)\nApre - libgeniedat (from 2.1a)\nEstien Nifo (aka StSB77) (1.0a to 2.0a)");
	Image = new wxStaticBitmap(this, wxID_ANY, wxBitmap(AboutIcon_xpm));
	Credits = new wxStaticText(this, wxID_ANY, "Credits:\nYkkrosh - GeniEd 1 source code\nScenario_t_c - GeniEd 2 source code\nAncient Warrior (aka Taichi San) - data file research\nDarkRain654 - data file research\nDonnieboy - tool tip texts\nDiGiT - genie file structure (GenieWiki)\nSarthos - important help\nqaz123tfg - help documentation\nLeif Ericson - new icon");
	AoKHThread = new wxHyperlinkCtrl(this, wxID_ANY, "Age of Kings Heaven AGE forum topic", "http://aok.heavengames.com/cgi-bin/aokcgi/display.cgi?action=st&fn=4&tn=38606&st=recent&f=4,38606,0,365", wxDefaultPosition, wxSize(0, 20), wxNO_BORDER | wxHL_CONTEXTMENU | wxHL_ALIGN_LEFT);
	UPXInfo = new wxStaticText(this, wxID_ANY, "Compressed with:");
	UPXLink = new wxHyperlinkCtrl(this, wxID_ANY, "The Ultimate Packer for eXecutables", "http://upx.sourceforge.net", wxDefaultPosition, wxSize(0, 20), wxNO_BORDER | wxHL_CONTEXTMENU | wxHL_ALIGN_LEFT);

	MainLeft = new wxBoxSizer(wxVERTICAL);
	MainRight = new wxBoxSizer(wxVERTICAL);
	MainAbout = new wxBoxSizer(wxHORIZONTAL);
	
	MainLeft->Add(-1, 15);
	MainLeft->Add(Image, 0, 0);
	MainLeft->Add(-1, 15);

	MainRight->Add(-1, 15);
	MainRight->Add(Title, 0, wxEXPAND);
	MainRight->Add(-1, 15);
	MainRight->Add(Credits, 1, wxEXPAND);
	MainRight->Add(-1, 15);
	MainRight->Add(AoKHThread, 0, wxEXPAND);
	MainRight->Add(-1, 15);
	MainRight->Add(UPXInfo, 0, wxEXPAND);
	MainRight->Add(UPXLink, 0, wxEXPAND);
	MainRight->Add(-1, 15);

	MainAbout->Add(15, -1);
	MainAbout->Add(MainLeft, 0, wxEXPAND);
	MainAbout->Add(15, -1);
	MainAbout->Add(MainRight, 1, wxEXPAND);
	MainAbout->Add(15, -1);

	SetSizerAndFit(MainAbout);
}
