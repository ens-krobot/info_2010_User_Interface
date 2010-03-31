/***************************************************************
 * Name:      RobotMainboardApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Olivier BICHLER (olivier.bichler@ens-cachan.fr)
 * Created:   2008-08-08
 * Copyright: Olivier BICHLER ()
 * License:
 **************************************************************/

#include "RobotMainboardApp.h"

//(*AppHeaders
#include "RobotMainboardMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(RobotMainboardApp);

bool RobotMainboardApp::OnInit() {
	//(*AppInitialize
	bool wxsOK = true;
	wxInitAllImageHandlers();
	if (wxsOK) {
		RobotMainboardFrame* Frame = new RobotMainboardFrame(0);
		Frame->Show();
		SetTopWindow(Frame);
	}
	//*)
	return wxsOK;

}
