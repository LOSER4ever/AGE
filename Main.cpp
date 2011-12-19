/* Main.cpp */

#include "Main.h"
#include "wx/busyinfo.h"

IMPLEMENT_APP(AGE)

bool AGE::OnInit()
{
	{
		wxBusyCursor Wait;
		MainWindow = new AGE_Frame("Advanced Genie Editor");
		MainWindow->SetSize(900, 700);
		MainWindow->Show(true);
		SetTopWindow(MainWindow);
	}
//	MainWindow->Refresh(); // Will be refreshed anyway.
//	MainWindow->Update(); // Immediate refresh.
	wxCommandEvent OpenFiles(wxEVT_COMMAND_MENU_SELECTED, MainWindow->ToolBar_Open);
	MainWindow->ProcessWindowEvent(OpenFiles);
	return true;
}
