/***************************************************************
 * Name:      RobotMainboardMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Olivier BICHLER (olivier.bichler@ens-cachan.fr)
 * Created:   2008-08-08
 * Copyright: Olivier BICHLER ()
 * License:
 **************************************************************/

#include "RobotMainboardMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(RobotMainboardFrame)
#include <wx/bitmap.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
	short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format) {
	wxString wxbuild(wxVERSION_STRING);

	if (format == long_f) {
#if defined(__WXMSW__)
		wxbuild << _T("-Windows");
#elif defined(__UNIX__)
		wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
		wxbuild << _T("-Unicode build");
#else
		wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
	}

	return wxbuild;
}

//(*IdInit(RobotMainboardFrame)
const long RobotMainboardFrame::ID_STATICTEXT51 = wxNewId();
const long RobotMainboardFrame::ID_LISTBOX1 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT52 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON4 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON1 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON2 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON21 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT1 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL1 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT2 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL2 = wxNewId();
const long RobotMainboardFrame::ID_PANEL1 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT7 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT4 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON1 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL4 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT3 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON2 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL3 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT5 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON3 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL5 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT6 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON4 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL6 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT8 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON5 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL7 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT9 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON6 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL8 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT19 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON7 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL17 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT10 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT11 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON8 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL9 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT12 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON9 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL10 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT13 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON10 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL11 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT14 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON11 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL12 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT15 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON12 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL13 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT16 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON13 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL14 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT17 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON14 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL15 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT18 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON15 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL16 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL38 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT43 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL37 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT42 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT20 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT21 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON16 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL18 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT22 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON17 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL19 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT23 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON18 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL20 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT24 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON19 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL21 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT25 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON20 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL22 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT26 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON21 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL23 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT27 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON22 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL24 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL39 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT44 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL40 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT45 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT28 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT29 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON23 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL25 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT30 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON24 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL26 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT31 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON25 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL27 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT32 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON26 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL28 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT33 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON27 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL29 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT34 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON28 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL30 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT35 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON29 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL31 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT36 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON30 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL32 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT37 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT38 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON31 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL33 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT39 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON32 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL34 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT40 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON33 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL35 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT41 = wxNewId();
const long RobotMainboardFrame::ID_TOGGLEBUTTON34 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL36 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL41 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT46 = wxNewId();
const long RobotMainboardFrame::ID_PANEL2 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT47 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT49 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT48 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT50 = wxNewId();
const long RobotMainboardFrame::ID_GAUGE1 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON5 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON8 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT53 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT54 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT55 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT56 = wxNewId();
const long RobotMainboardFrame::ID_GAUGE2 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON6 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON9 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT57 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT58 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT59 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT60 = wxNewId();
const long RobotMainboardFrame::ID_GAUGE3 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON7 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON10 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT73 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT78 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT83 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT88 = wxNewId();
const long RobotMainboardFrame::ID_GAUGE4 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON11 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON12 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT74 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT79 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT84 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT89 = wxNewId();
const long RobotMainboardFrame::ID_GAUGE5 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON13 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON14 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT75 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT80 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT85 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT90 = wxNewId();
const long RobotMainboardFrame::ID_GAUGE6 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON15 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON16 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT76 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT81 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT86 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT91 = wxNewId();
const long RobotMainboardFrame::ID_GAUGE7 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON17 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON18 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT77 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT82 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT87 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT92 = wxNewId();
const long RobotMainboardFrame::ID_GAUGE8 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON19 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON20 = wxNewId();
const long RobotMainboardFrame::ID_PANEL3 = wxNewId();
const long RobotMainboardFrame::ID_BITMAPBUTTON2 = wxNewId();
const long RobotMainboardFrame::ID_BITMAPBUTTON1 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL47 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL46 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL48 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL49 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL50 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL51 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL52 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL53 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT65 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT66 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT67 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT68 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT69 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT70 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT71 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT72 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT93 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT94 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL54 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL55 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL56 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL57 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL58 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL59 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL60 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL61 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT95 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT96 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT97 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT98 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT99 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT100 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT101 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT102 = wxNewId();
const long RobotMainboardFrame::ID_PANEL4 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON3 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL42 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL43 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT61 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT62 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT63 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT64 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL44 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL45 = wxNewId();
const long RobotMainboardFrame::ID_PANEL5 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT107 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT108 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT109 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT110 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT111 = wxNewId();
const long RobotMainboardFrame::ID_CHECKBOX1 = wxNewId();
const long RobotMainboardFrame::ID_CHECKBOX2 = wxNewId();
const long RobotMainboardFrame::ID_CHECKBOX3 = wxNewId();
const long RobotMainboardFrame::ID_CHECKBOX4 = wxNewId();
const long RobotMainboardFrame::ID_CHECKBOX5 = wxNewId();
const long RobotMainboardFrame::ID_SLIDER1 = wxNewId();
const long RobotMainboardFrame::ID_SLIDER2 = wxNewId();
const long RobotMainboardFrame::ID_SLIDER3 = wxNewId();
const long RobotMainboardFrame::ID_SLIDER4 = wxNewId();
const long RobotMainboardFrame::ID_SLIDER5 = wxNewId();
const long RobotMainboardFrame::ID_PANEL7 = wxNewId();
const long RobotMainboardFrame::ID_STATICBOX1 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT106 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL65 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT112 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT113 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT114 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT115 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT116 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT117 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT118 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT119 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT120 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL66 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT121 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT122 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT123 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT125 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT126 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT128 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT129 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT130 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT131 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT132 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON22 = wxNewId();
const long RobotMainboardFrame::ID_STATICBOX2 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT133 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL67 = wxNewId();
const long RobotMainboardFrame::ID_CHECKBOX7 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT134 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL68 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON23 = wxNewId();
const long RobotMainboardFrame::ID_SLIDER6 = wxNewId();
const long RobotMainboardFrame::ID_SLIDER7 = wxNewId();
const long RobotMainboardFrame::ID_CHECKBOX6 = wxNewId();
const long RobotMainboardFrame::ID_BUTTON24 = wxNewId();
const long RobotMainboardFrame::ID_CHECKBOX8 = wxNewId();
const long RobotMainboardFrame::ID_CHECKBOX9 = wxNewId();
const long RobotMainboardFrame::ID_PANEL8 = wxNewId();
const long RobotMainboardFrame::ID_STATICBOX3 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT103 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT104 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT105 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL62 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL63 = wxNewId();
const long RobotMainboardFrame::ID_TEXTCTRL64 = wxNewId();
const long RobotMainboardFrame::ID_PANEL6 = wxNewId();
const long RobotMainboardFrame::ID_STATICTEXT124 = wxNewId();
const long RobotMainboardFrame::ID_CHECKBOX10 = wxNewId();
const long RobotMainboardFrame::ID_SLIDER8 = wxNewId();
const long RobotMainboardFrame::ID_PANEL9 = wxNewId();
const long RobotMainboardFrame::ID_NOTEBOOK1 = wxNewId();
const long RobotMainboardFrame::idMenuQuit = wxNewId();
const long RobotMainboardFrame::idMenuAbout = wxNewId();
const long RobotMainboardFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(RobotMainboardFrame, wxFrame)
	//(*EventTable(RobotMainboardFrame)
	//*)
END_EVENT_TABLE()

RobotMainboardFrame::RobotMainboardFrame(wxWindow* parent, wxWindowID id) {
	//(*Initialize(RobotMainboardFrame)
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer29;
	wxBoxSizer* BoxSizer51;
	wxBoxSizer* BoxSizer19;
	wxBoxSizer* BoxSizer15;
	wxBoxSizer* BoxSizer20;
	wxBoxSizer* BoxSizer76;
	wxBoxSizer* BoxSizer50;
	wxBoxSizer* BoxSizer52;
	wxBoxSizer* BoxSizer46;
	wxBoxSizer* BoxSizer43;
	wxBoxSizer* BoxSizer97;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer10;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer95;
	wxBoxSizer* BoxSizer39;
	wxBoxSizer* BoxSizer8;
	wxBoxSizer* BoxSizer57;
	wxBoxSizer* BoxSizer21;
	wxBoxSizer* BoxSizer58;
	wxBoxSizer* BoxSizer94;
	wxBoxSizer* BoxSizer84;
	wxBoxSizer* BoxSizer85;
	wxBoxSizer* BoxSizer87;
	wxBoxSizer* BoxSizer75;
	wxBoxSizer* BoxSizer69;
	wxMenuItem* MenuItem2;
	wxBoxSizer* BoxSizer86;
	wxBoxSizer* BoxSizer13;
	wxBoxSizer* BoxSizer71;
	wxBoxSizer* BoxSizer36;
	wxBoxSizer* BoxSizer59;
	wxBoxSizer* BoxSizer90;
	wxMenuItem* MenuItem1;
	wxBoxSizer* BoxSizer41;
	wxBoxSizer* BoxSizer66;
	wxBoxSizer* BoxSizer37;
	wxBoxSizer* BoxSizer42;
	wxBoxSizer* BoxSizer93;
	wxBoxSizer* BoxSizer49;
	wxBoxSizer* BoxSizer70;
	wxBoxSizer* BoxSizer48;
	wxBoxSizer* BoxSizer53;
	wxBoxSizer* BoxSizer62;
	wxBoxSizer* BoxSizer23;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer11;
	wxMenu* Menu1;
	wxBoxSizer* BoxSizer16;
	wxBoxSizer* BoxSizer44;
	wxBoxSizer* BoxSizer30;
	wxBoxSizer* BoxSizer18;
	wxBoxSizer* BoxSizer12;
	wxBoxSizer* BoxSizer61;
	wxBoxSizer* BoxSizer83;
	wxBoxSizer* BoxSizer79;
	wxBoxSizer* BoxSizer28;
	wxBoxSizer* BoxSizer63;
	wxBoxSizer* BoxSizer82;
	wxBoxSizer* BoxSizer38;
	wxBoxSizer* BoxSizer72;
	wxBoxSizer* BoxSizer45;
	wxBoxSizer* BoxSizer14;
	wxBoxSizer* BoxSizer80;
	wxBoxSizer* BoxSizer54;
	wxBoxSizer* BoxSizer64;
	wxBoxSizer* BoxSizer27;
	wxBoxSizer* BoxSizer31;
	wxBoxSizer* BoxSizer17;
	wxBoxSizer* BoxSizer81;
	wxBoxSizer* BoxSizer24;
	wxBoxSizer* BoxSizer26;
	wxBoxSizer* BoxSizer73;
	wxBoxSizer* BoxSizer32;
	wxBoxSizer* BoxSizer56;
	wxBoxSizer* BoxSizer68;
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer9;
	wxBoxSizer* BoxSizer89;
	wxBoxSizer* BoxSizer47;
	wxMenuBar* MenuBar1;
	wxBoxSizer* BoxSizer77;
	wxBoxSizer* BoxSizer55;
	wxBoxSizer* BoxSizer34;
	wxBoxSizer* BoxSizer33;
	wxBoxSizer* BoxSizer22;
	wxBoxSizer* BoxSizer35;
	wxBoxSizer* BoxSizer67;
	wxBoxSizer* BoxSizer78;
	wxBoxSizer* BoxSizer3;
	wxMenu* Menu2;
	wxBoxSizer* BoxSizer60;
	wxBoxSizer* BoxSizer25;
	wxBoxSizer* BoxSizer88;
	wxBoxSizer* BoxSizer65;
	wxBoxSizer* BoxSizer74;
	wxBoxSizer* BoxSizer91;
	wxBoxSizer* BoxSizer40;
	wxBoxSizer* BoxSizer96;

	Create(parent, wxID_ANY, _("Robot Mainboard Program"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(773,481));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Notebook1 = new wxNotebook(this, ID_NOTEBOOK1, wxDefaultPosition, wxSize(777,481), 0, _T("ID_NOTEBOOK1"));
	Panel1 = new wxPanel(Notebook1, ID_PANEL1, wxPoint(33,48), wxSize(564,382), wxTAB_TRAVERSAL|wxFULL_REPAINT_ON_RESIZE, _T("ID_PANEL1"));
	BoxSizer56 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer57 = new wxBoxSizer(wxVERTICAL);
	StaticText14 = new wxStaticText(Panel1, ID_STATICTEXT51, _("Périphérique(s) connecté(s) :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT51"));
	BoxSizer57->Add(StaticText14, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	ListBox1 = new wxListBox(Panel1, ID_LISTBOX1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_LISTBOX1"));
	BoxSizer57->Add(ListBox1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer56->Add(BoxSizer57, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer75 = new wxBoxSizer(wxVERTICAL);
	StaticText15 = new wxStaticText(Panel1, ID_STATICTEXT52, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT52"));
	BoxSizer75->Add(StaticText15, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer76 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer58 = new wxBoxSizer(wxVERTICAL);
	BoxSizer59 = new wxBoxSizer(wxHORIZONTAL);
	Button4 = new wxButton(Panel1, ID_BUTTON4, _("Reset général"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
	Button4->Disable();
	BoxSizer59->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer58->Add(BoxSizer59, 0, wxTOP|wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer60 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Reset"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer60->Add(Button1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer58->Add(BoxSizer60, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer81 = new wxBoxSizer(wxHORIZONTAL);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Bootloader"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer81->Add(Button2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer58->Add(BoxSizer81, 0, wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer90 = new wxBoxSizer(wxHORIZONTAL);
	Button21 = new wxButton(Panel1, ID_BUTTON21, _("Test"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON21"));
	BoxSizer90->Add(Button21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer58->Add(BoxSizer90, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer76->Add(BoxSizer58, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer63 = new wxBoxSizer(wxVERTICAL);
	BoxSizer61 = new wxBoxSizer(wxVERTICAL);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Signature du firmware :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer61->Add(StaticText1, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(278,66), wxTE_MULTILINE|wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	BoxSizer61->Add(TextCtrl1, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer63->Add(BoxSizer61, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer62 = new wxBoxSizer(wxHORIZONTAL);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Source du Reset :"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	BoxSizer62->Add(StaticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	BoxSizer62->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer63->Add(BoxSizer62, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer76->Add(BoxSizer63, 2, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer75->Add(BoxSizer76, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer56->Add(BoxSizer75, 2, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(BoxSizer56);
	BoxSizer56->SetSizeHints(Panel1);
	Panel2 = new wxPanel(Notebook1, ID_PANEL2, wxPoint(98,5), wxDefaultSize, wxTAB_TRAVERSAL|wxFULL_REPAINT_ON_RESIZE, _T("ID_PANEL2"));
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer3 = new wxBoxSizer(wxVERTICAL);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	StaticText7 = new wxStaticText(Panel2, ID_STATICTEXT7, _("Port A"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT7"));
	wxFont StaticText7Font(9,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText7->SetFont(StaticText7Font);
	BoxSizer8->Add(StaticText7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer8, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RA0 = new wxStaticText(Panel2, ID_STATICTEXT4, _("RA0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	BoxSizer12->Add(StaticText_RA0, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RA0 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON1, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON1"));
	BoxSizer12->Add(ToggleButton_RA0, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RA0 = new wxTextCtrl(Panel2, ID_TEXTCTRL4, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	TextCtrl_RA0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer12->Add(TextCtrl_RA0, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer12, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RA1 = new wxStaticText(Panel2, ID_STATICTEXT3, _("RA1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	BoxSizer13->Add(StaticText_RA1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RA1 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON2, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON2"));
	BoxSizer13->Add(ToggleButton_RA1, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RA1 = new wxTextCtrl(Panel2, ID_TEXTCTRL3, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	TextCtrl_RA1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer13->Add(TextCtrl_RA1, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer13, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RA2 = new wxStaticText(Panel2, ID_STATICTEXT5, _("RA2"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	BoxSizer14->Add(StaticText_RA2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RA2 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON3, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON3"));
	BoxSizer14->Add(ToggleButton_RA2, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RA2 = new wxTextCtrl(Panel2, ID_TEXTCTRL5, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	TextCtrl_RA2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer14->Add(TextCtrl_RA2, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer14, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer15 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RA3 = new wxStaticText(Panel2, ID_STATICTEXT6, _("RA3"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	BoxSizer15->Add(StaticText_RA3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RA3 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON4, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON4"));
	BoxSizer15->Add(ToggleButton_RA3, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RA3 = new wxTextCtrl(Panel2, ID_TEXTCTRL6, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL6"));
	TextCtrl_RA3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer15->Add(TextCtrl_RA3, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer15, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RA4 = new wxStaticText(Panel2, ID_STATICTEXT8, _("RA4"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT8"));
	BoxSizer9->Add(StaticText_RA4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RA4 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON5, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON5"));
	BoxSizer9->Add(ToggleButton_RA4, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RA4 = new wxTextCtrl(Panel2, ID_TEXTCTRL7, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL7"));
	TextCtrl_RA4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer9->Add(TextCtrl_RA4, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer9, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RA5 = new wxStaticText(Panel2, ID_STATICTEXT9, _("RA5"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
	BoxSizer10->Add(StaticText_RA5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RA5 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON6, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON6"));
	BoxSizer10->Add(ToggleButton_RA5, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RA5 = new wxTextCtrl(Panel2, ID_TEXTCTRL8, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL8"));
	TextCtrl_RA5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer10->Add(TextCtrl_RA5, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer10, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer24 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RA6 = new wxStaticText(Panel2, ID_STATICTEXT19, _("RA6"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT19"));
	BoxSizer24->Add(StaticText_RA6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RA6 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON7, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON7"));
	ToggleButton_RA6->Disable();
	BoxSizer24->Add(ToggleButton_RA6, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RA6 = new wxTextCtrl(Panel2, ID_TEXTCTRL17, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL17"));
	TextCtrl_RA6->Disable();
	TextCtrl_RA6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer24->Add(TextCtrl_RA6, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3->Add(BoxSizer24, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer2->Add(BoxSizer3, 1, wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
	BoxSizer4 = new wxBoxSizer(wxVERTICAL);
	BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
	StaticText10 = new wxStaticText(Panel2, ID_STATICTEXT10, _("Port B"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
	wxFont StaticText10Font(9,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText10->SetFont(StaticText10Font);
	BoxSizer11->Add(StaticText10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer11, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer16 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RB0 = new wxStaticText(Panel2, ID_STATICTEXT11, _("RB0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT11"));
	BoxSizer16->Add(StaticText_RB0, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RB0 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON8, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON8"));
	ToggleButton_RB0->Disable();
	BoxSizer16->Add(ToggleButton_RB0, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RB0 = new wxTextCtrl(Panel2, ID_TEXTCTRL9, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL9"));
	TextCtrl_RB0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	TextCtrl_RB0->SetBackgroundColour(wxColour(128,255,255));
	BoxSizer16->Add(TextCtrl_RB0, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer16, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer17 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RB1 = new wxStaticText(Panel2, ID_STATICTEXT12, _("RB1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
	BoxSizer17->Add(StaticText_RB1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RB1 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON9, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON9"));
	ToggleButton_RB1->Disable();
	BoxSizer17->Add(ToggleButton_RB1, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RB1 = new wxTextCtrl(Panel2, ID_TEXTCTRL10, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL10"));
	TextCtrl_RB1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	TextCtrl_RB1->SetBackgroundColour(wxColour(128,255,255));
	BoxSizer17->Add(TextCtrl_RB1, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer17, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer18 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RB2 = new wxStaticText(Panel2, ID_STATICTEXT13, _("RB2"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT13"));
	BoxSizer18->Add(StaticText_RB2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RB2 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON10, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON10"));
	BoxSizer18->Add(ToggleButton_RB2, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RB2 = new wxTextCtrl(Panel2, ID_TEXTCTRL11, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL11"));
	TextCtrl_RB2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer18->Add(TextCtrl_RB2, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer18, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer19 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RB3 = new wxStaticText(Panel2, ID_STATICTEXT14, _("RB3"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT14"));
	BoxSizer19->Add(StaticText_RB3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RB3 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON11, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON11"));
	BoxSizer19->Add(ToggleButton_RB3, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RB3 = new wxTextCtrl(Panel2, ID_TEXTCTRL12, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL12"));
	TextCtrl_RB3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer19->Add(TextCtrl_RB3, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer19, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer20 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RB4 = new wxStaticText(Panel2, ID_STATICTEXT15, _("RB4"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
	BoxSizer20->Add(StaticText_RB4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RB4 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON12, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON12"));
	BoxSizer20->Add(ToggleButton_RB4, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RB4 = new wxTextCtrl(Panel2, ID_TEXTCTRL13, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL13"));
	TextCtrl_RB4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer20->Add(TextCtrl_RB4, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer20, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer21 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RB5 = new wxStaticText(Panel2, ID_STATICTEXT16, _("RB5"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT16"));
	BoxSizer21->Add(StaticText_RB5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RB5 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON13, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON13"));
	ToggleButton_RB5->Disable();
	BoxSizer21->Add(ToggleButton_RB5, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RB5 = new wxTextCtrl(Panel2, ID_TEXTCTRL14, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL14"));
	TextCtrl_RB5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	TextCtrl_RB5->SetBackgroundColour(wxColour(255,255,128));
	BoxSizer21->Add(TextCtrl_RB5, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer21, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer22 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RB6 = new wxStaticText(Panel2, ID_STATICTEXT17, _("RB6"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT17"));
	BoxSizer22->Add(StaticText_RB6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RB6 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON14, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON14"));
	ToggleButton_RB6->Disable();
	BoxSizer22->Add(ToggleButton_RB6, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RB6 = new wxTextCtrl(Panel2, ID_TEXTCTRL15, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL15"));
	TextCtrl_RB6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	TextCtrl_RB6->SetBackgroundColour(wxColour(255,255,128));
	BoxSizer22->Add(TextCtrl_RB6, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer22, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer23 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RB7 = new wxStaticText(Panel2, ID_STATICTEXT18, _("RB7"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT18"));
	BoxSizer23->Add(StaticText_RB7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RB7 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON15, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON15"));
	ToggleButton_RB7->Disable();
	BoxSizer23->Add(ToggleButton_RB7, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RB7 = new wxTextCtrl(Panel2, ID_TEXTCTRL16, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL16"));
	TextCtrl_RB7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	TextCtrl_RB7->SetBackgroundColour(wxColour(255,255,128));
	BoxSizer23->Add(TextCtrl_RB7, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer23, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer48 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer48->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer48, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer49 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl4 = new wxTextCtrl(Panel2, ID_TEXTCTRL38, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL38"));
	TextCtrl4->SetBackgroundColour(wxColour(128,255,255));
	BoxSizer49->Add(TextCtrl4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT43, _("I2C"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT43"));
	BoxSizer49->Add(StaticText4, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer49, 0, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer50 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl3 = new wxTextCtrl(Panel2, ID_TEXTCTRL37, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL37"));
	TextCtrl3->SetBackgroundColour(wxColour(255,255,128));
	BoxSizer50->Add(TextCtrl3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT42, _("ICSP"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT42"));
	BoxSizer50->Add(StaticText3, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer50, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer4, 1, wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
	BoxSizer5 = new wxBoxSizer(wxVERTICAL);
	BoxSizer25 = new wxBoxSizer(wxHORIZONTAL);
	StaticText20 = new wxStaticText(Panel2, ID_STATICTEXT20, _("Port C"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT20"));
	wxFont StaticText20Font(9,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText20->SetFont(StaticText20Font);
	BoxSizer25->Add(StaticText20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5->Add(BoxSizer25, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer26 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RC0 = new wxStaticText(Panel2, ID_STATICTEXT21, _("RC0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT21"));
	BoxSizer26->Add(StaticText_RC0, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RC0 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON16, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON16"));
	BoxSizer26->Add(ToggleButton_RC0, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RC0 = new wxTextCtrl(Panel2, ID_TEXTCTRL18, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL18"));
	TextCtrl_RC0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer26->Add(TextCtrl_RC0, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5->Add(BoxSizer26, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer27 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RC1 = new wxStaticText(Panel2, ID_STATICTEXT22, _("RC1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT22"));
	BoxSizer27->Add(StaticText_RC1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RC1 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON17, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON17"));
	BoxSizer27->Add(ToggleButton_RC1, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RC1 = new wxTextCtrl(Panel2, ID_TEXTCTRL19, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL19"));
	TextCtrl_RC1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer27->Add(TextCtrl_RC1, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5->Add(BoxSizer27, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer28 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RC2 = new wxStaticText(Panel2, ID_STATICTEXT23, _("RC2"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT23"));
	BoxSizer28->Add(StaticText_RC2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RC2 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON18, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON18"));
	BoxSizer28->Add(ToggleButton_RC2, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RC2 = new wxTextCtrl(Panel2, ID_TEXTCTRL20, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL20"));
	TextCtrl_RC2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer28->Add(TextCtrl_RC2, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5->Add(BoxSizer28, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer29 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer29->Add(136,28,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5->Add(BoxSizer29, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer30 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RC4 = new wxStaticText(Panel2, ID_STATICTEXT24, _("RC4"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT24"));
	BoxSizer30->Add(StaticText_RC4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RC4 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON19, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON19"));
	ToggleButton_RC4->Disable();
	BoxSizer30->Add(ToggleButton_RC4, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RC4 = new wxTextCtrl(Panel2, ID_TEXTCTRL21, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL21"));
	TextCtrl_RC4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	TextCtrl_RC4->SetBackgroundColour(wxColour(255,128,64));
	BoxSizer30->Add(TextCtrl_RC4, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5->Add(BoxSizer30, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer31 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RC5 = new wxStaticText(Panel2, ID_STATICTEXT25, _("RC5"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT25"));
	BoxSizer31->Add(StaticText_RC5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RC5 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON20, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON20"));
	ToggleButton_RC5->Disable();
	BoxSizer31->Add(ToggleButton_RC5, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RC5 = new wxTextCtrl(Panel2, ID_TEXTCTRL22, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL22"));
	TextCtrl_RC5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	TextCtrl_RC5->SetBackgroundColour(wxColour(255,128,64));
	BoxSizer31->Add(TextCtrl_RC5, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5->Add(BoxSizer31, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer32 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RC6 = new wxStaticText(Panel2, ID_STATICTEXT26, _("RC6"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT26"));
	BoxSizer32->Add(StaticText_RC6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RC6 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON21, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON21"));
	ToggleButton_RC6->Disable();
	BoxSizer32->Add(ToggleButton_RC6, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RC6 = new wxTextCtrl(Panel2, ID_TEXTCTRL23, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL23"));
	TextCtrl_RC6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	TextCtrl_RC6->SetBackgroundColour(wxColour(255,128,255));
	BoxSizer32->Add(TextCtrl_RC6, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5->Add(BoxSizer32, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer47 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RC7 = new wxStaticText(Panel2, ID_STATICTEXT27, _("RC7"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT27"));
	BoxSizer47->Add(StaticText_RC7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RC7 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON22, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON22"));
	ToggleButton_RC7->Disable();
	BoxSizer47->Add(ToggleButton_RC7, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RC7 = new wxTextCtrl(Panel2, ID_TEXTCTRL24, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL24"));
	TextCtrl_RC7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	TextCtrl_RC7->SetBackgroundColour(wxColour(255,128,255));
	BoxSizer47->Add(TextCtrl_RC7, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5->Add(BoxSizer47, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer51 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer51->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5->Add(BoxSizer51, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer52 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl5 = new wxTextCtrl(Panel2, ID_TEXTCTRL39, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL39"));
	TextCtrl5->SetBackgroundColour(wxColour(255,128,64));
	BoxSizer52->Add(TextCtrl5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT44, _("USB"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT44"));
	BoxSizer52->Add(StaticText5, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5->Add(BoxSizer52, 0, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer53 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl6 = new wxTextCtrl(Panel2, ID_TEXTCTRL40, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL40"));
	TextCtrl6->SetBackgroundColour(wxColour(255,128,255));
	BoxSizer53->Add(TextCtrl6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText6 = new wxStaticText(Panel2, ID_STATICTEXT45, _("RS232"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT45"));
	BoxSizer53->Add(StaticText6, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5->Add(BoxSizer53, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer5, 1, wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
	BoxSizer6 = new wxBoxSizer(wxVERTICAL);
	BoxSizer33 = new wxBoxSizer(wxHORIZONTAL);
	StaticText28 = new wxStaticText(Panel2, ID_STATICTEXT28, _("Port D"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT28"));
	wxFont StaticText28Font(9,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText28->SetFont(StaticText28Font);
	BoxSizer33->Add(StaticText28, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6->Add(BoxSizer33, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer34 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RD0 = new wxStaticText(Panel2, ID_STATICTEXT29, _("RD0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT29"));
	BoxSizer34->Add(StaticText_RD0, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RD0 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON23, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON23"));
	BoxSizer34->Add(ToggleButton_RD0, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RD0 = new wxTextCtrl(Panel2, ID_TEXTCTRL25, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL25"));
	TextCtrl_RD0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer34->Add(TextCtrl_RD0, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6->Add(BoxSizer34, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer35 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RD1 = new wxStaticText(Panel2, ID_STATICTEXT30, _("RD1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT30"));
	BoxSizer35->Add(StaticText_RD1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RD1 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON24, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON24"));
	BoxSizer35->Add(ToggleButton_RD1, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RD1 = new wxTextCtrl(Panel2, ID_TEXTCTRL26, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL26"));
	TextCtrl_RD1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer35->Add(TextCtrl_RD1, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6->Add(BoxSizer35, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer36 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RD2 = new wxStaticText(Panel2, ID_STATICTEXT31, _("RD2"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT31"));
	BoxSizer36->Add(StaticText_RD2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RD2 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON25, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON25"));
	BoxSizer36->Add(ToggleButton_RD2, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RD2 = new wxTextCtrl(Panel2, ID_TEXTCTRL27, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL27"));
	TextCtrl_RD2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer36->Add(TextCtrl_RD2, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6->Add(BoxSizer36, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer37 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RD3 = new wxStaticText(Panel2, ID_STATICTEXT32, _("RD3"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT32"));
	BoxSizer37->Add(StaticText_RD3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RD3 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON26, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON26"));
	BoxSizer37->Add(ToggleButton_RD3, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RD3 = new wxTextCtrl(Panel2, ID_TEXTCTRL28, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL28"));
	TextCtrl_RD3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer37->Add(TextCtrl_RD3, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6->Add(BoxSizer37, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer38 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RD4 = new wxStaticText(Panel2, ID_STATICTEXT33, _("RD4"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT33"));
	BoxSizer38->Add(StaticText_RD4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RD4 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON27, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON27"));
	BoxSizer38->Add(ToggleButton_RD4, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RD4 = new wxTextCtrl(Panel2, ID_TEXTCTRL29, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL29"));
	TextCtrl_RD4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer38->Add(TextCtrl_RD4, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6->Add(BoxSizer38, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer39 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RD5 = new wxStaticText(Panel2, ID_STATICTEXT34, _("RD5"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT34"));
	BoxSizer39->Add(StaticText_RD5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RD5 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON28, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON28"));
	BoxSizer39->Add(ToggleButton_RD5, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RD5 = new wxTextCtrl(Panel2, ID_TEXTCTRL30, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL30"));
	TextCtrl_RD5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer39->Add(TextCtrl_RD5, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6->Add(BoxSizer39, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer40 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RD6 = new wxStaticText(Panel2, ID_STATICTEXT35, _("RD6"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT35"));
	BoxSizer40->Add(StaticText_RD6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RD6 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON29, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON29"));
	BoxSizer40->Add(ToggleButton_RD6, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RD6 = new wxTextCtrl(Panel2, ID_TEXTCTRL31, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL31"));
	TextCtrl_RD6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer40->Add(TextCtrl_RD6, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6->Add(BoxSizer40, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer41 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RD7 = new wxStaticText(Panel2, ID_STATICTEXT36, _("RD7"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT36"));
	BoxSizer41->Add(StaticText_RD7, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RD7 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON30, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON30"));
	BoxSizer41->Add(ToggleButton_RD7, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RD7 = new wxTextCtrl(Panel2, ID_TEXTCTRL32, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL32"));
	TextCtrl_RD7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer41->Add(TextCtrl_RD7, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6->Add(BoxSizer41, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer2->Add(BoxSizer6, 1, wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
	BoxSizer7 = new wxBoxSizer(wxVERTICAL);
	BoxSizer42 = new wxBoxSizer(wxHORIZONTAL);
	StaticText37 = new wxStaticText(Panel2, ID_STATICTEXT37, _("Port E"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT37"));
	wxFont StaticText37Font(9,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText37->SetFont(StaticText37Font);
	BoxSizer42->Add(StaticText37, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7->Add(BoxSizer42, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer43 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RE0 = new wxStaticText(Panel2, ID_STATICTEXT38, _("RE0"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT38"));
	BoxSizer43->Add(StaticText_RE0, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RE0 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON31, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON31"));
	ToggleButton_RE0->Disable();
	BoxSizer43->Add(ToggleButton_RE0, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RE0 = new wxTextCtrl(Panel2, ID_TEXTCTRL33, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL33"));
	TextCtrl_RE0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer43->Add(TextCtrl_RE0, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7->Add(BoxSizer43, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer44 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RE1 = new wxStaticText(Panel2, ID_STATICTEXT39, _("RE1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT39"));
	BoxSizer44->Add(StaticText_RE1, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RE1 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON32, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON32"));
	ToggleButton_RE1->Disable();
	BoxSizer44->Add(ToggleButton_RE1, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RE1 = new wxTextCtrl(Panel2, ID_TEXTCTRL34, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL34"));
	TextCtrl_RE1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer44->Add(TextCtrl_RE1, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7->Add(BoxSizer44, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer45 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RE2 = new wxStaticText(Panel2, ID_STATICTEXT40, _("RE2"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT40"));
	BoxSizer45->Add(StaticText_RE2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RE2 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON33, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON33"));
	ToggleButton_RE2->Disable();
	BoxSizer45->Add(ToggleButton_RE2, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RE2 = new wxTextCtrl(Panel2, ID_TEXTCTRL35, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL35"));
	TextCtrl_RE2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	BoxSizer45->Add(TextCtrl_RE2, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7->Add(BoxSizer45, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer46 = new wxBoxSizer(wxHORIZONTAL);
	StaticText_RE3 = new wxStaticText(Panel2, ID_STATICTEXT41, _("RE3"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT41"));
	BoxSizer46->Add(StaticText_RE3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ToggleButton_RE3 = new wxToggleButton(Panel2, ID_TOGGLEBUTTON34, _("Entrée"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TOGGLEBUTTON34"));
	ToggleButton_RE3->Disable();
	BoxSizer46->Add(ToggleButton_RE3, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl_RE3 = new wxTextCtrl(Panel2, ID_TEXTCTRL36, _("0"), wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_RICH|wxTE_CENTRE, wxDefaultValidator, _T("ID_TEXTCTRL36"));
	TextCtrl_RE3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
	TextCtrl_RE3->SetBackgroundColour(wxColour(255,255,128));
	BoxSizer46->Add(TextCtrl_RE3, 2, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7->Add(BoxSizer46, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer54 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer54->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7->Add(BoxSizer54, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer55 = new wxBoxSizer(wxHORIZONTAL);
	TextCtrl7 = new wxTextCtrl(Panel2, ID_TEXTCTRL41, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL41"));
	TextCtrl7->SetBackgroundColour(wxColour(128,255,128));
	BoxSizer55->Add(TextCtrl7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText8 = new wxStaticText(Panel2, ID_STATICTEXT46, _("LED"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT46"));
	BoxSizer55->Add(StaticText8, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer7->Add(BoxSizer55, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer7, 1, wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 4);
	Panel2->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel2);
	BoxSizer2->SetSizeHints(Panel2);
	Panel3 = new wxPanel(Notebook1, ID_PANEL3, wxPoint(197,13), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL3"));
	BoxSizer64 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer65 = new wxBoxSizer(wxVERTICAL);
	StaticText9 = new wxStaticText(Panel3, ID_STATICTEXT47, _("Télémètre 1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT47"));
	BoxSizer65->Add(StaticText9, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer73 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer74 = new wxBoxSizer(wxVERTICAL);
	StaticText12 = new wxStaticText(Panel3, ID_STATICTEXT49, _("300 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT49"));
	wxFont StaticText12Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText12->SetFont(StaticText12Font);
	BoxSizer74->Add(StaticText12, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer74->Add(-1,-1,50, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText11 = new wxStaticText(Panel3, ID_STATICTEXT48, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT48"));
	BoxSizer74->Add(StaticText11, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer74->Add(-1,-1,50, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText13 = new wxStaticText(Panel3, ID_STATICTEXT50, _("≤ 3 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT50"));
	wxFont StaticText13Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText13->SetFont(StaticText13Font);
	BoxSizer74->Add(StaticText13, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer73->Add(BoxSizer74, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Gauge1 = new wxGauge(Panel3, ID_GAUGE1, 3000, wxDefaultPosition, wxDefaultSize, wxGA_VERTICAL, wxDefaultValidator, _T("ID_GAUGE1"));
	BoxSizer73->Add(Gauge1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer65->Add(BoxSizer73, 1, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
	Button5 = new wxButton(Panel3, ID_BUTTON5, _("Calibrer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	BoxSizer65->Add(Button5, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button8 = new wxButton(Panel3, ID_BUTTON8, _("Voir cal."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
	BoxSizer65->Add(Button8, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer64->Add(BoxSizer65, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer66 = new wxBoxSizer(wxVERTICAL);
	StaticText16 = new wxStaticText(Panel3, ID_STATICTEXT53, _("Télémètre 2"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT53"));
	BoxSizer66->Add(StaticText16, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer77 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer78 = new wxBoxSizer(wxVERTICAL);
	StaticText17 = new wxStaticText(Panel3, ID_STATICTEXT54, _("300 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT54"));
	wxFont StaticText17Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText17->SetFont(StaticText17Font);
	BoxSizer78->Add(StaticText17, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer78->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText18 = new wxStaticText(Panel3, ID_STATICTEXT55, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT55"));
	BoxSizer78->Add(StaticText18, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer78->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText19 = new wxStaticText(Panel3, ID_STATICTEXT56, _("≤ 3 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT56"));
	wxFont StaticText19Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText19->SetFont(StaticText19Font);
	BoxSizer78->Add(StaticText19, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer77->Add(BoxSizer78, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Gauge2 = new wxGauge(Panel3, ID_GAUGE2, 3000, wxDefaultPosition, wxDefaultSize, wxGA_VERTICAL, wxDefaultValidator, _T("ID_GAUGE2"));
	BoxSizer77->Add(Gauge2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer66->Add(BoxSizer77, 1, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
	Button6 = new wxButton(Panel3, ID_BUTTON6, _("Calibrer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	BoxSizer66->Add(Button6, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button9 = new wxButton(Panel3, ID_BUTTON9, _("Voir cal."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
	BoxSizer66->Add(Button9, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer64->Add(BoxSizer66, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer67 = new wxBoxSizer(wxVERTICAL);
	StaticText21 = new wxStaticText(Panel3, ID_STATICTEXT57, _("Télémètre 3"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT57"));
	BoxSizer67->Add(StaticText21, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer79 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer80 = new wxBoxSizer(wxVERTICAL);
	StaticText22 = new wxStaticText(Panel3, ID_STATICTEXT58, _("300 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT58"));
	wxFont StaticText22Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText22->SetFont(StaticText22Font);
	BoxSizer80->Add(StaticText22, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer80->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText23 = new wxStaticText(Panel3, ID_STATICTEXT59, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT59"));
	BoxSizer80->Add(StaticText23, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer80->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText24 = new wxStaticText(Panel3, ID_STATICTEXT60, _("≤ 3 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT60"));
	wxFont StaticText24Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText24->SetFont(StaticText24Font);
	BoxSizer80->Add(StaticText24, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer79->Add(BoxSizer80, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Gauge3 = new wxGauge(Panel3, ID_GAUGE3, 3000, wxDefaultPosition, wxDefaultSize, wxGA_VERTICAL, wxDefaultValidator, _T("ID_GAUGE3"));
	BoxSizer79->Add(Gauge3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer67->Add(BoxSizer79, 1, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
	Button7 = new wxButton(Panel3, ID_BUTTON7, _("Calibrer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
	BoxSizer67->Add(Button7, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button10 = new wxButton(Panel3, ID_BUTTON10, _("Voir cal."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
	BoxSizer67->Add(Button10, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer64->Add(BoxSizer67, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer68 = new wxBoxSizer(wxVERTICAL);
	StaticText39 = new wxStaticText(Panel3, ID_STATICTEXT73, _("Télémètre 4"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT73"));
	BoxSizer68->Add(StaticText39, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer82 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer87 = new wxBoxSizer(wxVERTICAL);
	StaticText44 = new wxStaticText(Panel3, ID_STATICTEXT78, _("300 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT78"));
	wxFont StaticText44Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText44->SetFont(StaticText44Font);
	BoxSizer87->Add(StaticText44, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer87->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText49 = new wxStaticText(Panel3, ID_STATICTEXT83, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT83"));
	BoxSizer87->Add(StaticText49, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer87->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText54 = new wxStaticText(Panel3, ID_STATICTEXT88, _("≤ 3 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT88"));
	wxFont StaticText54Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText54->SetFont(StaticText54Font);
	BoxSizer87->Add(StaticText54, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer82->Add(BoxSizer87, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Gauge4 = new wxGauge(Panel3, ID_GAUGE4, 3000, wxDefaultPosition, wxDefaultSize, wxGA_VERTICAL, wxDefaultValidator, _T("ID_GAUGE4"));
	BoxSizer82->Add(Gauge4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer68->Add(BoxSizer82, 1, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
	Button11 = new wxButton(Panel3, ID_BUTTON11, _("Calibrer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
	BoxSizer68->Add(Button11, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button12 = new wxButton(Panel3, ID_BUTTON12, _("Voir cal."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON12"));
	BoxSizer68->Add(Button12, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer64->Add(BoxSizer68, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer69 = new wxBoxSizer(wxVERTICAL);
	StaticText40 = new wxStaticText(Panel3, ID_STATICTEXT74, _("Télémètre 5"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT74"));
	BoxSizer69->Add(StaticText40, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer83 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer89 = new wxBoxSizer(wxVERTICAL);
	StaticText45 = new wxStaticText(Panel3, ID_STATICTEXT79, _("300 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT79"));
	wxFont StaticText45Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText45->SetFont(StaticText45Font);
	BoxSizer89->Add(StaticText45, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer89->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText50 = new wxStaticText(Panel3, ID_STATICTEXT84, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT84"));
	BoxSizer89->Add(StaticText50, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer89->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText55 = new wxStaticText(Panel3, ID_STATICTEXT89, _("≤ 3 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT89"));
	wxFont StaticText55Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText55->SetFont(StaticText55Font);
	BoxSizer89->Add(StaticText55, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer83->Add(BoxSizer89, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Gauge5 = new wxGauge(Panel3, ID_GAUGE5, 3000, wxDefaultPosition, wxDefaultSize, wxGA_VERTICAL, wxDefaultValidator, _T("ID_GAUGE5"));
	BoxSizer83->Add(Gauge5, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer69->Add(BoxSizer83, 1, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
	Button13 = new wxButton(Panel3, ID_BUTTON13, _("Calibrer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON13"));
	BoxSizer69->Add(Button13, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button14 = new wxButton(Panel3, ID_BUTTON14, _("Voir cal."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON14"));
	BoxSizer69->Add(Button14, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer64->Add(BoxSizer69, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer70 = new wxBoxSizer(wxVERTICAL);
	StaticText41 = new wxStaticText(Panel3, ID_STATICTEXT75, _("Télémètre 6"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT75"));
	BoxSizer70->Add(StaticText41, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer84 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer91 = new wxBoxSizer(wxVERTICAL);
	StaticText46 = new wxStaticText(Panel3, ID_STATICTEXT80, _("300 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT80"));
	wxFont StaticText46Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText46->SetFont(StaticText46Font);
	BoxSizer91->Add(StaticText46, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer91->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText51 = new wxStaticText(Panel3, ID_STATICTEXT85, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT85"));
	BoxSizer91->Add(StaticText51, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer91->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText56 = new wxStaticText(Panel3, ID_STATICTEXT90, _("≤ 3 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT90"));
	wxFont StaticText56Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText56->SetFont(StaticText56Font);
	BoxSizer91->Add(StaticText56, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer84->Add(BoxSizer91, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Gauge6 = new wxGauge(Panel3, ID_GAUGE6, 3000, wxDefaultPosition, wxDefaultSize, wxGA_VERTICAL, wxDefaultValidator, _T("ID_GAUGE6"));
	BoxSizer84->Add(Gauge6, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer70->Add(BoxSizer84, 1, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
	Button15 = new wxButton(Panel3, ID_BUTTON15, _("Calibrer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON15"));
	BoxSizer70->Add(Button15, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button16 = new wxButton(Panel3, ID_BUTTON16, _("Voir cal."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON16"));
	BoxSizer70->Add(Button16, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer64->Add(BoxSizer70, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer71 = new wxBoxSizer(wxVERTICAL);
	StaticText42 = new wxStaticText(Panel3, ID_STATICTEXT76, _("Télémètre 7"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT76"));
	BoxSizer71->Add(StaticText42, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer85 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer93 = new wxBoxSizer(wxVERTICAL);
	StaticText47 = new wxStaticText(Panel3, ID_STATICTEXT81, _("300 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT81"));
	wxFont StaticText47Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText47->SetFont(StaticText47Font);
	BoxSizer93->Add(StaticText47, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer93->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText52 = new wxStaticText(Panel3, ID_STATICTEXT86, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT86"));
	BoxSizer93->Add(StaticText52, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer93->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText57 = new wxStaticText(Panel3, ID_STATICTEXT91, _("≤ 3 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT91"));
	wxFont StaticText57Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText57->SetFont(StaticText57Font);
	BoxSizer93->Add(StaticText57, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer85->Add(BoxSizer93, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Gauge7 = new wxGauge(Panel3, ID_GAUGE7, 3000, wxDefaultPosition, wxDefaultSize, wxGA_VERTICAL, wxDefaultValidator, _T("ID_GAUGE7"));
	BoxSizer85->Add(Gauge7, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer71->Add(BoxSizer85, 1, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
	Button17 = new wxButton(Panel3, ID_BUTTON17, _("Calibrer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON17"));
	BoxSizer71->Add(Button17, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button18 = new wxButton(Panel3, ID_BUTTON18, _("Voir cal."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON18"));
	BoxSizer71->Add(Button18, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer64->Add(BoxSizer71, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer72 = new wxBoxSizer(wxVERTICAL);
	StaticText43 = new wxStaticText(Panel3, ID_STATICTEXT77, _("Télémètre 8"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT77"));
	BoxSizer72->Add(StaticText43, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer86 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer95 = new wxBoxSizer(wxVERTICAL);
	StaticText48 = new wxStaticText(Panel3, ID_STATICTEXT82, _("300 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT82"));
	wxFont StaticText48Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText48->SetFont(StaticText48Font);
	BoxSizer95->Add(StaticText48, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer95->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText53 = new wxStaticText(Panel3, ID_STATICTEXT87, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT87"));
	BoxSizer95->Add(StaticText53, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer95->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	StaticText58 = new wxStaticText(Panel3, ID_STATICTEXT92, _("≤ 3 cm"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT92"));
	wxFont StaticText58Font(6,wxDEFAULT,wxFONTSTYLE_NORMAL,wxNORMAL,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText58->SetFont(StaticText58Font);
	BoxSizer95->Add(StaticText58, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer86->Add(BoxSizer95, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	Gauge8 = new wxGauge(Panel3, ID_GAUGE8, 3000, wxDefaultPosition, wxDefaultSize, wxGA_VERTICAL, wxDefaultValidator, _T("ID_GAUGE8"));
	BoxSizer86->Add(Gauge8, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer72->Add(BoxSizer86, 1, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
	Button19 = new wxButton(Panel3, ID_BUTTON19, _("Calibrer"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON19"));
	BoxSizer72->Add(Button19, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button20 = new wxButton(Panel3, ID_BUTTON20, _("Voir cal."), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON20"));
	BoxSizer72->Add(Button20, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer64->Add(BoxSizer72, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel3->SetSizer(BoxSizer64);
	BoxSizer64->Fit(Panel3);
	BoxSizer64->SetSizeHints(Panel3);
	Panel4 = new wxPanel(Notebook1, ID_PANEL4, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL4"));
	BitmapButton2 = new wxBitmapButton(Panel4, ID_BITMAPBUTTON2, wxBitmap(wxImage(_T("D:\\Robotique\\Robot\\assy\\RobotMainboard\\robot.png"))), wxPoint(430,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	BitmapButton2->SetDefault();
	BitmapButton2->Disable();
	BitmapButton2->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	BitmapButton1 = new wxBitmapButton(Panel4, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("D:\\Robotique\\Robot\\assy\\RobotMainboard\\robot.png"))), wxPoint(50,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	BitmapButton1->SetDefault();
	BitmapButton1->Disable();
	BitmapButton1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	TextCtrl_TOR1 = new wxTextCtrl(Panel4, ID_TEXTCTRL47, wxEmptyString, wxPoint(264,112), wxSize(16,16), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL47"));
	TextCtrl_TOR2 = new wxTextCtrl(Panel4, ID_TEXTCTRL46, wxEmptyString, wxPoint(104,112), wxSize(16,16), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL46"));
	TextCtrl_TOR3 = new wxTextCtrl(Panel4, ID_TEXTCTRL48, wxEmptyString, wxPoint(48,248), wxSize(16,16), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL48"));
	TextCtrl_TOR4 = new wxTextCtrl(Panel4, ID_TEXTCTRL49, wxEmptyString, wxPoint(80,320), wxSize(16,16), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL49"));
	TextCtrl_TOR5 = new wxTextCtrl(Panel4, ID_TEXTCTRL50, wxEmptyString, wxPoint(184,384), wxSize(16,16), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL50"));
	TextCtrl_TOR6 = new wxTextCtrl(Panel4, ID_TEXTCTRL51, wxEmptyString, wxPoint(296,320), wxSize(16,16), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL51"));
	TextCtrl_TOR7 = new wxTextCtrl(Panel4, ID_TEXTCTRL52, wxEmptyString, wxPoint(320,248), wxSize(16,16), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL52"));
	TextCtrl_TOR8 = new wxTextCtrl(Panel4, ID_TEXTCTRL53, wxEmptyString, wxPoint(184,360), wxSize(16,16), wxTE_READONLY, wxDefaultValidator, _T("ID_TEXTCTRL53"));
	StaticText30 = new wxStaticText(Panel4, ID_STATICTEXT65, _("TOR1"), wxPoint(288,104), wxDefaultSize, 0, _T("ID_STATICTEXT65"));
	StaticText31 = new wxStaticText(Panel4, ID_STATICTEXT66, _("TOR2"), wxPoint(128,104), wxDefaultSize, 0, _T("ID_STATICTEXT66"));
	StaticText32 = new wxStaticText(Panel4, ID_STATICTEXT67, _("TOR3"), wxPoint(72,248), wxDefaultSize, 0, _T("ID_STATICTEXT67"));
	StaticText33 = new wxStaticText(Panel4, ID_STATICTEXT68, _("TOR4"), wxPoint(104,320), wxDefaultSize, 0, _T("ID_STATICTEXT68"));
	StaticText34 = new wxStaticText(Panel4, ID_STATICTEXT69, _("TOR7"), wxPoint(344,248), wxDefaultSize, 0, _T("ID_STATICTEXT69"));
	StaticText35 = new wxStaticText(Panel4, ID_STATICTEXT70, _("TOR5"), wxPoint(208,384), wxDefaultSize, 0, _T("ID_STATICTEXT70"));
	StaticText36 = new wxStaticText(Panel4, ID_STATICTEXT71, _("TOR8"), wxPoint(208,352), wxDefaultSize, 0, _T("ID_STATICTEXT71"));
	StaticText38 = new wxStaticText(Panel4, ID_STATICTEXT72, _("TOR6"), wxPoint(320,320), wxDefaultSize, 0, _T("ID_STATICTEXT72"));
	StaticText59 = new wxStaticText(Panel4, ID_STATICTEXT93, _("Capteurs horizontaux"), wxPoint(120,40), wxDefaultSize, 0, _T("ID_STATICTEXT93"));
	wxFont StaticText59Font(9,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText59->SetFont(StaticText59Font);
	StaticText60 = new wxStaticText(Panel4, ID_STATICTEXT94, _("Capteurs verticaux"), wxPoint(500,40), wxDefaultSize, 0, _T("ID_STATICTEXT94"));
	wxFont StaticText60Font(9,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText60->SetFont(StaticText60Font);
	TextCtrl_TOR13 = new wxTextCtrl(Panel4, ID_TEXTCTRL54, wxEmptyString, wxPoint(568,376), wxSize(16,16), wxTE_READONLY|wxSTATIC_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL54"));
	TextCtrl_TOR11 = new wxTextCtrl(Panel4, ID_TEXTCTRL55, wxEmptyString, wxPoint(448,248), wxSize(16,16), wxTE_READONLY|wxSTATIC_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL55"));
	TextCtrl_TOR15 = new wxTextCtrl(Panel4, ID_TEXTCTRL56, wxEmptyString, wxPoint(680,248), wxSize(16,16), wxTE_READONLY|wxSTATIC_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL56"));
	TextCtrl_TOR12 = new wxTextCtrl(Panel4, ID_TEXTCTRL57, wxEmptyString, wxPoint(480,360), wxSize(16,16), wxTE_READONLY|wxRAISED_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL57"));
	TextCtrl_TOR14 = new wxTextCtrl(Panel4, ID_TEXTCTRL58, wxEmptyString, wxPoint(648,360), wxSize(16,16), wxTE_READONLY|wxRAISED_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL58"));
	TextCtrl_TOR10 = new wxTextCtrl(Panel4, ID_TEXTCTRL59, wxEmptyString, wxPoint(416,176), wxSize(16,16), wxTE_READONLY|wxRAISED_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL59"));
	TextCtrl_TOR16 = new wxTextCtrl(Panel4, ID_TEXTCTRL60, wxEmptyString, wxPoint(712,176), wxSize(16,16), wxTE_READONLY|wxRAISED_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL60"));
	TextCtrl_TOR9 = new wxTextCtrl(Panel4, ID_TEXTCTRL61, wxEmptyString, wxPoint(568,120), wxSize(16,16), wxTE_READONLY|wxSTATIC_BORDER, wxDefaultValidator, _T("ID_TEXTCTRL61"));
	StaticText61 = new wxStaticText(Panel4, ID_STATICTEXT95, _("TOR9"), wxPoint(592,104), wxDefaultSize, 0, _T("ID_STATICTEXT95"));
	StaticText62 = new wxStaticText(Panel4, ID_STATICTEXT96, _("TOR10"), wxPoint(384,152), wxDefaultSize, 0, _T("ID_STATICTEXT96"));
	StaticText63 = new wxStaticText(Panel4, ID_STATICTEXT97, _("TOR11"), wxPoint(472,248), wxDefaultSize, 0, _T("ID_STATICTEXT97"));
	StaticText64 = new wxStaticText(Panel4, ID_STATICTEXT98, _("TOR12"), wxPoint(504,336), wxDefaultSize, 0, _T("ID_STATICTEXT98"));
	StaticText65 = new wxStaticText(Panel4, ID_STATICTEXT99, _("TOR13"), wxPoint(576,352), wxDefaultSize, 0, _T("ID_STATICTEXT99"));
	StaticText66 = new wxStaticText(Panel4, ID_STATICTEXT100, _("TOR14"), wxPoint(672,360), wxDefaultSize, 0, _T("ID_STATICTEXT100"));
	StaticText67 = new wxStaticText(Panel4, ID_STATICTEXT101, _("TOR15"), wxPoint(632,248), wxDefaultSize, 0, _T("ID_STATICTEXT101"));
	StaticText68 = new wxStaticText(Panel4, ID_STATICTEXT102, _("TOR16"), wxPoint(720,152), wxDefaultSize, 0, _T("ID_STATICTEXT102"));
	Panel5 = new wxPanel(Notebook1, ID_PANEL5, wxPoint(394,11), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL5"));
	Button3 = new wxButton(Panel5, ID_BUTTON3, _("Test"), wxPoint(64,80), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	TextCtrl8 = new wxTextCtrl(Panel5, ID_TEXTCTRL42, wxEmptyString, wxPoint(72,160), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL42"));
	TextCtrl9 = new wxTextCtrl(Panel5, ID_TEXTCTRL43, wxEmptyString, wxPoint(72,192), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL43"));
	StaticText25 = new wxStaticText(Panel5, ID_STATICTEXT61, _("Isens1 :"), wxPoint(16,168), wxDefaultSize, 0, _T("ID_STATICTEXT61"));
	StaticText26 = new wxStaticText(Panel5, ID_STATICTEXT62, _("Isens2 :"), wxPoint(16,200), wxDefaultSize, 0, _T("ID_STATICTEXT62"));
	StaticText27 = new wxStaticText(Panel5, ID_STATICTEXT63, _("Position roue droite :"), wxPoint(272,72), wxDefaultSize, 0, _T("ID_STATICTEXT63"));
	StaticText29 = new wxStaticText(Panel5, ID_STATICTEXT64, _("Position roue gauche :"), wxPoint(272,96), wxDefaultSize, 0, _T("ID_STATICTEXT64"));
	TextCtrl10 = new wxTextCtrl(Panel5, ID_TEXTCTRL44, wxEmptyString, wxPoint(408,64), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL44"));
	TextCtrl11 = new wxTextCtrl(Panel5, ID_TEXTCTRL45, wxEmptyString, wxPoint(408,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL45"));
	Panel7 = new wxPanel(Notebook1, ID_PANEL7, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL7"));
	BoxSizer88 = new wxBoxSizer(wxHORIZONTAL);
	BoxSizer94 = new wxBoxSizer(wxVERTICAL);
	StaticText73 = new wxStaticText(Panel7, ID_STATICTEXT107, _("1"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT107"));
	wxFont StaticText73Font(wxDEFAULT,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText73->SetFont(StaticText73Font);
	BoxSizer94->Add(StaticText73, 1, wxALL|wxSHAPED|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText74 = new wxStaticText(Panel7, ID_STATICTEXT108, _("2"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT108"));
	wxFont StaticText74Font(wxDEFAULT,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText74->SetFont(StaticText74Font);
	BoxSizer94->Add(StaticText74, 1, wxALL|wxSHAPED|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText75 = new wxStaticText(Panel7, ID_STATICTEXT109, _("3"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT109"));
	wxFont StaticText75Font(wxDEFAULT,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText75->SetFont(StaticText75Font);
	BoxSizer94->Add(StaticText75, 1, wxALL|wxSHAPED|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText76 = new wxStaticText(Panel7, ID_STATICTEXT110, _("4"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT110"));
	wxFont StaticText76Font(wxDEFAULT,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText76->SetFont(StaticText76Font);
	BoxSizer94->Add(StaticText76, 1, wxALL|wxSHAPED|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText77 = new wxStaticText(Panel7, ID_STATICTEXT111, _("5"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT111"));
	wxFont StaticText77Font(wxDEFAULT,wxDEFAULT,wxFONTSTYLE_NORMAL,wxBOLD,false,wxEmptyString,wxFONTENCODING_DEFAULT);
	StaticText77->SetFont(StaticText77Font);
	BoxSizer94->Add(StaticText77, 1, wxALL|wxSHAPED|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer88->Add(BoxSizer94, 0, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
	BoxSizer96 = new wxBoxSizer(wxVERTICAL);
	CheckBox1 = new wxCheckBox(Panel7, ID_CHECKBOX1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
	CheckBox1->SetValue(false);
	BoxSizer96->Add(CheckBox1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox2 = new wxCheckBox(Panel7, ID_CHECKBOX2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX2"));
	CheckBox2->SetValue(false);
	BoxSizer96->Add(CheckBox2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox3 = new wxCheckBox(Panel7, ID_CHECKBOX3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX3"));
	CheckBox3->SetValue(false);
	BoxSizer96->Add(CheckBox3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox4 = new wxCheckBox(Panel7, ID_CHECKBOX4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX4"));
	CheckBox4->SetValue(false);
	BoxSizer96->Add(CheckBox4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	CheckBox5 = new wxCheckBox(Panel7, ID_CHECKBOX5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX5"));
	CheckBox5->SetValue(false);
	BoxSizer96->Add(CheckBox5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer88->Add(BoxSizer96, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer97 = new wxBoxSizer(wxVERTICAL);
	Slider1 = new wxSlider(Panel7, ID_SLIDER1, 0, -90, 90, wxDefaultPosition, wxDefaultSize, wxSL_LABELS, wxDefaultValidator, _T("ID_SLIDER1"));
	Slider1->Disable();
	BoxSizer97->Add(Slider1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Slider2 = new wxSlider(Panel7, ID_SLIDER2, 0, -90, 90, wxDefaultPosition, wxDefaultSize, wxSL_LABELS, wxDefaultValidator, _T("ID_SLIDER2"));
	Slider2->Disable();
	BoxSizer97->Add(Slider2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Slider3 = new wxSlider(Panel7, ID_SLIDER3, 0, -90, 90, wxDefaultPosition, wxDefaultSize, wxSL_LABELS, wxDefaultValidator, _T("ID_SLIDER3"));
	Slider3->Disable();
	BoxSizer97->Add(Slider3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Slider4 = new wxSlider(Panel7, ID_SLIDER4, 0, -90, 90, wxDefaultPosition, wxDefaultSize, wxSL_LABELS, wxDefaultValidator, _T("ID_SLIDER4"));
	Slider4->Disable();
	BoxSizer97->Add(Slider4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Slider5 = new wxSlider(Panel7, ID_SLIDER5, 0, -90, 90, wxDefaultPosition, wxDefaultSize, wxSL_LABELS, wxDefaultValidator, _T("ID_SLIDER5"));
	Slider5->Disable();
	BoxSizer97->Add(Slider5, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer88->Add(BoxSizer97, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel7->SetSizer(BoxSizer88);
	BoxSizer88->Fit(Panel7);
	BoxSizer88->SetSizeHints(Panel7);
	Panel8 = new wxPanel(Notebook1, ID_PANEL8, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL8"));
	StaticBox1 = new wxStaticBox(Panel8, ID_STATICBOX1, _("Lecture"), wxPoint(24,272), wxSize(720,72), 0, _T("ID_STATICBOX1"));
	StaticText72 = new wxStaticText(Panel8, ID_STATICTEXT106, _("ID de l\'AX12 à contrôler :"), wxPoint(24,32), wxDefaultSize, 0, _T("ID_STATICTEXT106"));
	TextCtrl15 = new wxTextCtrl(Panel8, ID_TEXTCTRL65, wxEmptyString, wxPoint(176,24), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL65"));
	StaticText78 = new wxStaticText(Panel8, ID_STATICTEXT112, _("CW Angle Limit :"), wxPoint(24,72), wxDefaultSize, 0, _T("ID_STATICTEXT112"));
	StaticText79 = new wxStaticText(Panel8, ID_STATICTEXT113, _("CCW Angle Limit :"), wxPoint(24,96), wxDefaultSize, 0, _T("ID_STATICTEXT113"));
	StaticText80 = new wxStaticText(Panel8, ID_STATICTEXT114, _("Goal Position :"), wxPoint(280,104), wxDefaultSize, 0, _T("ID_STATICTEXT114"));
	StaticText81 = new wxStaticText(Panel8, ID_STATICTEXT115, _("Present Position :"), wxPoint(24,136), wxDefaultSize, 0, _T("ID_STATICTEXT115"));
	StaticText82 = new wxStaticText(Panel8, ID_STATICTEXT116, _("Moving Speed :"), wxPoint(280,192), wxDefaultSize, 0, _T("ID_STATICTEXT116"));
	StaticText83 = new wxStaticText(Panel8, ID_STATICTEXT117, _("Present Speed :"), wxPoint(24,160), wxDefaultSize, 0, _T("ID_STATICTEXT117"));
	StaticText84 = new wxStaticText(Panel8, ID_STATICTEXT118, _("Present Torque :"), wxPoint(24,184), wxDefaultSize, 0, _T("ID_STATICTEXT118"));
	StaticText85 = new wxStaticText(Panel8, ID_STATICTEXT119, _("Present Voltage :"), wxPoint(24,208), wxDefaultSize, 0, _T("ID_STATICTEXT119"));
	StaticText86 = new wxStaticText(Panel8, ID_STATICTEXT120, _("Present Temperature :"), wxPoint(24,232), wxDefaultSize, 0, _T("ID_STATICTEXT120"));
	TextCtrl16 = new wxTextCtrl(Panel8, ID_TEXTCTRL66, wxEmptyString, wxPoint(104,296), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL66"));
	StaticText87 = new wxStaticText(Panel8, ID_STATICTEXT121, _("Adresse :"), wxPoint(40,304), wxDefaultSize, 0, _T("ID_STATICTEXT121"));
	StaticText88 = new wxStaticText(Panel8, ID_STATICTEXT122, _("-"), wxPoint(160,72), wxDefaultSize, 0, _T("ID_STATICTEXT122"));
	StaticText89 = new wxStaticText(Panel8, ID_STATICTEXT123, _("-"), wxPoint(160,96), wxDefaultSize, 0, _T("ID_STATICTEXT123"));
	StaticText91 = new wxStaticText(Panel8, ID_STATICTEXT125, _("-"), wxPoint(160,160), wxDefaultSize, 0, _T("ID_STATICTEXT125"));
	StaticText92 = new wxStaticText(Panel8, ID_STATICTEXT126, _("-"), wxPoint(160,136), wxDefaultSize, 0, _T("ID_STATICTEXT126"));
	StaticText94 = new wxStaticText(Panel8, ID_STATICTEXT128, _("-"), wxPoint(160,184), wxDefaultSize, 0, _T("ID_STATICTEXT128"));
	StaticText95 = new wxStaticText(Panel8, ID_STATICTEXT129, _("-"), wxPoint(160,208), wxDefaultSize, 0, _T("ID_STATICTEXT129"));
	StaticText96 = new wxStaticText(Panel8, ID_STATICTEXT130, _("-"), wxPoint(160,232), wxDefaultSize, 0, _T("ID_STATICTEXT130"));
	StaticText97 = new wxStaticText(Panel8, ID_STATICTEXT131, _("Valeur :"), wxPoint(256,304), wxDefaultSize, 0, _T("ID_STATICTEXT131"));
	StaticText98 = new wxStaticText(Panel8, ID_STATICTEXT132, _("-"), wxPoint(312,304), wxDefaultSize, 0, _T("ID_STATICTEXT132"));
	Button22 = new wxButton(Panel8, ID_BUTTON22, _("Lire valeur"), wxPoint(624,296), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON22"));
	StaticBox2 = new wxStaticBox(Panel8, ID_STATICBOX2, _("Ecriture"), wxPoint(24,360), wxSize(720,72), 0, _T("ID_STATICBOX2"));
	StaticText99 = new wxStaticText(Panel8, ID_STATICTEXT133, _("Adresse :"), wxPoint(40,392), wxDefaultSize, 0, _T("ID_STATICTEXT133"));
	TextCtrl17 = new wxTextCtrl(Panel8, ID_TEXTCTRL67, wxEmptyString, wxPoint(104,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL67"));
	CheckBox7 = new wxCheckBox(Panel8, ID_CHECKBOX7, _("16 bits"), wxPoint(432,392), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX7"));
	CheckBox7->SetValue(false);
	StaticText100 = new wxStaticText(Panel8, ID_STATICTEXT134, _("Valeur :"), wxPoint(256,392), wxDefaultSize, 0, _T("ID_STATICTEXT134"));
	TextCtrl18 = new wxTextCtrl(Panel8, ID_TEXTCTRL68, wxEmptyString, wxPoint(312,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL68"));
	Button23 = new wxButton(Panel8, ID_BUTTON23, _("Ecrire valeur"), wxPoint(624,384), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON23"));
	Slider6 = new wxSlider(Panel8, ID_SLIDER6, 0, 0, 300, wxPoint(392,72), wxSize(352,56), wxSL_LABELS, wxDefaultValidator, _T("ID_SLIDER6"));
	Slider7 = new wxSlider(Panel8, ID_SLIDER7, 114, 1, 114, wxPoint(392,160), wxSize(352,56), wxSL_LABELS, wxDefaultValidator, _T("ID_SLIDER7"));
	Slider7->Disable();
	CheckBox6 = new wxCheckBox(Panel8, ID_CHECKBOX6, _("Rotation libre"), wxPoint(280,136), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX6"));
	CheckBox6->SetValue(false);
	Button24 = new wxButton(Panel8, ID_BUTTON24, _("↓"), wxPoint(568,296), wxSize(39,28), 0, wxDefaultValidator, _T("ID_BUTTON24"));
	Button24->SetHelpText(_("Copier les valeurs dans les cases du dessous"));
	CheckBox8 = new wxCheckBox(Panel8, ID_CHECKBOX8, _("16 bits"), wxPoint(432,304), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX8"));
	CheckBox8->SetValue(false);
	CheckBox9 = new wxCheckBox(Panel8, ID_CHECKBOX9, _("Pas de contrôle de vitesse (vitesse max.)"), wxPoint(280,224), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX9"));
	CheckBox9->SetValue(true);
	Panel6 = new wxPanel(Notebook1, ID_PANEL6, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL6"));
	StaticBox3 = new wxStaticBox(Panel6, ID_STATICBOX3, _("Boussole électronique CMP03"), wxPoint(24,24), wxSize(272,144), 0, _T("ID_STATICBOX3"));
	StaticText69 = new wxStaticText(Panel6, ID_STATICTEXT103, _("Version software :"), wxPoint(48,56), wxDefaultSize, 0, _T("ID_STATICTEXT103"));
	StaticText70 = new wxStaticText(Panel6, ID_STATICTEXT104, _("Angle (0 à 255) :"), wxPoint(48,88), wxDefaultSize, 0, _T("ID_STATICTEXT104"));
	StaticText71 = new wxStaticText(Panel6, ID_STATICTEXT105, _("Angle (en °) :"), wxPoint(48,120), wxDefaultSize, 0, _T("ID_STATICTEXT105"));
	TextCtrl12 = new wxTextCtrl(Panel6, ID_TEXTCTRL62, wxEmptyString, wxPoint(168,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL62"));
	TextCtrl13 = new wxTextCtrl(Panel6, ID_TEXTCTRL63, wxEmptyString, wxPoint(168,88), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL63"));
	TextCtrl14 = new wxTextCtrl(Panel6, ID_TEXTCTRL64, wxEmptyString, wxPoint(168,120), wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL64"));
	Panel9 = new wxPanel(Notebook1, ID_PANEL9, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL9"));
	StaticText90 = new wxStaticText(Panel9, ID_STATICTEXT124, _("Moteur 1 :"), wxPoint(40,56), wxDefaultSize, 0, _T("ID_STATICTEXT124"));
	CheckBox10 = new wxCheckBox(Panel9, ID_CHECKBOX10, wxEmptyString, wxPoint(120,56), wxDefaultSize, 0, wxDefaultValidator, _T("ID_CHECKBOX10"));
	CheckBox10->SetValue(false);
	Slider8 = new wxSlider(Panel9, ID_SLIDER8, 0, -100, 100, wxPoint(168,24), wxSize(584,64), wxSL_LABELS, wxDefaultValidator, _T("ID_SLIDER8"));
	Slider8->Disable();
	Notebook1->AddPage(Panel1, _("Général"), false);
	Notebook1->AddPage(Panel2, _("Entrées / Sorties"), false);
	Notebook1->AddPage(Panel3, _("Télémétrie"), false);
	Notebook1->AddPage(Panel4, _("Capteurs TOR"), false);
	Notebook1->AddPage(Panel5, _("Asservissement"), false);
	Notebook1->AddPage(Panel7, _("Servomoteurs"), false);
	Notebook1->AddPage(Panel8, _("AX12"), false);
	Notebook1->AddPage(Panel6, _("I2C"), false);
	Notebook1->AddPage(Panel9, _("Moteurs"), false);
	BoxSizer1->Add(Notebook1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(BoxSizer1);
	MenuBar1 = new wxMenuBar();
	Menu1 = new wxMenu();
	MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quitter\tAlt-F4"), _("Quitter l\'application"), wxITEM_NORMAL);
	Menu1->Append(MenuItem1);
	MenuBar1->Append(Menu1, _("&Fichier"));
	Menu2 = new wxMenu();
	MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("A propos\tF1"), _("Afficher les informations à propos de cette application"), wxITEM_NORMAL);
	Menu2->Append(MenuItem2);
	MenuBar1->Append(Menu2, _("Aide"));
	SetMenuBar(MenuBar1);
	StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
	int __wxStatusBarWidths_1[2] = { -3, -2 };
	int __wxStatusBarStyles_1[2] = { wxSB_NORMAL, wxSB_NORMAL };
	StatusBar1->SetFieldsCount(2,__wxStatusBarWidths_1);
	StatusBar1->SetStatusStyles(2,__wxStatusBarStyles_1);
	SetStatusBar(StatusBar1);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_LISTBOX1,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&RobotMainboardFrame::OnListBox1Select);
	Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton4Click);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton2Click);
	Connect(ID_BUTTON21,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton21Click);
	Connect(ID_TOGGLEBUTTON1,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RA0Toggle);
	Connect(ID_TEXTCTRL4,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RA0Text);
	Connect(ID_TOGGLEBUTTON2,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RA1Toggle);
	Connect(ID_TEXTCTRL3,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RA1Text);
	Connect(ID_TOGGLEBUTTON3,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RA2Toggle);
	Connect(ID_TEXTCTRL5,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RA2Text);
	Connect(ID_TOGGLEBUTTON4,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RA3Toggle);
	Connect(ID_TEXTCTRL6,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RA3Text);
	Connect(ID_TOGGLEBUTTON5,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RA4Toggle);
	Connect(ID_TEXTCTRL7,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RA4Text);
	Connect(ID_TOGGLEBUTTON6,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RA5Toggle);
	Connect(ID_TEXTCTRL8,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RA5Text);
	Connect(ID_TOGGLEBUTTON7,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RA6Toggle);
	Connect(ID_TEXTCTRL17,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RA6Text);
	Connect(ID_TOGGLEBUTTON8,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RB0Toggle);
	Connect(ID_TEXTCTRL9,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RB0Text);
	Connect(ID_TOGGLEBUTTON9,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RB1Toggle);
	Connect(ID_TEXTCTRL10,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RB1Text);
	Connect(ID_TOGGLEBUTTON10,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RB2Toggle);
	Connect(ID_TEXTCTRL11,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RB2Text);
	Connect(ID_TOGGLEBUTTON11,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RB3Toggle);
	Connect(ID_TEXTCTRL12,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RB3Text);
	Connect(ID_TOGGLEBUTTON12,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RB4Toggle);
	Connect(ID_TEXTCTRL13,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RB4Text);
	Connect(ID_TOGGLEBUTTON13,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RB5Toggle);
	Connect(ID_TEXTCTRL14,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RB5Text);
	Connect(ID_TOGGLEBUTTON14,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RB6Toggle);
	Connect(ID_TEXTCTRL15,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RB6Text);
	Connect(ID_TOGGLEBUTTON15,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RB7Toggle);
	Connect(ID_TEXTCTRL16,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RB7Text);
	Connect(ID_TOGGLEBUTTON16,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RC0Toggle);
	Connect(ID_TEXTCTRL18,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RC0Text);
	Connect(ID_TOGGLEBUTTON17,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RC1Toggle);
	Connect(ID_TEXTCTRL19,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RC1Text);
	Connect(ID_TOGGLEBUTTON18,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RC2Toggle);
	Connect(ID_TEXTCTRL20,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RC2Text);
	Connect(ID_TOGGLEBUTTON19,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RC4Toggle);
	Connect(ID_TEXTCTRL21,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RC4Text);
	Connect(ID_TOGGLEBUTTON20,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RC5Toggle);
	Connect(ID_TEXTCTRL22,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RC5Text);
	Connect(ID_TOGGLEBUTTON21,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RC6Toggle);
	Connect(ID_TEXTCTRL23,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RC6Text);
	Connect(ID_TOGGLEBUTTON22,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RC7Toggle);
	Connect(ID_TEXTCTRL24,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RC7Text);
	Connect(ID_TOGGLEBUTTON23,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RD0Toggle);
	Connect(ID_TEXTCTRL25,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RD0Text);
	Connect(ID_TOGGLEBUTTON24,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RD1Toggle);
	Connect(ID_TEXTCTRL26,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RD1Text);
	Connect(ID_TOGGLEBUTTON25,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RD2Toggle);
	Connect(ID_TEXTCTRL27,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RD2Text);
	Connect(ID_TOGGLEBUTTON26,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RD3Toggle);
	Connect(ID_TEXTCTRL28,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RD3Text);
	Connect(ID_TOGGLEBUTTON27,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RD4Toggle);
	Connect(ID_TEXTCTRL29,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RD4Text);
	Connect(ID_TOGGLEBUTTON28,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RD5Toggle);
	Connect(ID_TEXTCTRL30,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RD5Text);
	Connect(ID_TOGGLEBUTTON29,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RD6Toggle);
	Connect(ID_TEXTCTRL31,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RD6Text);
	Connect(ID_TOGGLEBUTTON30,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RD7Toggle);
	Connect(ID_TEXTCTRL32,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RD7Text);
	Connect(ID_TOGGLEBUTTON31,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RE0Toggle);
	Connect(ID_TEXTCTRL33,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RE0Text);
	Connect(ID_TOGGLEBUTTON32,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RE1Toggle);
	Connect(ID_TEXTCTRL34,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RE1Text);
	Connect(ID_TOGGLEBUTTON33,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RE2Toggle);
	Connect(ID_TEXTCTRL35,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RE2Text);
	Connect(ID_TOGGLEBUTTON34,wxEVT_COMMAND_TOGGLEBUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnToggleButton_RE3Toggle);
	Connect(ID_TEXTCTRL36,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&RobotMainboardFrame::OnTextCtrl_RE3Text);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton5Click);
	Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton8Click);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton6Click);
	Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton9Click);
	Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton7Click);
	Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton10Click);
	Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton11Click1);
	Connect(ID_BUTTON12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton12Click);
	Connect(ID_BUTTON13,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton13Click);
	Connect(ID_BUTTON14,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton14Click);
	Connect(ID_BUTTON15,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton15Click);
	Connect(ID_BUTTON16,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton16Click);
	Connect(ID_BUTTON17,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton17Click);
	Connect(ID_BUTTON18,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton18Click);
	Connect(ID_BUTTON19,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton19Click);
	Connect(ID_BUTTON20,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton20Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton3Click);
	Connect(ID_CHECKBOX1,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnCheckBox1Click);
	Connect(ID_CHECKBOX2,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnCheckBox2Click);
	Connect(ID_CHECKBOX3,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnCheckBox3Click);
	Connect(ID_CHECKBOX4,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnCheckBox4Click);
	Connect(ID_CHECKBOX5,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnCheckBox5Click);
	Connect(ID_SLIDER1,wxEVT_SCROLL_CHANGED,(wxObjectEventFunction)&RobotMainboardFrame::OnSlider1CmdScrollChanged);
	Connect(ID_BUTTON22,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton22Click);
	Connect(ID_BUTTON23,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton23Click);
	Connect(ID_SLIDER6,wxEVT_SCROLL_CHANGED,(wxObjectEventFunction)&RobotMainboardFrame::OnSlider6CmdScrollChanged);
	Connect(ID_CHECKBOX6,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnCheckBox6Click);
	Connect(ID_BUTTON24,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnButton24Click);
	Connect(ID_CHECKBOX9,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnCheckBox9Click);
	Connect(ID_CHECKBOX10,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&RobotMainboardFrame::OnCheckBox10Click);
	Connect(ID_SLIDER8,wxEVT_SCROLL_CHANGED,(wxObjectEventFunction)&RobotMainboardFrame::OnSlider8CmdScrollChanged);
	Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&RobotMainboardFrame::OnQuit);
	Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&RobotMainboardFrame::OnAbout);
	//*)

	// Initialisation des variables
	for (int i = 0; i < MAX_USB_DEVICES; i++) {
		_DevicePID[i] = USB_INVALID_PID;				// Liste interne des Product ID des périphériques connectés (variable private)
		WriteHandle[i] = INVALID_HANDLE_VALUE;			// Handle pour écrire sur le port USB (variable gérée dans le thread connectionThread)
		ReadHandle[i] = INVALID_HANDLE_VALUE;			// Handle pour lire sur le port USB (variable gérée dans le thread connectionThread)
		ReadHandleOvl[i] = INVALID_HANDLE_VALUE;		// Handle pour lire sur le port USB (variable gérée dans le thread connectionThread)
		// uniquement utilisée dans interceptionThread
		interceptThread[i] = NULL;						// Le thread interceptionThread est lancé uniquement si le périphérique est détecté
	}

	UPHostSeq = 0;

	// Ne sélectionne aucun périphérique pour le moment
	// (désactive les contrôles associés)
	HIDSelect(USB_NONE);

	// On lance le thread connectionThread, qui va venir lire les périphériques USB
	// connectés et détecter si nos cartes sont connectés ou non.
	connectThread = new connectionThread(this);
	connectThread->Create();
	connectThread->SetPriority(WXTHREAD_MIN_PRIORITY);
	connectThread->Run();
}

/**
 * Destructeur de la frame RobotMainboardFrame.
*/
RobotMainboardFrame::~RobotMainboardFrame() {
	//(*Destroy(RobotMainboardFrame)
	//*)

	// Il faut fermer les différents threads créés durant l'exécution du programme.
	connectThread->Delete();

	for (int i = 0; i < MAX_USB_DEVICES; i++) {
		if (interceptThread[i] != NULL)
			interceptThread[i]->Delete();
	}
}

/**
 * Gestion de l'évènement de fermeture de la frame RobotMainboardFrame.
*/
void RobotMainboardFrame::OnQuit(wxCommandEvent& event) {
	Close();
}

/**
 * Affiche le boite de dialogue "à propos de".
*/
void RobotMainboardFrame::OnAbout(wxCommandEvent& event) {
	wxString msg = _("Robot Mainboard Program\r\n"
					 "USB HID PIC Interface & Control\r\n"
					 "Olivier BICHLER\r\n"
					 "\r\n"
					 "Revision 1.0\r\n"
					 "Build: "
					 __DATE__
					 " "
					 __TIME__);

	wxMessageBox(msg, _("Welcome to..."), wxICON_INFORMATION);
}

void *connectionThread::Entry() {
	/*
	Before we can "connect" our application to our USB embedded device, we must first find the device.
	A USB bus can have many devices simultaneously connected, so somehow we have to find our device, and only
	our device.  This is done with the Vendor ID (VID) and Product ID (PID).  Each USB product line should have
	a unique combination of VID and PID.

	Microsoft has created a number of functions which are useful for finding plug and play devices.  Documentation
	for each function used can be found in the MSDN library.  We will be using the following functions:

	SetupDiGetClassDevs()					//provided by setupapi.dll, which comes with Windows
	SetupDiEnumDeviceInterfaces()			//provided by setupapi.dll, which comes with Windows
	GetLastError()							//provided by kernel32.dll, which comes with Windows
	SetupDiDestroyDeviceInfoList()			//provided by setupapi.dll, which comes with Windows
	SetupDiGetDeviceInterfaceDetail()		//provided by setupapi.dll, which comes with Windows
	SetupDiGetDeviceRegistryProperty()		//provided by setupapi.dll, which comes with Windows
	malloc()								//part of C runtime library, msvcrt.dll?
	CreateFile()							//provided by kernel32.dll, which comes with Windows

	We will also be using the following unusual data types and structures.  Documentation can also be found in
	the MSDN library:

	PSP_DEVICE_INTERFACE_DATA
	PSP_DEVICE_INTERFACE_DETAIL_DATA
	SP_DEVINFO_DATA
	HDEVINFO
	HANDLE
	GUID

	The ultimate objective of the following code is to call CreateFile(), which opens a communications
	pipe to a specific device (such as a HID class USB device endpoint).  CreateFile() returns a "handle"
	which is needed later when calling ReadFile() or WriteFile().  These functions are used to actually
	send and receive application related data to/from the USB peripheral device.

	However, in order to call CreateFile(), we first need to get the device path for the USB device
	with the correct VID and PID.  Getting the device path is a multi-step round about process, which
	requires calling several of the SetupDixxx() functions provided by setupapi.dll.
	*/

	//Globally Unique Identifier (GUID) for HID class devices.  Windows uses GUIDs to identify things.
	GUID InterfaceClassGuid = {0x4d1e55b2, 0xf16f, 0x11cf, 0x88, 0xcb, 0x00, 0x11, 0x11, 0x00, 0x00, 0x30};

	HDEVINFO DeviceInfoTable = INVALID_HANDLE_VALUE;
	PSP_DEVICE_INTERFACE_DATA InterfaceDataStructure = new SP_DEVICE_INTERFACE_DATA;
	PSP_DEVICE_INTERFACE_DETAIL_DATA DetailedInterfaceDataStructure; // = new SP_DEVICE_INTERFACE_DETAIL_DATA;
	SP_DEVINFO_DATA DevInfoData;

	DWORD InterfaceIndex;
	int DevicePID;
	// DWORD StatusLastError = 0;
	DWORD dwRegType;
	DWORD dwRegSize;
	DWORD StructureSize;
	PBYTE PropertyValueBuffer;
	DWORD ErrorStatus;

	wxString DeviceIDToFind;

	while (true) {
		InterfaceIndex = 0;

		//First populate a list of plugged in devices (by specifying "DIGCF_PRESENT"), which are of the specified class GUID.
		DeviceInfoTable = SetupDiGetClassDevs(&InterfaceClassGuid, NULL, NULL, DIGCF_PRESENT | DIGCF_DEVICEINTERFACE);

		//Now look through the list we just populated.  We are trying to see if any of them match our device.
		while (true) {
			InterfaceDataStructure->cbSize = sizeof(SP_DEVICE_INTERFACE_DATA);
			SetupDiEnumDeviceInterfaces(DeviceInfoTable, NULL, &InterfaceClassGuid, InterfaceIndex, InterfaceDataStructure);
			ErrorStatus = GetLastError();

			if (ErrorStatus == ERROR_NO_MORE_ITEMS) {	//Did we reach the end of the list of matching devices in the DeviceInfoTable?
				//Cound not find the device.  Must not have been attached.
				// Il peut arriver que le nombre total de "DeviceInterfaces" diminue lors de la déconnection d'un périphérique.
				for (int i = InterfaceIndex; i < MAX_USB_DEVICES; i++) {
					if (MainFrame->DevicePID(i) != USB_INVALID_PID)
						MainFrame->HIDDisconnect(i);
				}

				SetupDiDestroyDeviceInfoList(DeviceInfoTable);	//Clean up the old structure we no longer need.
				break;
			}

			//Now retrieve the hardware ID from the registry.  The hardware ID contains the VID and PID, which we will then
			//check to see if it is the correct device or not.

			//Initialize an appropriate SP_DEVINFO_DATA structure.  We need this structure for SetupDiGetDeviceRegistryProperty().
			DevInfoData.cbSize = sizeof(SP_DEVINFO_DATA);
			SetupDiEnumDeviceInfo(DeviceInfoTable, InterfaceIndex, &DevInfoData);

			//First query for the size of the hardware ID, so we can know how big a buffer to allocate for the data.
			SetupDiGetDeviceRegistryProperty(DeviceInfoTable, &DevInfoData, SPDRP_HARDWAREID, &dwRegType, NULL, 0, &dwRegSize);

			//Allocate a buffer for the hardware ID.
			PropertyValueBuffer = new BYTE[dwRegSize];

			if (PropertyValueBuffer == NULL) {	//if null, error, couldn't allocate enough memory
				//Can't really recover from this situation, just exit instead.
				SetupDiDestroyDeviceInfoList(DeviceInfoTable);	//Clean up the old structure we no longer need.
				break;
			}

			//Retrieve the hardware IDs for the current device we are looking at.  PropertyValueBuffer gets filled with a
			//REG_MULTI_SZ (array of null terminated strings).  To find a device, we only care about the very first string in the
			//buffer, which will be the "device ID".  The device ID is a string which contains the VID and PID, in the example
			//format "Vid_04d8&Pid_003f".
			SetupDiGetDeviceRegistryProperty(DeviceInfoTable, &DevInfoData, SPDRP_HARDWAREID, &dwRegType, PropertyValueBuffer, dwRegSize, NULL);

			//Now check if the first string in the hardware ID matches the device ID of my USB device.
#ifdef UNICODE
			wxString DeviceIDFromRegistry((wchar_t *)PropertyValueBuffer);
#else
			wxString DeviceIDFromRegistry((char *)PropertyValueBuffer);
#endif

			//Convert both strings to lower case.  This makes the code more robust/portable accross OS Versions
			DeviceIDFromRegistry.MakeLower();

			//Now check if the hardware ID we are looking at contains the correct VID/PID
			DevicePID = USB_INVALID_PID;

			// Carte d'essais
			DeviceIDToFind.sprintf(_("vid_%04x&pid_%04x"), USB_VID, USB_PID_USB_DEV_BOARD);

			if (DeviceIDFromRegistry.Find(DeviceIDToFind) != -1)
				DevicePID = USB_PID_USB_DEV_BOARD;

			// Carte capteurs
			DeviceIDToFind.sprintf(_("vid_%04x&pid_%04x"), USB_VID, USB_PID_PROXIMITY_SENSOR);

			if (DeviceIDFromRegistry.Find(DeviceIDToFind) != -1)
				DevicePID = USB_PID_PROXIMITY_SENSOR;

			// Carte d'asservissement
			DeviceIDToFind.sprintf(_("vid_%04x&pid_%04x"), USB_VID, USB_PID_MOTOR_CONTROLLER);

			if (DeviceIDFromRegistry.Find(DeviceIDToFind) != -1)
				DevicePID = USB_PID_MOTOR_CONTROLLER;

			// Carte Robot Interface
			DeviceIDToFind.sprintf(_("vid_%04x&pid_%04x"), USB_VID, USB_PID_ROBOT_INTERFACE);

			if (DeviceIDFromRegistry.Find(DeviceIDToFind) != -1)
				DevicePID = USB_PID_ROBOT_INTERFACE;

			if (MainFrame->DevicePID(InterfaceIndex) != DevicePID)
				MainFrame->HIDDisconnect(InterfaceIndex);

			if (DevicePID != USB_INVALID_PID && MainFrame->DevicePID(InterfaceIndex) != DevicePID) {
				//Device must have been found.  Open read and write handles.  In order to do this, we will need the actual device path first.
				//We can get the path by calling SetupDiGetDeviceInterfaceDetail(), however, we have to call this function twice:  The first
				//time to get the size of the required structure/buffer to hold the detailed interface data, then a second time to actually
				//get the structure (after we have allocated enough memory for the structure.)
//				DetailedInterfaceDataStructure->cbSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA);
				//First call populates "StructureSize" with the correct value
				SetupDiGetDeviceInterfaceDetail(DeviceInfoTable, InterfaceDataStructure, NULL, 0, &StructureSize, NULL);
//				DetailedInterfaceDataStructure = new SP_DEVICE_INTERFACE_DETAIL_DATA[StructureSize / sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA) + 1];
				DetailedInterfaceDataStructure = (PSP_DEVICE_INTERFACE_DETAIL_DATA) new BYTE[StructureSize];
//				DetailedInterfaceDataStructure = (PSP_DEVICE_INTERFACE_DETAIL_DATA)(malloc(StructureSize));		//Allocate enough memory
				if (DetailedInterfaceDataStructure == NULL) {	//if null, error, couldn't allocate enough memory
					//Can't really recover from this situation, just exit instead.
					SetupDiDestroyDeviceInfoList(DeviceInfoTable);	//Clean up the old structure we no longer need.
					delete PropertyValueBuffer;
					break;
				}

				DetailedInterfaceDataStructure->cbSize = sizeof(SP_DEVICE_INTERFACE_DETAIL_DATA);
				//Now call SetupDiGetDeviceInterfaceDetail() a second time to receive the goods.
				SetupDiGetDeviceInterfaceDetail(DeviceInfoTable, InterfaceDataStructure, DetailedInterfaceDataStructure, StructureSize, NULL, NULL);

				//We now have the proper device path, and we can finally open read and write handles to the device.
				//We store the handles in the global variables "WriteHandle" and "ReadHandle", which we will use later to actually communicate.
				MainFrame->WriteHandle[InterfaceIndex] = CreateFile((DetailedInterfaceDataStructure->DevicePath), GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, 0);

				ErrorStatus = GetLastError();
				if (ErrorStatus == ERROR_SUCCESS) {
					// Ecriture OK

				}

				MainFrame->ReadHandle[InterfaceIndex] = CreateFile((DetailedInterfaceDataStructure->DevicePath), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, 0);
				MainFrame->ReadHandleOvl[InterfaceIndex] = CreateFile((DetailedInterfaceDataStructure->DevicePath), GENERIC_READ, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_FLAG_OVERLAPPED, 0);

				ErrorStatus = GetLastError();
				if (ErrorStatus == ERROR_SUCCESS) {
					// Lecture OK

				}

				//SetupDiDestroyDeviceInfoList(DeviceInfoTable);	//Clean up the old structure we no longer need.

				MainFrame->HIDConnect(InterfaceIndex, DevicePID);

				delete DetailedInterfaceDataStructure;
			}

			InterfaceIndex++;
			//Keep looping until we either find a device with matching VID and PID, or until we run out of items.

			delete PropertyValueBuffer;

			if (InterfaceIndex >= MAX_USB_DEVICES)
				break;

			if (TestDestroy())
				break;
		}//end of while(true)

		if (TestDestroy())
			break;

		MainFrame->UpdatePICStatus();
		MainFrame->UpdateRangefinder();
		MainFrame->UpdateTOR();
		MainFrame->UpdateIsens();
		MainFrame->UpdatePosition();
		MainFrame->UpdateAX12();
		MainFrame->UpdateI2C();
	}

	delete InterfaceDataStructure;

	return NULL;
}

void *interceptionThread::Entry() {
	DWORD BytesRead = 0;
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	char SendText[65];

	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	wxString msg;

	OVERLAPPED gOverlapped;
	gOverlapped.Offset = 0;
	gOverlapped.OffsetHigh = 0;
	gOverlapped.hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);
	bool Result;
	int i;

	while (true) {
		InputPacketBuffer[0] = 0;				//The first byte is the "Report ID" and does not get transmitted over the USB bus.  Always set = 0.

		//The following call to ReadFIle() retrieves 64 bytes of data from the USB device.
		Result = ReadFile(MainFrame->ReadHandleOvl[_DeviceId], &InputPacketBuffer, 65, &BytesRead, &gOverlapped);

		while (WaitForSingleObject(gOverlapped.hEvent, 100) == WAIT_TIMEOUT) {
			// Tant que l'on a un time-out, on continue !
			if (TestDestroy())
				break;
		}

		if (TestDestroy())
			break;

		if (GetOverlappedResult(gOverlapped.hEvent, &gOverlapped, &BytesRead, FALSE)) {
			switch (InputPacketBuffer[1+UP_CMD]) {
				// Cas où l'on ne fait rien (il s'agit de réponses à des requêtes, qui sont traités ailleurs)
				case CMD_RESPOND:
//					if (InputPacketBuffer[1+UP_ERR] > 0) {
//						msg.Printf(_("Le PIC a répondu par l'erreur N°%03d"), InputPacketBuffer[1+UP_ERR]);
//						wxMessageBox(msg, _("Erreur du PIC"), wxICON_ERROR);
//					}

					break;

				case CMD_ERR:
					msg.Printf(_("Le PIC a envoyé l'erreur N°%03d"), InputPacketBuffer[1+UP_ERR]);
					wxMessageBox(msg, _("Erreur du PIC"), wxICON_ERROR);
					break;

				case CMD_SEND:
					for (i = UP_DATA; i < 60; i++) {
						SendText[i-UP_DATA] = InputPacketBuffer[1+i];

						if (InputPacketBuffer[1+i] == '\0')
							break;
					}

					if (i == 59 && SendText[59-UP_DATA] != '\0')
						wxMessageBox(_("Le PIC a envoyé un message non valide (celui-ci est de longueur excessive ou ne se termine pas par NULL)."), _("Erreur message PIC"), wxICON_ERROR);
					else
						wxMessageBox(wxString::FromAscii(&SendText[0]), _("Message du PIC"), wxICON_INFORMATION);
					break;

				case CMD_CALIBRATE:
					id = MainFrame->FindDevice(USB_PID_PROXIMITY_SENSOR);
					if (id == USB_NOT_FOUND) break;

					if (InputPacketBuffer[1+UP_DATA] == CAL_ERROR) {
						msg.Printf(_("Erreur durant la calibration ! Calibration impossible.\r\n\r\n"
							"Seuil de départ : %d (= %01.3f * Vref)\r\n"
							"Seuil minimal : %d (= %01.3f * Vref)\r\n"
							"Délais avant réception : %d us\r\n"
							"Pente [~ vitesse du son] : %d m/s\r\n"
							"Offset : %d (mm)"),
								InputPacketBuffer[1+UP_DATA+1], InputPacketBuffer[1+UP_DATA+1] / 24.0,
								InputPacketBuffer[1+UP_DATA+2], InputPacketBuffer[1+UP_DATA+2] / 24.0,
								(InputPacketBuffer[1+UP_DATA+3] << 8) | InputPacketBuffer[1+UP_DATA+4],
								(InputPacketBuffer[1+UP_DATA+5] << 8) | InputPacketBuffer[1+UP_DATA+6],
								(InputPacketBuffer[1+UP_DATA+7] << 8) | InputPacketBuffer[1+UP_DATA+8]);

						wxMessageBox(msg, _("Calibration"), wxICON_ERROR);
					}
					else if (InputPacketBuffer[1+UP_DATA] == CAL_PLACE_INF) {
						OutputPacketBuffer[1+UP_HSEQ] = (MainFrame->UPHostSeq++);
						OutputPacketBuffer[1+UP_DSEQ] = 0;
						OutputPacketBuffer[1+UP_CMD] = CMD_CALIBRATE;
						OutputPacketBuffer[1+UP_ERR] = 0;

						if (wxMessageBox(_("[Etape 1/3] Veuillez placer le capteur loin de tout obstacle..."), _("Calibration"), wxOK | wxCANCEL) == wxOK)
							OutputPacketBuffer[1+UP_DATA] = CAL_CONTINUE;
						else
							OutputPacketBuffer[1+UP_DATA] = CAL_STOP;

						WriteFile(MainFrame->WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
					}
					else if (InputPacketBuffer[1+UP_DATA] == CAL_PLACE_30) {
						OutputPacketBuffer[1+UP_HSEQ] = (MainFrame->UPHostSeq++);
						OutputPacketBuffer[1+UP_DSEQ] = 0;
						OutputPacketBuffer[1+UP_CMD] = CMD_CALIBRATE;
						OutputPacketBuffer[1+UP_ERR] = 0;

						if (wxMessageBox(_("[Etape 2/3] Veuillez placer le capteur à 30 cm d'un obstacle..."), _("Calibration"), wxOK | wxCANCEL) == wxOK)
							OutputPacketBuffer[1+UP_DATA] = CAL_CONTINUE;
						else
							OutputPacketBuffer[1+UP_DATA] = CAL_STOP;

						WriteFile(MainFrame->WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
					}
					else if (InputPacketBuffer[1+UP_DATA] == CAL_PLACE_100) {
						OutputPacketBuffer[1+UP_HSEQ] = (MainFrame->UPHostSeq++);
						OutputPacketBuffer[1+UP_DSEQ] = 0;
						OutputPacketBuffer[1+UP_CMD] = CMD_CALIBRATE;
						OutputPacketBuffer[1+UP_ERR] = 0;

						if (wxMessageBox(_("[Etape 3/3] Veuillez placer le capteur à 1 m d'un obstacle..."), _("Calibration"), wxOK | wxCANCEL) == wxOK)
							OutputPacketBuffer[1+UP_DATA] = CAL_CONTINUE;
						else
							OutputPacketBuffer[1+UP_DATA] = CAL_STOP;

						WriteFile(MainFrame->WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
					}
					else if (InputPacketBuffer[1+UP_DATA] == CAL_DONE) {
						msg.Printf(_("Calibration terminée !\r\n\r\n"
							"Seuil de départ : %d (= %01.3f * Vref)\r\n"
							"Seuil minimal : %d (= %01.3f * Vref)\r\n"
							"Délais avant réception : %d us\r\n"
							"Pente [~ vitesse du son] : %d m/s\r\n"
							"Offset : %d (mm)"),
								InputPacketBuffer[1+UP_DATA+1], InputPacketBuffer[1+UP_DATA+1] / 24.0,
								InputPacketBuffer[1+UP_DATA+2], InputPacketBuffer[1+UP_DATA+2] / 24.0,
								(InputPacketBuffer[1+UP_DATA+3] << 8) | InputPacketBuffer[1+UP_DATA+4],
								(InputPacketBuffer[1+UP_DATA+5] << 8) | InputPacketBuffer[1+UP_DATA+6],
								(InputPacketBuffer[1+UP_DATA+7] << 8) | InputPacketBuffer[1+UP_DATA+8]);

						wxMessageBox(msg, _("Calibration"), wxICON_INFORMATION);
					}

					break;

				default:
					wxMessageBox(_("Le PIC a envoyé une commande non reconnue !"), _("Erreur"), wxICON_ERROR);
			}
		}
	}

	return NULL;
}

/**
 * Renvoie de manière sécurisée le Product ID du périphérique identifié par DeviceId.
 * Cette fonction utilise une section critique, car elle peut être appelée dans le
 * thread principal et _DevicePID peut être en même temps modifiée par le connectionThread.
 *
 * @param		DeviceId		ID du périphérique
 * @return		DevicePID		Product ID du périphérique identifié par DeviceId
 *								USB_INVALID_PID si pas de périphérique associé
*/
int RobotMainboardFrame::DevicePID(int DeviceId) {
	int pid;

	DeviceData_critSect.Enter();
	pid = _DevicePID[DeviceId];
	DeviceData_critSect.Leave();

	return pid;
}

/**
 * Renvoie de manière sécurisée l'ID du périphérique actuellement sélectionné.
 * Cette fonction utilise une section critique, car elle peut être appelée dans le
 * thread principal et _SelectedDevice peut être en même temps modifiée par le
 * connectionThread, via la fonction UpdateSelectedDevice().
 *
 * @return		DeviceId		ID du périphérique sélectionné
 *								USB_NONE si aucun périphérique sélectionné
*/
int RobotMainboardFrame::SelectedDevice() {
	int id;

	DeviceData_critSect.Enter();
	id = _SelectedDevice;
	DeviceData_critSect.Leave();

	return id;
}

/**
 * Renvoie l'ID du premier périphérique trouvé avec comme Product ID DevicePID.
 * Cette fonction est utile pour les commandes spécifiques à une seule carte, pour
 * envoyer ou obtenir des informations de cette carte sans qu'elle soit forcément
 * sélectionnée.
 *
 * @param		DevicePID		Product ID du périphérique
 * @return		DeviceId		ID du premier périphérique trouvé avec DevicePID comme Product ID
 *								USB_NOT_FOUND si aucun périphérique trouvé avec ce Product ID
*/
int RobotMainboardFrame::FindDevice(int DevicePID) {
	for (int i = 0; i < MAX_USB_DEVICES; i++) {
		if (this->DevicePID(i) == DevicePID)
			return i;
	}

	return USB_NOT_FOUND;
}

/**
 * Connecte un périphérique connu et l'ajoute dans la liste des périphériques connectés.
 *
 * @param		DeviceId		ID du périphérique
 * @param		DevicePID		Product ID du périphérique
*/
void RobotMainboardFrame::HIDConnect(int DeviceId, int DevicePID) {
	int pos = 0;
	wxString Label;

	DeviceData_critSect.Enter();

	for (int i = 0; i < DeviceId; i++) {
		if (_DevicePID[i] != USB_INVALID_PID)
			pos++;
	}

	_DevicePID[DeviceId] = DevicePID;
	DeviceData_critSect.Leave();

	// On créé le thread d'interception
	interceptThread[DeviceId] = new interceptionThread(this, DeviceId);
	interceptThread[DeviceId]->Create();
	interceptThread[DeviceId]->Run();

	switch (DevicePID) {
		case USB_PID_USB_DEV_BOARD:
			Label.sprintf(_("Carte d'essais (#%d)"), DeviceId);
			break;

		case USB_PID_PROXIMITY_SENSOR:
			Label.sprintf(_("Carte capteurs (#%d)"), DeviceId);
			break;

		case USB_PID_MOTOR_CONTROLLER:
			Label.sprintf(_("Carte d'asservissement (#%d)"), DeviceId);
			break;

		case USB_PID_ROBOT_INTERFACE:
			Label.sprintf(_("Carte robot interface (#%d)"), DeviceId);
			break;

		default:
			Label.sprintf(_("Carte INCONNUE [%04X] (#%d)"), DevicePID, DeviceId);
	}

	SetCursor(wxNullCursor);

	wxMutexGuiEnter();
	Button4->Enable(true);
	ListBox1->Insert(Label, pos);
	wxMutexGuiLeave();
}

/**
 * Déonnecte un périphérique et le retire de la liste des périphériques connectés.
 *
 * @param		DeviceId		ID du périphérique
*/
void RobotMainboardFrame::HIDDisconnect(int DeviceId) {
	int pos = 0;
	bool isOne = false;

	DeviceData_critSect.Enter();
	_DevicePID[DeviceId] = USB_INVALID_PID;

	for (int i = 0; i < MAX_USB_DEVICES; i++) {
		if (_DevicePID[i] != USB_INVALID_PID) {
			isOne = true;

			if (i < DeviceId)
				pos++;
		}
	}

	DeviceData_critSect.Leave();

	// On supprime le thread d'interception s'il existe (ce qui n'est pas le cas lors de l'initialisation)
	if (interceptThread[DeviceId] != NULL) {
		interceptThread[DeviceId]->Delete();
		interceptThread[DeviceId] = NULL;		// Pour savoir si le thread a été détruit ou non dans le destructeur
	}

	wxMutexGuiEnter();

	if (SelectedDevice() == DeviceId)
		HIDSelect(USB_NONE);

	if (!isOne)
		Button4->Enable(false);

	ListBox1->Delete(pos);
	wxMutexGuiLeave();
}

/**
 * Sélection un périphérique.
 *
 * @param		DeviceId		ID du périphérique à sélectionner
*/
void RobotMainboardFrame::HIDSelect(int DeviceId) {
	wxString Label;

	DeviceData_critSect.Enter();
	_SelectedDevice = DeviceId;
	DeviceData_critSect.Leave();

	if (DeviceId == USB_NONE) {
		// On désactive les controles
		StatusBar1->SetStatusText(_("Aucun périphérique sélectionné"), 1);
		Button1->Enable(false);
		Button2->Enable(false);
		Button21->Enable(false);
		TextCtrl1->ChangeValue(_(""));
		TextCtrl1->Enable(false);
		TextCtrl2->Enable(false);
		TextCtrl2->ChangeValue(_(""));

		ToggleButton_RA0->Enable(false);
		TextCtrl_RA0->Enable(false);
		ToggleButton_RA1->Enable(false);
		TextCtrl_RA1->Enable(false);
		ToggleButton_RA2->Enable(false);
		TextCtrl_RA2->Enable(false);
		ToggleButton_RA3->Enable(false);
		TextCtrl_RA3->Enable(false);
		ToggleButton_RA4->Enable(false);
		TextCtrl_RA4->Enable(false);
		ToggleButton_RA5->Enable(false);
		TextCtrl_RA5->Enable(false);
		//	ToggleButton_RA6->Enable(false);
		//	TextCtrl_RA6->Enable(false);

		//	ToggleButton_RB0->Enable(false);
		//	TextCtrl_RB0->Enable(false);
		//	ToggleButton_RB1->Enable(false);
		//	TextCtrl_RB1->Enable(false);
		ToggleButton_RB2->Enable(false);
		TextCtrl_RB2->Enable(false);
		ToggleButton_RB3->Enable(false);
		TextCtrl_RB3->Enable(false);
		ToggleButton_RB4->Enable(false);
		TextCtrl_RB4->Enable(false);
		ToggleButton_RB5->Enable(false);
		TextCtrl_RB5->Enable(false);
		ToggleButton_RB6->Enable(false);
		TextCtrl_RB6->Enable(false);
		ToggleButton_RB7->Enable(false);
		TextCtrl_RB7->Enable(false);

		ToggleButton_RC0->Enable(false);
		TextCtrl_RC0->Enable(false);
		ToggleButton_RC1->Enable(false);
		TextCtrl_RC1->Enable(false);
		ToggleButton_RC2->Enable(false);
		TextCtrl_RC2->Enable(false);
		//	ToggleButton_RC4->Enable(false);
		//	TextCtrl_RC4->Enable(false);
		//	ToggleButton_RC5->Enable(false);
		//	TextCtrl_RC5->Enable(false);
		ToggleButton_RC6->Enable(false);
		TextCtrl_RC6->Enable(false);
		ToggleButton_RC7->Enable(false);
		TextCtrl_RC7->Enable(false);

		ToggleButton_RD0->Enable(false);
		TextCtrl_RD0->Enable(false);
		ToggleButton_RD1->Enable(false);
		TextCtrl_RD1->Enable(false);
		ToggleButton_RD2->Enable(false);
		TextCtrl_RD2->Enable(false);
		ToggleButton_RD3->Enable(false);
		TextCtrl_RD3->Enable(false);
		ToggleButton_RD4->Enable(false);
		TextCtrl_RD4->Enable(false);
		ToggleButton_RD5->Enable(false);
		TextCtrl_RD5->Enable(false);
		ToggleButton_RD6->Enable(false);
		TextCtrl_RD6->Enable(false);
		ToggleButton_RD7->Enable(false);
		TextCtrl_RD7->Enable(false);

		ToggleButton_RE0->Enable(false);
		TextCtrl_RE0->Enable(false);
		ToggleButton_RE1->Enable(false);
		TextCtrl_RE1->Enable(false);
		ToggleButton_RE2->Enable(false);
		TextCtrl_RE2->Enable(false);
		//	ToggleButton_RE3->Enable(false);
		//	TextCtrl_RE3->Enable(false);
	}
	else {
		Button1->Enable(true);
		Button2->Enable(true);
		Button21->Enable(true);
		TextCtrl1->Enable(true);
		TextCtrl1->SetEditable(false);
		TextCtrl2->Enable(true);
		TextCtrl2->SetEditable(false);

		ToggleButton_RA0->Enable(true);
		TextCtrl_RA0->Enable(true);
		ToggleButton_RA1->Enable(true);
		TextCtrl_RA1->Enable(true);
		ToggleButton_RA2->Enable(true);
		TextCtrl_RA2->Enable(true);
		ToggleButton_RA3->Enable(true);
		TextCtrl_RA3->Enable(true);
		ToggleButton_RA4->Enable(true);
		TextCtrl_RA4->Enable(true);
		ToggleButton_RA5->Enable(true);
		TextCtrl_RA5->Enable(true);
		//	ToggleButton_RA6->Enable(true);
		//	TextCtrl_RA6->Enable(true);

		// I2C
		//	ToggleButton_RB0->Enable(true);
		//	TextCtrl_RB0->Enable(true);
		//	ToggleButton_RB1->Enable(true);
		//	TextCtrl_RB1->Enable(true);

		// LEDs
		if (DevicePID(DeviceId) != USB_PID_PROXIMITY_SENSOR) {
			ToggleButton_RB2->Enable(true);
			ToggleButton_RB3->Enable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB2->SetBackgroundColour(*wxWHITE);
			TextCtrl_RB3->SetBackgroundColour(*wxWHITE);
			SetEvtHandlerEnabled(true);
		}
		else {
			ToggleButton_RB2->Enable(false);
			ToggleButton_RB3->Enable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB2->SetBackgroundColour(wxColour(128, 255, 128));
			TextCtrl_RB3->SetBackgroundColour(wxColour(128, 255, 128));
			SetEvtHandlerEnabled(true);
		}

		TextCtrl_RB2->Enable(true);
		TextCtrl_RB3->Enable(true);

		ToggleButton_RB4->Enable(true);
		TextCtrl_RB4->Enable(true);

		// ICSP
		ToggleButton_RB5->Enable(true);
		TextCtrl_RB5->Enable(true);
		ToggleButton_RB6->Enable(true);
		TextCtrl_RB6->Enable(true);
		ToggleButton_RB7->Enable(true);
		TextCtrl_RB7->Enable(true);

		ToggleButton_RC0->Enable(true);
		TextCtrl_RC0->Enable(true);
		ToggleButton_RC1->Enable(true);
		TextCtrl_RC1->Enable(true);
		ToggleButton_RC2->Enable(true);
		TextCtrl_RC2->Enable(true);

		// USB
		//	ToggleButton_RC4->Enable(true);
		//	TextCtrl_RC4->Enable(true);
		//	ToggleButton_RC5->Enable(true);
		//	TextCtrl_RC5->Enable(true);

		// RS232
		if (DevicePID(DeviceId) == USB_PID_USB_DEV_BOARD) {
			ToggleButton_RC6->Enable(false);
			ToggleButton_RC7->Enable(false);
			TextCtrl_RC6->Enable(false);
			TextCtrl_RC7->Enable(false);
			TextCtrl6->Enable(true);
			StaticText6->Enable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC6->SetBackgroundColour(wxColour(255, 128, 255));
			TextCtrl_RC7->SetBackgroundColour(wxColour(255, 128, 255));
			SetEvtHandlerEnabled(true);
		}
		else {
			ToggleButton_RC6->Enable(true);
			ToggleButton_RC7->Enable(true);
			TextCtrl_RC6->Enable(true);
			TextCtrl_RC7->Enable(true);
			TextCtrl6->Enable(false);
			StaticText6->Enable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC6->SetBackgroundColour(*wxWHITE);
			TextCtrl_RC7->SetBackgroundColour(*wxWHITE);
			SetEvtHandlerEnabled(true);
		}

		ToggleButton_RD0->Enable(true);
		TextCtrl_RD0->Enable(true);
		ToggleButton_RD1->Enable(true);
		TextCtrl_RD1->Enable(true);

		// LEDs
		if (DevicePID(DeviceId) != USB_PID_MOTOR_CONTROLLER) {
			ToggleButton_RD2->Enable(true);
			ToggleButton_RD3->Enable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD2->SetBackgroundColour(*wxWHITE);
			TextCtrl_RD3->SetBackgroundColour(*wxWHITE);
			SetEvtHandlerEnabled(true);
		}
		else {
			ToggleButton_RD2->Enable(false);
			ToggleButton_RD3->Enable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD2->SetBackgroundColour(wxColour(128, 255, 128));
			TextCtrl_RD3->SetBackgroundColour(wxColour(128, 255, 128));
			SetEvtHandlerEnabled(true);
		}

		TextCtrl_RD2->Enable(true);
		TextCtrl_RD3->Enable(true);

		ToggleButton_RD4->Enable(true);
		TextCtrl_RD4->Enable(true);
		ToggleButton_RD5->Enable(true);
		TextCtrl_RD5->Enable(true);
		ToggleButton_RD6->Enable(true);
		TextCtrl_RD6->Enable(true);
		ToggleButton_RD7->Enable(true);
		TextCtrl_RD7->Enable(true);

		// LEDs
		if (DevicePID(DeviceId) != USB_PID_USB_DEV_BOARD) {
			ToggleButton_RE0->Enable(true);
			ToggleButton_RE1->Enable(true);
			ToggleButton_RE2->Enable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RE0->SetBackgroundColour(*wxWHITE);
			TextCtrl_RE1->SetBackgroundColour(*wxWHITE);
			TextCtrl_RE2->SetBackgroundColour(*wxWHITE);
			SetEvtHandlerEnabled(true);
		}
		else {
			ToggleButton_RE0->Enable(false);
			ToggleButton_RE1->Enable(false);
			ToggleButton_RE2->Enable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RE0->SetBackgroundColour(wxColour(128, 255, 128));
			TextCtrl_RE1->SetBackgroundColour(wxColour(128, 255, 128));
			TextCtrl_RE2->SetBackgroundColour(wxColour(128, 255, 128));
			SetEvtHandlerEnabled(true);
		}

		TextCtrl_RE0->Enable(true);
		TextCtrl_RE1->Enable(true);
		TextCtrl_RE2->Enable(true);

		//	ToggleButton_RE3->Enable(true);
		//	TextCtrl_RE3->Enable(true);

		switch (DevicePID(DeviceId)) {
			case USB_PID_USB_DEV_BOARD:
				Label.sprintf(_("Sélectionné : Carte d'essais (#%d)"), DeviceId);
				break;

			case USB_PID_PROXIMITY_SENSOR:
				Label.sprintf(_("Sélectionné : Carte capteurs (#%d)"), DeviceId);
				break;

			case USB_PID_MOTOR_CONTROLLER:
				Label.sprintf(_("Sélectionné : Carte d'asservissement (#%d)"), DeviceId);
				break;

			case USB_PID_ROBOT_INTERFACE:
				Label.sprintf(_("Sélectionné : Carte robot interface (#%d)"), DeviceId);
				break;

			default:
				Label.sprintf(_("Sélectionné : Carte INCONNUE [%04X] (#%d)"), DevicePID(DeviceId), DeviceId);
		}

		StatusBar1->SetStatusText(Label, 1);

		RetrieveResetSource();
		RetrieveFirmwareBuild();
	}
}

/**
 * Mise à jour de la configuration des ports et de l'état des ports du PIC.
 * Cette fonction ne peut pas être appelée par le thread principal (utilisation
 * des MutexGui).
*/
void RobotMainboardFrame::UpdatePICStatus() {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;

	id = SelectedDevice();
	if (id == USB_NONE) return;

	// Etat des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;
	OutputPacketBuffer[1+UP_DATA] = GET_PORTS_STATE;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		// Port A
		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA0) == 0 && TextCtrl_RA0->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RA0->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA0) == 1 && TextCtrl_RA0->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RA0->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA1) == 0 && TextCtrl_RA1->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RA1->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA1) == PORTA_RA1 && TextCtrl_RA1->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RA1->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA2) == 0 && TextCtrl_RA2->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RA2->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA2) == PORTA_RA2 && TextCtrl_RA2->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RA2->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA3) == 0 && TextCtrl_RA3->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RA3->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA3) == PORTA_RA3 && TextCtrl_RA3->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RA3->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA4) == 0 && TextCtrl_RA4->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RA4->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA4) == PORTA_RA4 && TextCtrl_RA4->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RA4->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA5) == 0 && TextCtrl_RA5->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RA5->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA5) == PORTA_RA5 && TextCtrl_RA5->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RA5->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA6) == 0 && TextCtrl_RA6->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RA6->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA6) == PORTA_RA6 && TextCtrl_RA6->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RA6->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		// Port B
		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB0) == 0 && TextCtrl_RB0->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RB0->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB0) == 1 && TextCtrl_RB0->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RB0->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB1) == 0 && TextCtrl_RB1->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RB1->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB1) == PORTB_RB1 && TextCtrl_RB1->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RB1->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB2) == 0 && TextCtrl_RB2->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RB2->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB2) == PORTB_RB2 && TextCtrl_RB2->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RB2->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB3) == 0 && TextCtrl_RB3->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RB3->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB3) == PORTB_RB3 && TextCtrl_RB3->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RB3->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB4) == 0 && TextCtrl_RB4->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RB4->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB4) == PORTB_RB4 && TextCtrl_RB4->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RB4->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB5) == 0 && TextCtrl_RB5->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RB5->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB5) == PORTB_RB5 && TextCtrl_RB5->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RB5->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB6) == 0 && TextCtrl_RB6->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RB6->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB6) == PORTB_RB6 && TextCtrl_RB6->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RB6->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB7) == 0 && TextCtrl_RB7->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RB7->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB7) == PORTB_RB7 && TextCtrl_RB7->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RB7->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		// Port C
		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC0) == 0 && TextCtrl_RC0->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RC0->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC0) == 1 && TextCtrl_RC0->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RC0->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC1) == 0 && TextCtrl_RC1->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RC1->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC1) == PORTC_RC1 && TextCtrl_RC1->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RC1->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC2) == 0 && TextCtrl_RC2->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RC2->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC2) == PORTC_RC2 && TextCtrl_RC2->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RC2->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC4) == 0 && TextCtrl_RC4->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RC4->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC4) == PORTC_RC4 && TextCtrl_RC4->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RC4->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC5) == 0 && TextCtrl_RC5->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RC5->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC5) == PORTC_RC5 && TextCtrl_RC5->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RC5->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC6) == 0 && TextCtrl_RC6->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RC6->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC6) == PORTC_RC6 && TextCtrl_RC6->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RC6->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC7) == 0 && TextCtrl_RC7->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RC7->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC7) == PORTC_RC7 && TextCtrl_RC7->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RC7->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		// Port D
		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD0) == 0 && TextCtrl_RD0->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RD0->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD0) == 1 && TextCtrl_RD0->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RD0->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD1) == 0 && TextCtrl_RD1->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RD1->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD1) == PORTD_RD1 && TextCtrl_RD1->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RD1->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD2) == 0 && TextCtrl_RD2->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RD2->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD2) == PORTD_RD2 && TextCtrl_RD2->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RD2->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD3) == 0 && TextCtrl_RD3->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RD3->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD3) == PORTD_RD3 && TextCtrl_RD3->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RD3->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD4) == 0 && TextCtrl_RD4->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RD4->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD4) == PORTD_RD4 && TextCtrl_RD4->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RD4->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD5) == 0 && TextCtrl_RD5->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RD5->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD5) == PORTD_RD5 && TextCtrl_RD5->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RD5->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD6) == 0 && TextCtrl_RD6->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RD6->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD6) == PORTD_RD6 && TextCtrl_RD6->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RD6->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD7) == 0 && TextCtrl_RD7->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RD7->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD7) == PORTD_RD7 && TextCtrl_RD7->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RD7->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		// Port E
		if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE0) == 0 && TextCtrl_RE0->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RE0->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE0) == 1 && TextCtrl_RE0->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RE0->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE1) == 0 && TextCtrl_RE1->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RE1->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE1) == PORTE_RE1 && TextCtrl_RE1->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RE1->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE2) == 0 && TextCtrl_RE2->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RE2->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE2) == PORTE_RE2 && TextCtrl_RE2->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RE2->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE3) == 0 && TextCtrl_RE3->GetValue() != _("0")) {
			wxMutexGuiEnter();
			TextCtrl_RE3->ChangeValue(_("0"));
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE3) == PORTE_RE3 && TextCtrl_RE3->GetValue() != _("1")) {
			wxMutexGuiEnter();
			TextCtrl_RE3->ChangeValue(_("1"));
			wxMutexGuiLeave();
		}
	}
//	else
//		wxMessageBox(_("Pas de réponse pour {CMD_GET, GET_PORTS_STATE}"), _("Erreur"), wxICON_ERROR);

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;
	OutputPacketBuffer[1+UP_DATA] = GET_PORTS_CONFIG;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		// Port A
		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA0) == 0 && !ToggleButton_RA0->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA0->SetLabel(_("Sortie"));
			ToggleButton_RA0->SetValue(true);
			TextCtrl_RA0->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA0->SetForegroundColour(*wxBLACK);		// Génère un évènement EVT_TEXT !!!
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA0) == PORTA_RA0 && ToggleButton_RA0->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA0->SetLabel(_("Entrée"));
			ToggleButton_RA0->SetValue(false);
			TextCtrl_RA0->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA1) == 0 && !ToggleButton_RA1->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA1->SetLabel(_("Sortie"));
			ToggleButton_RA1->SetValue(true);
			TextCtrl_RA1->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA1->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA1) == PORTA_RA1 && ToggleButton_RA1->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA1->SetLabel(_("Entrée"));
			ToggleButton_RA1->SetValue(false);
			TextCtrl_RA1->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA2) == 0 && !ToggleButton_RA2->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA2->SetLabel(_("Sortie"));
			ToggleButton_RA2->SetValue(true);
			TextCtrl_RA2->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA2->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA2) == PORTA_RA2 && ToggleButton_RA2->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA2->SetLabel(_("Entrée"));
			ToggleButton_RA2->SetValue(false);
			TextCtrl_RA2->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA3) == 0 && !ToggleButton_RA3->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA3->SetLabel(_("Sortie"));
			ToggleButton_RA3->SetValue(true);
			TextCtrl_RA3->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA3->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA3) == PORTA_RA3 && ToggleButton_RA3->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA3->SetLabel(_("Entrée"));
			ToggleButton_RA3->SetValue(false);
			TextCtrl_RA3->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA4) == 0 && !ToggleButton_RA4->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA4->SetLabel(_("Sortie"));
			ToggleButton_RA4->SetValue(true);
			TextCtrl_RA4->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA4->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA4) == PORTA_RA4 && ToggleButton_RA4->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA4->SetLabel(_("Entrée"));
			ToggleButton_RA4->SetValue(false);
			TextCtrl_RA4->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA5) == 0 && !ToggleButton_RA5->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA5->SetLabel(_("Sortie"));
			ToggleButton_RA5->SetValue(true);
			TextCtrl_RA5->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA5->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA5) == PORTA_RA5 && ToggleButton_RA5->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA5->SetLabel(_("Entrée"));
			ToggleButton_RA5->SetValue(false);
			TextCtrl_RA5->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA6) == 0 && !ToggleButton_RA6->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA6->SetLabel(_("Sortie"));
			ToggleButton_RA6->SetValue(true);
			TextCtrl_RA6->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA6->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA] & PORTA_RA6) == PORTA_RA6 && ToggleButton_RA6->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RA6->SetLabel(_("Entrée"));
			ToggleButton_RA6->SetValue(false);
			TextCtrl_RA6->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RA6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		// Port B
		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB0) == 0 && !ToggleButton_RB0->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB0->SetLabel(_("Sortie"));
			ToggleButton_RB0->SetValue(true);
			TextCtrl_RB0->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB0->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB0) == PORTB_RB0 && ToggleButton_RB0->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB0->SetLabel(_("Entrée"));
			ToggleButton_RB0->SetValue(false);
			TextCtrl_RB0->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB1) == 0 && !ToggleButton_RB1->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB1->SetLabel(_("Sortie"));
			ToggleButton_RB1->SetValue(true);
			TextCtrl_RB1->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB1->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB1) == PORTB_RB1 && ToggleButton_RB1->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB1->SetLabel(_("Entrée"));
			ToggleButton_RB1->SetValue(false);
			TextCtrl_RB1->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB2) == 0 && !ToggleButton_RB2->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB2->SetLabel(_("Sortie"));
			ToggleButton_RB2->SetValue(true);
			TextCtrl_RB2->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB2->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB2) == PORTB_RB2 && ToggleButton_RB2->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB2->SetLabel(_("Entrée"));
			ToggleButton_RB2->SetValue(false);
			TextCtrl_RB2->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB3) == 0 && !ToggleButton_RB3->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB3->SetLabel(_("Sortie"));
			ToggleButton_RB3->SetValue(true);
			TextCtrl_RB3->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB3->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB3) == PORTB_RB3 && ToggleButton_RB3->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB3->SetLabel(_("Entrée"));
			ToggleButton_RB3->SetValue(false);
			TextCtrl_RB3->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB4) == 0 && !ToggleButton_RB4->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB4->SetLabel(_("Sortie"));
			ToggleButton_RB4->SetValue(true);
			TextCtrl_RB4->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB4->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB4) == PORTB_RB4 && ToggleButton_RB4->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB4->SetLabel(_("Entrée"));
			ToggleButton_RB4->SetValue(false);
			TextCtrl_RB4->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB5) == 0 && !ToggleButton_RB5->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB5->SetLabel(_("Sortie"));
			ToggleButton_RB5->SetValue(true);
			TextCtrl_RB5->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB5->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB5) == PORTB_RB5 && ToggleButton_RB5->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB5->SetLabel(_("Entrée"));
			ToggleButton_RB5->SetValue(false);
			TextCtrl_RB5->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB6) == 0 && !ToggleButton_RB6->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB6->SetLabel(_("Sortie"));
			ToggleButton_RB6->SetValue(true);
			TextCtrl_RB6->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB6->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB6) == PORTB_RB6 && ToggleButton_RB6->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB6->SetLabel(_("Entrée"));
			ToggleButton_RB6->SetValue(false);
			TextCtrl_RB6->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB7) == 0 && !ToggleButton_RB7->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB7->SetLabel(_("Sortie"));
			ToggleButton_RB7->SetValue(true);
			TextCtrl_RB7->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB7->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+1] & PORTB_RB7) == PORTB_RB7 && ToggleButton_RB7->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RB7->SetLabel(_("Entrée"));
			ToggleButton_RB7->SetValue(false);
			TextCtrl_RB7->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RB7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		// Port C
		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC0) == 0 && !ToggleButton_RC0->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC0->SetLabel(_("Sortie"));
			ToggleButton_RC0->SetValue(true);
			TextCtrl_RC0->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC0->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC0) == PORTC_RC0 && ToggleButton_RC0->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC0->SetLabel(_("Entrée"));
			ToggleButton_RC0->SetValue(false);
			TextCtrl_RC0->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC1) == 0 && !ToggleButton_RC1->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC1->SetLabel(_("Sortie"));
			ToggleButton_RC1->SetValue(true);
			TextCtrl_RC1->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC1->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC1) == PORTC_RC1 && ToggleButton_RC1->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC1->SetLabel(_("Entrée"));
			ToggleButton_RC1->SetValue(false);
			TextCtrl_RC1->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC2) == 0 && !ToggleButton_RC2->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC2->SetLabel(_("Sortie"));
			ToggleButton_RC2->SetValue(true);
			TextCtrl_RC2->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC2->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC2) == PORTC_RC2 && ToggleButton_RC2->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC2->SetLabel(_("Entrée"));
			ToggleButton_RC2->SetValue(false);
			TextCtrl_RC2->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC4) == 0 && !ToggleButton_RC4->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC4->SetLabel(_("Sortie"));
			ToggleButton_RC4->SetValue(true);
			TextCtrl_RC4->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC4->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC4) == PORTC_RC4 && ToggleButton_RC4->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC4->SetLabel(_("Entrée"));
			ToggleButton_RC4->SetValue(false);
			TextCtrl_RC4->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC5) == 0 && !ToggleButton_RC5->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC5->SetLabel(_("Sortie"));
			ToggleButton_RC5->SetValue(true);
			TextCtrl_RC5->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC5->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC5) == PORTC_RC5 && ToggleButton_RC5->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC5->SetLabel(_("Entrée"));
			ToggleButton_RC5->SetValue(false);
			TextCtrl_RC5->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC6) == 0 && !ToggleButton_RC6->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC6->SetLabel(_("Sortie"));
			ToggleButton_RC6->SetValue(true);
			TextCtrl_RC6->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC6->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC6) == PORTC_RC6 && ToggleButton_RC6->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC6->SetLabel(_("Entrée"));
			ToggleButton_RC6->SetValue(false);
			TextCtrl_RC6->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC7) == 0 && !ToggleButton_RC7->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC7->SetLabel(_("Sortie"));
			ToggleButton_RC7->SetValue(true);
			TextCtrl_RC7->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC7->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+2] & PORTC_RC7) == PORTC_RC7 && ToggleButton_RC7->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RC7->SetLabel(_("Entrée"));
			ToggleButton_RC7->SetValue(false);
			TextCtrl_RC7->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RC7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		// Port D
		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD0) == 0 && !ToggleButton_RD0->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD0->SetLabel(_("Sortie"));
			ToggleButton_RD0->SetValue(true);
			TextCtrl_RD0->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD0->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD0) == PORTD_RD0 && ToggleButton_RD0->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD0->SetLabel(_("Entrée"));
			ToggleButton_RD0->SetValue(false);
			TextCtrl_RD0->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD1) == 0 && !ToggleButton_RD1->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD1->SetLabel(_("Sortie"));
			ToggleButton_RD1->SetValue(true);
			TextCtrl_RD1->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD1->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD1) == PORTD_RD1 && ToggleButton_RD1->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD1->SetLabel(_("Entrée"));
			ToggleButton_RD1->SetValue(false);
			TextCtrl_RD1->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD2) == 0 && !ToggleButton_RD2->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD2->SetLabel(_("Sortie"));
			ToggleButton_RD2->SetValue(true);
			TextCtrl_RD2->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD2->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD2) == PORTD_RD2 && ToggleButton_RD2->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD2->SetLabel(_("Entrée"));
			ToggleButton_RD2->SetValue(false);
			TextCtrl_RD2->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD3) == 0 && !ToggleButton_RD3->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD3->SetLabel(_("Sortie"));
			ToggleButton_RD3->SetValue(true);
			TextCtrl_RD3->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD3->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD3) == PORTD_RD3 && ToggleButton_RD3->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD3->SetLabel(_("Entrée"));
			ToggleButton_RD3->SetValue(false);
			TextCtrl_RD3->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD4) == 0 && !ToggleButton_RD4->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD4->SetLabel(_("Sortie"));
			ToggleButton_RD4->SetValue(true);
			TextCtrl_RD4->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD4->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD4) == PORTD_RD4 && ToggleButton_RD4->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD4->SetLabel(_("Entrée"));
			ToggleButton_RD4->SetValue(false);
			TextCtrl_RD4->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD5) == 0 && !ToggleButton_RD5->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD5->SetLabel(_("Sortie"));
			ToggleButton_RD5->SetValue(true);
			TextCtrl_RD5->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD5->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD5) == PORTD_RD5 && ToggleButton_RD5->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD5->SetLabel(_("Entrée"));
			ToggleButton_RD5->SetValue(false);
			TextCtrl_RD5->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD6) == 0 && !ToggleButton_RD6->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD6->SetLabel(_("Sortie"));
			ToggleButton_RD6->SetValue(true);
			TextCtrl_RD6->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD6->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD6) == PORTD_RD6 && ToggleButton_RD6->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD6->SetLabel(_("Entrée"));
			ToggleButton_RD6->SetValue(false);
			TextCtrl_RD6->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD7) == 0 && !ToggleButton_RD7->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD7->SetLabel(_("Sortie"));
			ToggleButton_RD7->SetValue(true);
			TextCtrl_RD7->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD7->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+3] & PORTD_RD7) == PORTD_RD7 && ToggleButton_RD7->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RD7->SetLabel(_("Entrée"));
			ToggleButton_RD7->SetValue(false);
			TextCtrl_RD7->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RD7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		// Port E
		if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE0) == 0 && !ToggleButton_RE0->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RE0->SetLabel(_("Sortie"));
			ToggleButton_RE0->SetValue(true);
			TextCtrl_RE0->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RE0->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE0) == PORTE_RE0 && ToggleButton_RE0->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RE0->SetLabel(_("Entrée"));
			ToggleButton_RE0->SetValue(false);
			TextCtrl_RE0->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RE0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE1) == 0 && !ToggleButton_RE1->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RE1->SetLabel(_("Sortie"));
			ToggleButton_RE1->SetValue(true);
			TextCtrl_RE1->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RE1->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE1) == PORTE_RE1 && ToggleButton_RE1->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RE1->SetLabel(_("Entrée"));
			ToggleButton_RE1->SetValue(false);
			TextCtrl_RE1->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RE1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE2) == 0 && !ToggleButton_RE2->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RE2->SetLabel(_("Sortie"));
			ToggleButton_RE2->SetValue(true);
			TextCtrl_RE2->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RE2->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE2) == PORTE_RE2 && ToggleButton_RE2->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RE2->SetLabel(_("Entrée"));
			ToggleButton_RE2->SetValue(false);
			TextCtrl_RE2->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RE2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}

		if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE3) == 0 && !ToggleButton_RE3->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RE3->SetLabel(_("Sortie"));
			ToggleButton_RE3->SetValue(true);
			TextCtrl_RE3->SetEditable(true);
			SetEvtHandlerEnabled(false);
			TextCtrl_RE3->SetForegroundColour(*wxBLACK);
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
		else if ((InputPacketBuffer[1+UP_DATA+4] & PORTE_RE3) == PORTE_RE3 && ToggleButton_RE3->GetValue()) {
			wxMutexGuiEnter();
			ToggleButton_RE3->SetLabel(_("Entrée"));
			ToggleButton_RE3->SetValue(false);
			TextCtrl_RE3->SetEditable(false);
			SetEvtHandlerEnabled(false);
			TextCtrl_RE3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
			SetEvtHandlerEnabled(true);
			wxMutexGuiLeave();
		}
	}
//	else
//		wxMessageBox(_("Pas de réponse pour {CMD_GET, GET_PORTS_CONFIG}"), _("Erreur"), wxICON_ERROR);
}

/**
 * Mise à jour des distances mesurées par les télémètres.
 * Cette fonction ne peut pas être appelée par le thread principal (utilisation
 * des MutexGui).
*/
void RobotMainboardFrame::UpdateRangefinder() {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;

	wxString Label;
	int RangefinderDist;

	id = FindDevice(USB_PID_PROXIMITY_SENSOR);
	if (id == USB_NOT_FOUND) return;

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;
	OutputPacketBuffer[1+UP_DATA] = GET_RANGEFINDER_STATE;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		// Télémètre N°1
		RangefinderDist = (InputPacketBuffer[1+UP_DATA] << 24);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+1] << 16);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+2] << 8);
		RangefinderDist |= InputPacketBuffer[1+UP_DATA+3];
		Label.sprintf(_("%d cm"), (int)((double) RangefinderDist / 10));

		wxMutexGuiEnter();
		Gauge1->SetValue(RangefinderDist);
		StaticText11->SetLabel(Label);
		wxMutexGuiLeave();

		// Télémètre N°2
		RangefinderDist = (InputPacketBuffer[1+UP_DATA+4] << 24);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+5] << 16);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+6] << 8);
		RangefinderDist |= InputPacketBuffer[1+UP_DATA+7];
		Label.sprintf(_("%d cm"), (int)((double) RangefinderDist / 10));

		wxMutexGuiEnter();
		Gauge2->SetValue(RangefinderDist);
		StaticText18->SetLabel(Label);
		wxMutexGuiLeave();

		// Télémètre N°3
		RangefinderDist = (InputPacketBuffer[1+UP_DATA+8] << 24);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+9] << 16);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+10] << 8);
		RangefinderDist |= InputPacketBuffer[1+UP_DATA+11];
		Label.sprintf(_("%d cm"), (int)((double) RangefinderDist / 10));

		wxMutexGuiEnter();
		Gauge3->SetValue(RangefinderDist);
		StaticText23->SetLabel(Label);
		wxMutexGuiLeave();

		// Télémètre N°4
		RangefinderDist = (InputPacketBuffer[1+UP_DATA+12] << 24);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+13] << 16);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+14] << 8);
		RangefinderDist |= InputPacketBuffer[1+UP_DATA+15];
		Label.sprintf(_("%d cm"), (int)((double) RangefinderDist / 10));

		wxMutexGuiEnter();
		Gauge4->SetValue(RangefinderDist);
		StaticText49->SetLabel(Label);
		wxMutexGuiLeave();

		// Télémètre N°5
		RangefinderDist = (InputPacketBuffer[1+UP_DATA+16] << 24);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+17] << 16);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+18] << 8);
		RangefinderDist |= InputPacketBuffer[1+UP_DATA+19];
		Label.sprintf(_("%d cm"), (int)((double) RangefinderDist / 10));

		wxMutexGuiEnter();
		Gauge5->SetValue(RangefinderDist);
		StaticText50->SetLabel(Label);
		wxMutexGuiLeave();

		// Télémètre N°6
		RangefinderDist = (InputPacketBuffer[1+UP_DATA+20] << 24);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+21] << 16);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+22] << 8);
		RangefinderDist |= InputPacketBuffer[1+UP_DATA+23];
		Label.sprintf(_("%d cm"), (int)((double) RangefinderDist / 10));

		wxMutexGuiEnter();
		Gauge6->SetValue(RangefinderDist);
		StaticText51->SetLabel(Label);
		wxMutexGuiLeave();

		// Télémètre N°7
		RangefinderDist = (InputPacketBuffer[1+UP_DATA+24] << 24);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+25] << 16);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+26] << 8);
		RangefinderDist |= InputPacketBuffer[1+UP_DATA+27];
		Label.sprintf(_("%d cm"), (int)((double) RangefinderDist / 10));

		wxMutexGuiEnter();
		Gauge7->SetValue(RangefinderDist);
		StaticText52->SetLabel(Label);
		wxMutexGuiLeave();

		// Télémètre N°8
		RangefinderDist = (InputPacketBuffer[1+UP_DATA+28] << 24);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+29] << 16);
		RangefinderDist |= (InputPacketBuffer[1+UP_DATA+30] << 8);
		RangefinderDist |= InputPacketBuffer[1+UP_DATA+31];
		Label.sprintf(_("%d cm"), (int)((double) RangefinderDist / 10));

		wxMutexGuiEnter();
		Gauge8->SetValue(RangefinderDist);
		StaticText53->SetLabel(Label);
		wxMutexGuiLeave();
	}
//	else
//		wxMessageBox(_("Pas de réponse pour {CMD_GET, GET_RANGEFINDER_STATE}"), _("Erreur"), wxICON_ERROR);
}

/**
 * Mise à jour l'état des capteurs de contact.
 * Cette fonction ne peut pas être appelée par le thread principal (utilisation
 * des MutexGui).
*/
void RobotMainboardFrame::UpdateTOR() {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;

	id = FindDevice(USB_PID_PROXIMITY_SENSOR);
	if (id == USB_NOT_FOUND) return;

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;
	OutputPacketBuffer[1+UP_DATA] = GET_TOR_STATE;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		wxMutexGuiEnter();

		if (InputPacketBuffer[1+UP_DATA] & 1)
			TextCtrl_TOR1->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR1->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR1->Refresh();

		if (InputPacketBuffer[1+UP_DATA] & 2)
			TextCtrl_TOR2->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR2->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR2->Refresh();

		if (InputPacketBuffer[1+UP_DATA] & 4)
			TextCtrl_TOR3->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR3->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR3->Refresh();

		if (InputPacketBuffer[1+UP_DATA] & 8)
			TextCtrl_TOR4->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR4->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR4->Refresh();

		if (InputPacketBuffer[1+UP_DATA] & 16)
			TextCtrl_TOR5->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR5->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR5->Refresh();

		if (InputPacketBuffer[1+UP_DATA] & 32)
			TextCtrl_TOR6->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR6->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR6->Refresh();

		if (InputPacketBuffer[1+UP_DATA] & 64)
			TextCtrl_TOR7->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR7->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR7->Refresh();

		if (InputPacketBuffer[1+UP_DATA] & 128)
			TextCtrl_TOR8->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR8->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR8->Refresh();

		if (InputPacketBuffer[1+UP_DATA+1] & 1)
			TextCtrl_TOR9->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR9->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR9->Refresh();

		if (InputPacketBuffer[1+UP_DATA+1] & 2)
			TextCtrl_TOR10->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR10->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR10->Refresh();

		if (InputPacketBuffer[1+UP_DATA+1] & 4)
			TextCtrl_TOR11->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR11->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR11->Refresh();

		if (InputPacketBuffer[1+UP_DATA+1] & 8)
			TextCtrl_TOR12->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR12->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR12->Refresh();

		if (InputPacketBuffer[1+UP_DATA+1] & 16)
			TextCtrl_TOR13->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR13->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR13->Refresh();

		if (InputPacketBuffer[1+UP_DATA+1] & 32)
			TextCtrl_TOR14->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR14->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR14->Refresh();

		if (InputPacketBuffer[1+UP_DATA+1] & 64)
			TextCtrl_TOR15->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR15->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR15->Refresh();

		if (InputPacketBuffer[1+UP_DATA+1] & 128)
			TextCtrl_TOR16->SetBackgroundColour(*wxRED);
		else
			TextCtrl_TOR16->SetBackgroundColour(*wxGREEN);

		TextCtrl_TOR16->Refresh();

		wxMutexGuiLeave();
	}
//	else
//		wxMessageBox(_("Pas de réponse pour {CMD_GET, GET_RANGEFINDER_STATE}"), _("Erreur"), wxICON_ERROR);
}

/**
 * Mise à jour des courants mesurées par la carte de puissance.
 * Cette fonction ne peut pas être appelée par le thread principal (utilisation
 * des MutexGui).
*/
void RobotMainboardFrame::UpdateIsens() {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;

	int Isens1, Isens2;
	wxString Isens1Label, Isens2Label;

	id = FindDevice(USB_PID_MOTOR_CONTROLLER);
	if (id == USB_NOT_FOUND) return;

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;
	OutputPacketBuffer[1+UP_DATA] = GET_ISENS;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		Isens1 = (InputPacketBuffer[1+UP_DATA] << 24);
		Isens1 |= (InputPacketBuffer[1+UP_DATA+1] << 16);
		Isens1 |= (InputPacketBuffer[1+UP_DATA+2] << 8);
		Isens1 |= InputPacketBuffer[1+UP_DATA+3];
		Isens1Label.sprintf(_("%01.3f A"), (float) Isens1 / 1000.0);

		Isens2 = (InputPacketBuffer[1+UP_DATA+4] << 24);
		Isens2 |= (InputPacketBuffer[1+UP_DATA+5] << 16);
		Isens2 |= (InputPacketBuffer[1+UP_DATA+6] << 8);
		Isens2 |= InputPacketBuffer[1+UP_DATA+7];
		Isens2Label.sprintf(_("%01.3f A"), (float) Isens2 / 1000.0);

		wxMutexGuiEnter();
		TextCtrl8->SetLabel(Isens1Label);
		TextCtrl9->SetLabel(Isens2Label);
		wxMutexGuiLeave();
	}
//	else
//		wxMessageBox(_("Pas de réponse pour {CMD_GET, GET_ISENS}"), _("Erreur"), wxICON_ERROR);
}

/**
 * Mise à jour de la position des moteurs.
 * Cette fonction ne peut pas être appelée par le thread principal (utilisation
 * des MutexGui).
*/
void RobotMainboardFrame::UpdatePosition() {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;

	int pos1, pos2;
	wxString pos1Label, pos2Label;

	id = FindDevice(USB_PID_MOTOR_CONTROLLER);
	if (id == USB_NOT_FOUND) return;

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;
	OutputPacketBuffer[1+UP_DATA] = GET_CURRENT_POS;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		pos1 = (InputPacketBuffer[1+UP_DATA] << 24);
		pos1 |= (InputPacketBuffer[1+UP_DATA+1] << 16);
		pos1 |= (InputPacketBuffer[1+UP_DATA+2] << 8);
		pos1 |= InputPacketBuffer[1+UP_DATA+3];
		pos1Label.sprintf(_("%d"), pos1);

		pos2 = (InputPacketBuffer[1+UP_DATA+4] << 24);
		pos2 |= (InputPacketBuffer[1+UP_DATA+5] << 16);
		pos2 |= (InputPacketBuffer[1+UP_DATA+6] << 8);
		pos2 |= InputPacketBuffer[1+UP_DATA+7];
		pos2Label.sprintf(_("%d"), pos2);

		wxMutexGuiEnter();
		TextCtrl10->SetLabel(pos1Label);
		TextCtrl11->SetLabel(pos2Label);
		wxMutexGuiLeave();
	}
//	else
//		wxMessageBox(_("Pas de réponse pour {CMD_GET, GET_ISENS}"), _("Erreur"), wxICON_ERROR);
}

void RobotMainboardFrame::UpdateAX12() {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;
	long val;

	int position, speed, torque, CWAngleLimit, CCWAngleLimit;
	wxString positionLabel, speedLabel, torqueLabel, voltageLabel, temperatureLabel;
	wxString CWAngleLimitLabel, CCWAngleLimitLabel;

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) return;

	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_AX12;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = AX12_GET_STATS;

	wxMutexGuiEnter();

	if ((TextCtrl15->GetValue()).ToLong(&val, 0) && val >= 0 && val < 256)
		OutputPacketBuffer[1+UP_DATA+1] = (unsigned char) val;
	else {
		wxMutexGuiLeave();
		return;
	}

	wxMutexGuiLeave();

	OutputPacketBuffer[1+UP_DATA+2] = 255;		// Timeout

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result && InputPacketBuffer[1+UP_ERR] == 0) {
		position = (InputPacketBuffer[1+UP_DATA] << 8);
		position|= InputPacketBuffer[1+UP_DATA+1];
		position = (int) ((float) position / 1023.0 * 300.0 + 0.5);
		positionLabel.sprintf(_("%d"), position);

		speed = (InputPacketBuffer[1+UP_DATA+2] << 8);
		speed|= InputPacketBuffer[1+UP_DATA+3];
		speed = (int) ((float) position / 1023.0 * 114.0 + 0.5);
		speedLabel.sprintf(_("%d"), speed);

		torque = ((InputPacketBuffer[1+UP_DATA+4] & 0x03) << 8);
		torque|= InputPacketBuffer[1+UP_DATA+5];

		if (!((InputPacketBuffer[1+UP_DATA+4] >> 2) & 0x01))
			torque = -torque;

		torqueLabel.sprintf(_("%d"), torque);

		voltageLabel.sprintf(_("%1.1f V"), (float) InputPacketBuffer[1+UP_DATA+6] / 10.0);
		temperatureLabel.sprintf(_("%d°C"), (int) InputPacketBuffer[1+UP_DATA+7]);

		CWAngleLimit = (InputPacketBuffer[1+UP_DATA+8] << 8);
		CWAngleLimit|= InputPacketBuffer[1+UP_DATA+9];
		CWAngleLimitLabel.sprintf(_("%d"), CWAngleLimit);

		CCWAngleLimit = (InputPacketBuffer[1+UP_DATA+10] << 8);
		CCWAngleLimit|= InputPacketBuffer[1+UP_DATA+11];
		CCWAngleLimitLabel.sprintf(_("%d"), CCWAngleLimit);

		wxMutexGuiEnter();
		StaticText88->SetLabel(CWAngleLimitLabel);
		StaticText89->SetLabel(CCWAngleLimitLabel);
		StaticText92->SetLabel(positionLabel);
		StaticText91->SetLabel(speedLabel);
		StaticText94->SetLabel(torqueLabel);
		StaticText95->SetLabel(voltageLabel);
		StaticText96->SetLabel(temperatureLabel);
		wxMutexGuiLeave();
	}
//	else
//		wxMessageBox(_("Pas de réponse pour {CMD_GET, GET_ISENS}"), _("Erreur"), wxICON_ERROR);
}

void RobotMainboardFrame::UpdateI2C() {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;

	int angleDeg;
	wxString versionLabel, angleLabel, angleDegLabel;

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) {
		id = FindDevice(USB_PID_USB_DEV_BOARD);
		if (id == USB_NOT_FOUND) return;
	}

	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;
	OutputPacketBuffer[1+UP_DATA] = GET_CMP03_DATA;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result && InputPacketBuffer[1+UP_ERR] == 0) {
		versionLabel.sprintf(_("%d"), (int) InputPacketBuffer[1+UP_DATA]);
		angleLabel.sprintf(_("%d"), (int) InputPacketBuffer[1+UP_DATA+1]);

		angleDeg = (InputPacketBuffer[1+UP_DATA+2] << 8);
		angleDeg|= InputPacketBuffer[1+UP_DATA+3];
		angleDegLabel.sprintf(_("%01.2f°"), (float) angleDeg / 10.0);

		wxMutexGuiEnter();
		TextCtrl12->SetLabel(versionLabel);
		TextCtrl13->SetLabel(angleLabel);
		TextCtrl14->SetLabel(angleDegLabel);
		wxMutexGuiLeave();
	}
//	else
//		wxMessageBox(_("Pas de réponse pour {CMD_GET, GET_ISENS}"), _("Erreur"), wxICON_ERROR);
}

/**
 * Détermine l'origine de dernier RESET du PIC sur la carte sélectionnée.
*/
void RobotMainboardFrame::RetrieveResetSource() {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;

	id = SelectedDevice();
	if (id == USB_NONE) return;

	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;
	OutputPacketBuffer[1+UP_DATA] = GET_RESET_SOURCE;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		switch (InputPacketBuffer[1+UP_DATA]) {
			case RESET_SOURCE_POR:
				TextCtrl2->ChangeValue(_("Power-on Reset"));
				break;

			case RESET_SOURCE_RI:
				TextCtrl2->ChangeValue(_("RESET Instruction"));
				break;

			case RESET_SOURCE_BOR:
				TextCtrl2->ChangeValue(_("Brown-out Reset"));
				break;

			case RESET_SOURCE_WDT:
				TextCtrl2->ChangeValue(_("Watchdog Time-out Reset"));
				break;

			case RESET_SOURCE_STKFUL:
				TextCtrl2->ChangeValue(_("Stack Full Reset"));
				break;

			case RESET_SOURCE_STKUNF:
				TextCtrl2->ChangeValue(_("Stack Underflow Reset"));
				break;

			case RESET_SOURCE_MCLR:
				TextCtrl2->ChangeValue(_("Master Clear Reset"));
				break;

			default:
				wxMessageBox(_("Réponse inconnue pour {CMD_GET, GET_FIRMWARE_BUILD}"), _("Erreur"), wxICON_ERROR);
		}
	}
//	else
//		wxMessageBox(_("Pas de réponse pour {CMD_GET, GET_FIRMWARE_BUILD}"), _("Erreur"), wxICON_ERROR);
}

/**
 * Récupère les informations sur le firmware de la carte sélectionnée.
*/
void RobotMainboardFrame::RetrieveFirmwareBuild() {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	char FirmwareBuild[104] = {0};
	bool Result;
	int i;
	int end1 = -1;
	int end2 = -1;

	id = SelectedDevice();
	if (id == USB_NONE) return;

	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;
	OutputPacketBuffer[1+UP_DATA] = GET_BOARD_INFO;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		for (i = UP_DATA; i < 60; i++) {
			FirmwareBuild[i-UP_DATA] = InputPacketBuffer[1+i];

			if (InputPacketBuffer[1+i] == '\0') {
				end1 = i-UP_DATA;
				break;
			}
		}

		if (end1 < 0) {
			wxMessageBox(_("Le PIC a envoyé une signature du firmware non valide (celle-ci est de longueur excessive ou ne se termine pas par NULL)."
						   " Il est par conséquent possible que la signature du firmware affichée soit tronquée."), _("Erreur signature du firmware PIC"), wxICON_ERROR);
		}
	}

	FirmwareBuild[end1++] = '\n';
	FirmwareBuild[end1] = '\0';

	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;
	OutputPacketBuffer[1+UP_DATA] = GET_FIRMWARE_BUILD;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		for (i = UP_DATA; i < 60; i++) {
			FirmwareBuild[end1+i-UP_DATA] = InputPacketBuffer[1+i];

			if (InputPacketBuffer[1+i] == '\0') {
				end2 = end1+i-UP_DATA;
				break;
			}
		}

		if (end2 < 0) {
			wxMessageBox(_("Le PIC a envoyé une signature du firmware non valide (celle-ci est de longueur excessive ou ne se termine pas par NULL)."
						   " Il est par conséquent possible que la signature du firmware affichée soit tronquée."), _("Erreur signature du firmware PIC"), wxICON_ERROR);
		}

		TextCtrl1->ChangeValue(wxString::FromAscii(&FirmwareBuild[0]));
	}
//	else
//		wxMessageBox(_("Pas de réponse pour {CMD_GET, GET_FIRMWARE_BUILD}"), _("Erreur"), wxICON_ERROR);
}

void RobotMainboardFrame::OnButton1Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;			//The first byte is the "Report ID".  This number is used by the USB driver, but does not
	//get tranmitted accross the USB bus.  The custom HID class firmware is only configured for
	//one type of report, therefore, we must always initializate this byte to "0" before sending
	//a data packet to the device.

	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_RESET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	SetCursor(wxCURSOR_WAIT);

	//The basic Windows I/O functions WriteFile() and ReadFile() can be used to read and write to HID class USB devices.
	//Note that we need the handle which we got earlier when we called CreateFile() (when we hit the connect button).
	//The following function call will send out 64 bytes (starting from OutputPacketBuffer[1]) to the USB device.  The data will
	//arrive on the OUT interrupt endpoint.
	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);	//Blocking function, unless an "overlapped" structure is used
}

void RobotMainboardFrame::OnButton2Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_BOOTLOADER;
	OutputPacketBuffer[1+UP_ERR] = 0;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnButton3Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = FindDevice(USB_PID_MOTOR_CONTROLLER);
	if (id == USB_NOT_FOUND) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_TEST;
	OutputPacketBuffer[1+UP_ERR] = 0;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnButton4Click(wxCommandEvent& event) {
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	OutputPacketBuffer[0] = 0;			//The first byte is the "Report ID".  This number is used by the USB driver, but does not
	//get tranmitted accross the USB bus.  The custom HID class firmware is only configured for
	//one type of report, therefore, we must always initializate this byte to "0" before sending
	//a data packet to the device.

	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_RESET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	SetCursor(wxCURSOR_WAIT);

	for (int i = 0; i < MAX_USB_DEVICES; i++) {
		if (DevicePID(i) != USB_INVALID_PID)
			WriteFile(WriteHandle[i], &OutputPacketBuffer, 65, &BytesWritten, 0);	//Blocking function, unless an "overlapped" structure is used
	}
}

void RobotMainboardFrame::OnToggleButton_RA0Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RA0->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RA0->SetLabel(_("Sortie"));
		TextCtrl_RA0->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA0->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RA0->SetLabel(_("Entrée"));
		TextCtrl_RA0->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA0;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RA0Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RA0->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RA0->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA0;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RA1Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RA1->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RA1->SetLabel(_("Sortie"));
		TextCtrl_RA1->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA1->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RA1->SetLabel(_("Entrée"));
		TextCtrl_RA1->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA1;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RA1Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RA1->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RA1->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA1;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RA2Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RA2->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RA2->SetLabel(_("Sortie"));
		TextCtrl_RA2->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA2->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RA2->SetLabel(_("Entrée"));
		TextCtrl_RA2->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA2;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RA2Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RA2->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RA2->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA2;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RA3Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RA3->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RA3->SetLabel(_("Sortie"));
		TextCtrl_RA3->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA3->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RA3->SetLabel(_("Entrée"));
		TextCtrl_RA3->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA3;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RA3Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RA3->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RA3->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA3;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RA4Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RA4->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RA4->SetLabel(_("Sortie"));
		TextCtrl_RA4->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA4->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RA4->SetLabel(_("Entrée"));
		TextCtrl_RA4->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA4;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RA4Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RA4->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RA4->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA4;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RA5Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RA5->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RA5->SetLabel(_("Sortie"));
		TextCtrl_RA5->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA5->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RA5->SetLabel(_("Entrée"));
		TextCtrl_RA5->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA5;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RA5Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RA5->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RA5->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA5;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RA6Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RA6->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RA6->SetLabel(_("Sortie"));
		TextCtrl_RA6->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA6->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RA6->SetLabel(_("Entrée"));
		TextCtrl_RA6->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RA6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA6;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RA6Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RA6->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RA6->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = PORTA_RA6;	// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RB0Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RB0->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RB0->SetLabel(_("Sortie"));
		TextCtrl_RB0->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB0->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RB0->SetLabel(_("Entrée"));
		TextCtrl_RB0->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB0;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RB0Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RB0->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RB0->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB0;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RB1Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RB1->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RB1->SetLabel(_("Sortie"));
		TextCtrl_RB1->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB1->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RB1->SetLabel(_("Entrée"));
		TextCtrl_RB1->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB1;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RB1Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RB1->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RB1->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB1;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RB2Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RB2->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RB2->SetLabel(_("Sortie"));
		TextCtrl_RB2->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB2->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RB2->SetLabel(_("Entrée"));
		TextCtrl_RB2->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB2;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RB2Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RB2->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RB2->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB2;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RB3Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RB3->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RB3->SetLabel(_("Sortie"));
		TextCtrl_RB3->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB3->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RB3->SetLabel(_("Entrée"));
		TextCtrl_RB3->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB3;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RB3Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RB3->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RB3->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB3;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RB4Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RB4->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RB4->SetLabel(_("Sortie"));
		TextCtrl_RB4->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB4->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RB4->SetLabel(_("Entrée"));
		TextCtrl_RB4->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB4;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RB4Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RB4->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RB4->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB4;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RB5Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RB5->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RB5->SetLabel(_("Sortie"));
		TextCtrl_RB5->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB5->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RB5->SetLabel(_("Entrée"));
		TextCtrl_RB5->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB5;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RB5Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RB5->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RB5->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB5;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RB6Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RB6->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RB6->SetLabel(_("Sortie"));
		TextCtrl_RB6->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB6->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RB6->SetLabel(_("Entrée"));
		TextCtrl_RB6->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB6;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RB6Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RB6->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RB6->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB6;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RB7Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RB7->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RB7->SetLabel(_("Sortie"));
		TextCtrl_RB7->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB7->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RB7->SetLabel(_("Entrée"));
		TextCtrl_RB7->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RB7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB7;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RB7Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RB7->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RB7->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = PORTB_RB7;	// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RC0Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RC0->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RC0->SetLabel(_("Sortie"));
		TextCtrl_RC0->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC0->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RC0->SetLabel(_("Entrée"));
		TextCtrl_RC0->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC0;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RC0Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RC0->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RC0->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC0;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RC1Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RC1->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RC1->SetLabel(_("Sortie"));
		TextCtrl_RC1->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC1->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RC1->SetLabel(_("Entrée"));
		TextCtrl_RC1->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC1;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RC1Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RC1->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RC1->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC1;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RC2Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RC2->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RC2->SetLabel(_("Sortie"));
		TextCtrl_RC2->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC2->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RC2->SetLabel(_("Entrée"));
		TextCtrl_RC2->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC2;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RC2Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RC2->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RC2->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC2;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RC4Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RC4->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RC4->SetLabel(_("Sortie"));
		TextCtrl_RC4->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC4->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RC4->SetLabel(_("Entrée"));
		TextCtrl_RC4->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC4;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RC4Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RC4->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RC4->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC4;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RC5Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RC5->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RC5->SetLabel(_("Sortie"));
		TextCtrl_RC5->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC5->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RC5->SetLabel(_("Entrée"));
		TextCtrl_RC5->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC5;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RC5Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RC5->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RC5->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC5;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RC6Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RC6->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RC6->SetLabel(_("Sortie"));
		TextCtrl_RC6->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC6->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RC6->SetLabel(_("Entrée"));
		TextCtrl_RC6->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC6;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RC6Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RC6->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RC6->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC6;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RC7Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RC7->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RC7->SetLabel(_("Sortie"));
		TextCtrl_RC7->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC7->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RC7->SetLabel(_("Entrée"));
		TextCtrl_RC7->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RC7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC7;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RC7Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RC7->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RC7->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = PORTC_RC7;	// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RD0Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RD0->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RD0->SetLabel(_("Sortie"));
		TextCtrl_RD0->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD0->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RD0->SetLabel(_("Entrée"));
		TextCtrl_RD0->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD0;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RD0Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RD0->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RD0->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD0;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RD1Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RD1->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RD1->SetLabel(_("Sortie"));
		TextCtrl_RD1->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD1->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RD1->SetLabel(_("Entrée"));
		TextCtrl_RD1->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD1;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RD1Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RD1->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RD1->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD1;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RD2Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RD2->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RD2->SetLabel(_("Sortie"));
		TextCtrl_RD2->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD2->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RD2->SetLabel(_("Entrée"));
		TextCtrl_RD2->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD2;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RD2Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RD2->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RD2->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD2;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RD3Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RD3->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RD3->SetLabel(_("Sortie"));
		TextCtrl_RD3->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD3->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RD3->SetLabel(_("Entrée"));
		TextCtrl_RD3->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD3;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RD3Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RD3->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RD3->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD3;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RD4Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RD4->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RD4->SetLabel(_("Sortie"));
		TextCtrl_RD4->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD4->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RD4->SetLabel(_("Entrée"));
		TextCtrl_RD4->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD4->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD4;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RD4Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RD4->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RD4->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD4;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RD5Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RD5->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RD5->SetLabel(_("Sortie"));
		TextCtrl_RD5->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD5->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RD5->SetLabel(_("Entrée"));
		TextCtrl_RD5->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD5->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD5;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RD5Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RD5->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RD5->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD5;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RD6Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RD6->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RD6->SetLabel(_("Sortie"));
		TextCtrl_RD6->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD6->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RD6->SetLabel(_("Entrée"));
		TextCtrl_RD6->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD6->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD6;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RD6Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RD6->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RD6->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD6;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RD7Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RD7->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RD7->SetLabel(_("Sortie"));
		TextCtrl_RD7->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD7->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RD7->SetLabel(_("Entrée"));
		TextCtrl_RD7->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RD7->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD7;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RD7Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RD7->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RD7->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = PORTD_RD7;	// Port D
	OutputPacketBuffer[1+UP_DATA+5] = 0;			// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RE0Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RE0->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RE0->SetLabel(_("Sortie"));
		TextCtrl_RE0->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RE0->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RE0->SetLabel(_("Entrée"));
		TextCtrl_RE0->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RE0->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = PORTE_RE0;	// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RE0Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RE0->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RE0->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = PORTE_RE0;	// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RE1Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RE1->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RE1->SetLabel(_("Sortie"));
		TextCtrl_RE1->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RE1->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RE1->SetLabel(_("Entrée"));
		TextCtrl_RE1->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RE1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = PORTE_RE1;	// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RE1Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RE1->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RE1->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = PORTE_RE1;	// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RE2Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RE2->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RE2->SetLabel(_("Sortie"));
		TextCtrl_RE2->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RE2->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RE2->SetLabel(_("Entrée"));
		TextCtrl_RE2->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RE2->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = PORTE_RE2;	// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RE2Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RE2->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RE2->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = PORTE_RE2;	// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnToggleButton_RE3Toggle(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (ToggleButton_RE3->GetValue()) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_OUTPUTS;
		ToggleButton_RE3->SetLabel(_("Sortie"));
		TextCtrl_RE3->SetEditable(true);
		SetEvtHandlerEnabled(false);
		TextCtrl_RE3->SetForegroundColour(*wxBLACK);
		SetEvtHandlerEnabled(true);
	}
	else {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_CONFIG_INPUTS;
		ToggleButton_RE3->SetLabel(_("Entrée"));
		TextCtrl_RE3->SetEditable(false);
		SetEvtHandlerEnabled(false);
		TextCtrl_RE3->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_GRAYTEXT));
		SetEvtHandlerEnabled(true);
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = PORTE_RE3;	// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnTextCtrl_RE3Text(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (TextCtrl_RE3->GetValue() == _("1")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_HIGH;
	}
	else if (TextCtrl_RE3->GetValue() == _("0")) {
		OutputPacketBuffer[1+UP_DATA] = SET_PORTS_STATE_LOW;
	}
	else {
		wxMessageBox(_("Valeur incorrecte"), _("Erreur"), wxICON_ERROR);
		return;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Port A
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Port B
	OutputPacketBuffer[1+UP_DATA+3] = 0;			// Port C
	OutputPacketBuffer[1+UP_DATA+4] = 0;			// Port D
	OutputPacketBuffer[1+UP_DATA+5] = PORTE_RE3;	// Port E

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnListBox1Select(wxCommandEvent& event) {
	int pos = -1;

	if (ListBox1->GetSelection() != wxNOT_FOUND) {
		for (int i = 0; i < MAX_USB_DEVICES; i++) {
			if (DevicePID(i) != USB_INVALID_PID)
				pos++;

			if (pos == ListBox1->GetSelection()) {
				HIDSelect(i);
				break;
			}
		}
	}
}

void RobotMainboardFrame::OnButton5Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	int answer = wxMessageBox(_("Souhaitez-vous effectuer une calibration avancée du télémètre N°1 ?\r\n\r\n"
		"Note : le calibrage est indépendant pour chaque télémètre et est conservé même lorsque le PIC n'est plus alimenté."), _("Confirmation"), wxYES_NO | wxCANCEL);

	if (answer != wxCANCEL) {
		id = FindDevice(USB_PID_PROXIMITY_SENSOR);
		if (id == USB_NOT_FOUND) return;

		OutputPacketBuffer[0] = 0;
		OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
		OutputPacketBuffer[1+UP_DSEQ] = 0;
		OutputPacketBuffer[1+UP_CMD] = CMD_CALIBRATE;
		OutputPacketBuffer[1+UP_ERR] = 0;

		OutputPacketBuffer[1+UP_DATA] = CAL_START;
		OutputPacketBuffer[1+UP_DATA+1] = 0;				// Télémètre N°1

		if (answer == wxNO)
			OutputPacketBuffer[1+UP_DATA+2] = 1;
		else
			OutputPacketBuffer[1+UP_DATA+2] = 0;

		WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
	}
}

void RobotMainboardFrame::OnButton6Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	int answer = wxMessageBox(_("Souhaitez-vous effectuer une calibration avancée du télémètre N°2 ?\r\n\r\n"
		"Note : le calibrage est indépendant pour chaque télémètre et est conservé même lorsque le PIC n'est plus alimenté."), _("Confirmation"), wxYES_NO | wxCANCEL);

	if (answer != wxCANCEL) {
		id = FindDevice(USB_PID_PROXIMITY_SENSOR);
		if (id == USB_NOT_FOUND) return;

		OutputPacketBuffer[0] = 0;
		OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
		OutputPacketBuffer[1+UP_DSEQ] = 0;
		OutputPacketBuffer[1+UP_CMD] = CMD_CALIBRATE;
		OutputPacketBuffer[1+UP_ERR] = 0;

		OutputPacketBuffer[1+UP_DATA] = CAL_START;
		OutputPacketBuffer[1+UP_DATA+1] = 1;				// Télémètre N°2

		if (answer == wxNO)
			OutputPacketBuffer[1+UP_DATA+2] = 1;
		else
			OutputPacketBuffer[1+UP_DATA+2] = 0;

		WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
	}
}

void RobotMainboardFrame::OnButton7Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	int answer = wxMessageBox(_("Souhaitez-vous effectuer une calibration avancée du télémètre N°3 ?\r\n\r\n"
		"Note : le calibrage est indépendant pour chaque télémètre et est conservé même lorsque le PIC n'est plus alimenté."), _("Confirmation"), wxYES_NO | wxCANCEL);

	if (answer != wxCANCEL) {
		id = FindDevice(USB_PID_PROXIMITY_SENSOR);
		if (id == USB_NOT_FOUND) return;

		OutputPacketBuffer[0] = 0;
		OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
		OutputPacketBuffer[1+UP_DSEQ] = 0;
		OutputPacketBuffer[1+UP_CMD] = CMD_CALIBRATE;
		OutputPacketBuffer[1+UP_ERR] = 0;

		OutputPacketBuffer[1+UP_DATA] = CAL_START;
		OutputPacketBuffer[1+UP_DATA+1] = 2;				// Télémètre N°3

		if (answer == wxNO)
			OutputPacketBuffer[1+UP_DATA+2] = 1;
		else
			OutputPacketBuffer[1+UP_DATA+2] = 0;

		WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
	}
}

void RobotMainboardFrame::OnButton11Click1(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	int answer = wxMessageBox(_("Souhaitez-vous effectuer une calibration avancée du télémètre N°4 ?\r\n\r\n"
		"Note : le calibrage est indépendant pour chaque télémètre et est conservé même lorsque le PIC n'est plus alimenté."), _("Confirmation"), wxYES_NO | wxCANCEL);

	if (answer != wxCANCEL) {
		id = FindDevice(USB_PID_PROXIMITY_SENSOR);
		if (id == USB_NOT_FOUND) return;

		OutputPacketBuffer[0] = 0;
		OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
		OutputPacketBuffer[1+UP_DSEQ] = 0;
		OutputPacketBuffer[1+UP_CMD] = CMD_CALIBRATE;
		OutputPacketBuffer[1+UP_ERR] = 0;

		OutputPacketBuffer[1+UP_DATA] = CAL_START;
		OutputPacketBuffer[1+UP_DATA+1] = 3;				// Télémètre N°4

		if (answer == wxNO)
			OutputPacketBuffer[1+UP_DATA+2] = 1;
		else
			OutputPacketBuffer[1+UP_DATA+2] = 0;

		WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
	}
}

void RobotMainboardFrame::OnButton13Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	int answer = wxMessageBox(_("Souhaitez-vous effectuer une calibration avancée du télémètre N°5 ?\r\n\r\n"
		"Note : le calibrage est indépendant pour chaque télémètre et est conservé même lorsque le PIC n'est plus alimenté."), _("Confirmation"), wxYES_NO | wxCANCEL);

	if (answer != wxCANCEL) {
		id = FindDevice(USB_PID_PROXIMITY_SENSOR);
		if (id == USB_NOT_FOUND) return;

		OutputPacketBuffer[0] = 0;
		OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
		OutputPacketBuffer[1+UP_DSEQ] = 0;
		OutputPacketBuffer[1+UP_CMD] = CMD_CALIBRATE;
		OutputPacketBuffer[1+UP_ERR] = 0;

		OutputPacketBuffer[1+UP_DATA] = CAL_START;
		OutputPacketBuffer[1+UP_DATA+1] = 4;				// Télémètre N°5

		if (answer == wxNO)
			OutputPacketBuffer[1+UP_DATA+2] = 1;
		else
			OutputPacketBuffer[1+UP_DATA+2] = 0;

		WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
	}
}

void RobotMainboardFrame::OnButton15Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	int answer = wxMessageBox(_("Souhaitez-vous effectuer une calibration avancée du télémètre N°6 ?\r\n\r\n"
		"Note : le calibrage est indépendant pour chaque télémètre et est conservé même lorsque le PIC n'est plus alimenté."), _("Confirmation"), wxYES_NO | wxCANCEL);

	if (answer != wxCANCEL) {
		id = FindDevice(USB_PID_PROXIMITY_SENSOR);
		if (id == USB_NOT_FOUND) return;

		OutputPacketBuffer[0] = 0;
		OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
		OutputPacketBuffer[1+UP_DSEQ] = 0;
		OutputPacketBuffer[1+UP_CMD] = CMD_CALIBRATE;
		OutputPacketBuffer[1+UP_ERR] = 0;

		OutputPacketBuffer[1+UP_DATA] = CAL_START;
		OutputPacketBuffer[1+UP_DATA+1] = 5;				// Télémètre N°6

		if (answer == wxNO)
			OutputPacketBuffer[1+UP_DATA+2] = 1;
		else
			OutputPacketBuffer[1+UP_DATA+2] = 0;

		WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
	}
}

void RobotMainboardFrame::OnButton17Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	int answer = wxMessageBox(_("Souhaitez-vous effectuer une calibration avancée du télémètre N°7 ?\r\n\r\n"
		"Note : le calibrage est indépendant pour chaque télémètre et est conservé même lorsque le PIC n'est plus alimenté."), _("Confirmation"), wxYES_NO | wxCANCEL);

	if (answer != wxCANCEL) {
		id = FindDevice(USB_PID_PROXIMITY_SENSOR);
		if (id == USB_NOT_FOUND) return;

		OutputPacketBuffer[0] = 0;
		OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
		OutputPacketBuffer[1+UP_DSEQ] = 0;
		OutputPacketBuffer[1+UP_CMD] = CMD_CALIBRATE;
		OutputPacketBuffer[1+UP_ERR] = 0;

		OutputPacketBuffer[1+UP_DATA] = CAL_START;
		OutputPacketBuffer[1+UP_DATA+1] = 6;				// Télémètre N°7

		if (answer == wxNO)
			OutputPacketBuffer[1+UP_DATA+2] = 1;
		else
			OutputPacketBuffer[1+UP_DATA+2] = 0;

		WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
	}
}

void RobotMainboardFrame::OnButton19Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	int answer = wxMessageBox(_("Souhaitez-vous effectuer une calibration avancée du télémètre N°8 ?\r\n\r\n"
		"Note : le calibrage est indépendant pour chaque télémètre et est conservé même lorsque le PIC n'est plus alimenté."), _("Confirmation"), wxYES_NO | wxCANCEL);

	if (answer != wxCANCEL) {
		id = FindDevice(USB_PID_PROXIMITY_SENSOR);
		if (id == USB_NOT_FOUND) return;

		OutputPacketBuffer[0] = 0;
		OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
		OutputPacketBuffer[1+UP_DSEQ] = 0;
		OutputPacketBuffer[1+UP_CMD] = CMD_CALIBRATE;
		OutputPacketBuffer[1+UP_ERR] = 0;

		OutputPacketBuffer[1+UP_DATA] = CAL_START;
		OutputPacketBuffer[1+UP_DATA+1] = 7;				// Télémètre N°8

		if (answer == wxNO)
			OutputPacketBuffer[1+UP_DATA+2] = 1;
		else
			OutputPacketBuffer[1+UP_DATA+2] = 0;

		WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
	}
}

void RobotMainboardFrame::OnButton8Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;
	wxString calMsg;

	id = FindDevice(USB_PID_PROXIMITY_SENSOR);
	if (id == USB_NOT_FOUND) return;

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = GET_RANGEFINDER_CALIBRATION;
	OutputPacketBuffer[1+UP_DATA+1] = 0;				// Télémètre N°1

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		calMsg.Printf(_("Données de calibration du télémètre N°1 :\r\n\r\n"
			"Seuil de départ : %d (= %01.3f * Vref)\r\n"
			"Seuil minimal : %d (= %01.3f * Vref)\r\n"
			"Délais avant réception : %d us\r\n"
			"Pente [~ vitesse du son] : %d m/s\r\n"
			"Offset : %d (mm)"),
				InputPacketBuffer[1+UP_DATA], InputPacketBuffer[1+UP_DATA] / 24.0,
				InputPacketBuffer[1+UP_DATA+1], InputPacketBuffer[1+UP_DATA+1] / 24.0,
				(InputPacketBuffer[1+UP_DATA+2] << 8) | InputPacketBuffer[1+UP_DATA+3],
				(InputPacketBuffer[1+UP_DATA+4] << 8) | InputPacketBuffer[1+UP_DATA+5],
				(InputPacketBuffer[1+UP_DATA+6] << 8) | InputPacketBuffer[1+UP_DATA+7]);

		wxMessageBox(calMsg, _("Calibration"), wxICON_INFORMATION);
	}
}

void RobotMainboardFrame::OnButton9Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;
	wxString calMsg;

	id = FindDevice(USB_PID_PROXIMITY_SENSOR);
	if (id == USB_NOT_FOUND) return;

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = GET_RANGEFINDER_CALIBRATION;
	OutputPacketBuffer[1+UP_DATA+1] = 1;				// Télémètre N°2

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		calMsg.Printf(_("Données de calibration du télémètre N°2 :\r\n\r\n"
			"Seuil de départ : %d (= %01.3f * Vref)\r\n"
			"Seuil minimal : %d (= %01.3f * Vref)\r\n"
			"Délais avant réception : %d us\r\n"
			"Pente [~ vitesse du son] : %d m/s\r\n"
			"Offset : %d (mm)"),
				InputPacketBuffer[1+UP_DATA], InputPacketBuffer[1+UP_DATA] / 24.0,
				InputPacketBuffer[1+UP_DATA+1], InputPacketBuffer[1+UP_DATA+1] / 24.0,
				(InputPacketBuffer[1+UP_DATA+2] << 8) | InputPacketBuffer[1+UP_DATA+3],
				(InputPacketBuffer[1+UP_DATA+4] << 8) | InputPacketBuffer[1+UP_DATA+5],
				(InputPacketBuffer[1+UP_DATA+6] << 8) | InputPacketBuffer[1+UP_DATA+7]);

		wxMessageBox(calMsg, _("Calibration"), wxICON_INFORMATION);
	}
}

void RobotMainboardFrame::OnButton10Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;
	wxString calMsg;

	id = FindDevice(USB_PID_PROXIMITY_SENSOR);
	if (id == USB_NOT_FOUND) return;

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = GET_RANGEFINDER_CALIBRATION;
	OutputPacketBuffer[1+UP_DATA+1] = 2;				// Télémètre N°3

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		calMsg.Printf(_("Données de calibration du télémètre N°3 :\r\n\r\n"
			"Seuil de départ : %d (= %01.3f * Vref)\r\n"
			"Seuil minimal : %d (= %01.3f * Vref)\r\n"
			"Délais avant réception : %d us\r\n"
			"Pente [~ vitesse du son] : %d m/s\r\n"
			"Offset : %d (mm)"),
				InputPacketBuffer[1+UP_DATA], InputPacketBuffer[1+UP_DATA] / 24.0,
				InputPacketBuffer[1+UP_DATA+1], InputPacketBuffer[1+UP_DATA+1] / 24.0,
				(InputPacketBuffer[1+UP_DATA+2] << 8) | InputPacketBuffer[1+UP_DATA+3],
				(InputPacketBuffer[1+UP_DATA+4] << 8) | InputPacketBuffer[1+UP_DATA+5],
				(InputPacketBuffer[1+UP_DATA+6] << 8) | InputPacketBuffer[1+UP_DATA+7]);

		wxMessageBox(calMsg, _("Calibration"), wxICON_INFORMATION);
	}
}

void RobotMainboardFrame::OnButton12Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;
	wxString calMsg;

	id = FindDevice(USB_PID_PROXIMITY_SENSOR);
	if (id == USB_NOT_FOUND) return;

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = GET_RANGEFINDER_CALIBRATION;
	OutputPacketBuffer[1+UP_DATA+1] = 3;				// Télémètre N°4

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		calMsg.Printf(_("Données de calibration du télémètre N°4 :\r\n\r\n"
			"Seuil de départ : %d (= %01.3f * Vref)\r\n"
			"Seuil minimal : %d (= %01.3f * Vref)\r\n"
			"Délais avant réception : %d us\r\n"
			"Pente [~ vitesse du son] : %d m/s\r\n"
			"Offset : %d (mm)"),
				InputPacketBuffer[1+UP_DATA], InputPacketBuffer[1+UP_DATA] / 24.0,
				InputPacketBuffer[1+UP_DATA+1], InputPacketBuffer[1+UP_DATA+1] / 24.0,
				(InputPacketBuffer[1+UP_DATA+2] << 8) | InputPacketBuffer[1+UP_DATA+3],
				(InputPacketBuffer[1+UP_DATA+4] << 8) | InputPacketBuffer[1+UP_DATA+5],
				(InputPacketBuffer[1+UP_DATA+6] << 8) | InputPacketBuffer[1+UP_DATA+7]);

		wxMessageBox(calMsg, _("Calibration"), wxICON_INFORMATION);
	}
}

void RobotMainboardFrame::OnButton14Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;
	wxString calMsg;

	id = FindDevice(USB_PID_PROXIMITY_SENSOR);
	if (id == USB_NOT_FOUND) return;

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = GET_RANGEFINDER_CALIBRATION;
	OutputPacketBuffer[1+UP_DATA+1] = 4;				// Télémètre N°5

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		calMsg.Printf(_("Données de calibration du télémètre N°5 :\r\n\r\n"
			"Seuil de départ : %d (= %01.3f * Vref)\r\n"
			"Seuil minimal : %d (= %01.3f * Vref)\r\n"
			"Délais avant réception : %d us\r\n"
			"Pente [~ vitesse du son] : %d m/s\r\n"
			"Offset : %d (mm)"),
				InputPacketBuffer[1+UP_DATA], InputPacketBuffer[1+UP_DATA] / 24.0,
				InputPacketBuffer[1+UP_DATA+1], InputPacketBuffer[1+UP_DATA+1] / 24.0,
				(InputPacketBuffer[1+UP_DATA+2] << 8) | InputPacketBuffer[1+UP_DATA+3],
				(InputPacketBuffer[1+UP_DATA+4] << 8) | InputPacketBuffer[1+UP_DATA+5],
				(InputPacketBuffer[1+UP_DATA+6] << 8) | InputPacketBuffer[1+UP_DATA+7]);

		wxMessageBox(calMsg, _("Calibration"), wxICON_INFORMATION);
	}
}

void RobotMainboardFrame::OnButton16Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;
	wxString calMsg;

	id = FindDevice(USB_PID_PROXIMITY_SENSOR);
	if (id == USB_NOT_FOUND) return;

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = GET_RANGEFINDER_CALIBRATION;
	OutputPacketBuffer[1+UP_DATA+1] = 5;				// Télémètre N°6

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		calMsg.Printf(_("Données de calibration du télémètre N°6 :\r\n\r\n"
			"Seuil de départ : %d (= %01.3f * Vref)\r\n"
			"Seuil minimal : %d (= %01.3f * Vref)\r\n"
			"Délais avant réception : %d us\r\n"
			"Pente [~ vitesse du son] : %d m/s\r\n"
			"Offset : %d (mm)"),
				InputPacketBuffer[1+UP_DATA], InputPacketBuffer[1+UP_DATA] / 24.0,
				InputPacketBuffer[1+UP_DATA+1], InputPacketBuffer[1+UP_DATA+1] / 24.0,
				(InputPacketBuffer[1+UP_DATA+2] << 8) | InputPacketBuffer[1+UP_DATA+3],
				(InputPacketBuffer[1+UP_DATA+4] << 8) | InputPacketBuffer[1+UP_DATA+5],
				(InputPacketBuffer[1+UP_DATA+6] << 8) | InputPacketBuffer[1+UP_DATA+7]);

		wxMessageBox(calMsg, _("Calibration"), wxICON_INFORMATION);
	}
}

void RobotMainboardFrame::OnButton18Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;
	wxString calMsg;

	id = FindDevice(USB_PID_PROXIMITY_SENSOR);
	if (id == USB_NOT_FOUND) return;

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = GET_RANGEFINDER_CALIBRATION;
	OutputPacketBuffer[1+UP_DATA+1] = 6;				// Télémètre N°7

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		calMsg.Printf(_("Données de calibration du télémètre N°7 :\r\n\r\n"
			"Seuil de départ : %d (= %01.3f * Vref)\r\n"
			"Seuil minimal : %d (= %01.3f * Vref)\r\n"
			"Délais avant réception : %d us\r\n"
			"Pente [~ vitesse du son] : %d m/s\r\n"
			"Offset : %d (mm)"),
				InputPacketBuffer[1+UP_DATA], InputPacketBuffer[1+UP_DATA] / 24.0,
				InputPacketBuffer[1+UP_DATA+1], InputPacketBuffer[1+UP_DATA+1] / 24.0,
				(InputPacketBuffer[1+UP_DATA+2] << 8) | InputPacketBuffer[1+UP_DATA+3],
				(InputPacketBuffer[1+UP_DATA+4] << 8) | InputPacketBuffer[1+UP_DATA+5],
				(InputPacketBuffer[1+UP_DATA+6] << 8) | InputPacketBuffer[1+UP_DATA+7]);

		wxMessageBox(calMsg, _("Calibration"), wxICON_INFORMATION);
	}
}

void RobotMainboardFrame::OnButton20Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;
	wxString calMsg;

	id = FindDevice(USB_PID_PROXIMITY_SENSOR);
	if (id == USB_NOT_FOUND) return;

	// Configuration des ports
	InputPacketBuffer[0] = 0;
	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_GET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = GET_RANGEFINDER_CALIBRATION;
	OutputPacketBuffer[1+UP_DATA+1] = 7;				// Télémètre N°8

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

	for (int i = 0; i < USB_MAX_READ; i++) {
		Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

		if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
			break;
	}

	if (Result) {
		calMsg.Printf(_("Données de calibration du télémètre N°8 :\r\n\r\n"
			"Seuil de départ : %d (= %01.3f * Vref)\r\n"
			"Seuil minimal : %d (= %01.3f * Vref)\r\n"
			"Délais avant réception : %d us\r\n"
			"Pente [~ vitesse du son] : %d m/s\r\n"
			"Offset : %d (mm)"),
				InputPacketBuffer[1+UP_DATA], InputPacketBuffer[1+UP_DATA] / 24.0,
				InputPacketBuffer[1+UP_DATA+1], InputPacketBuffer[1+UP_DATA+1] / 24.0,
				(InputPacketBuffer[1+UP_DATA+2] << 8) | InputPacketBuffer[1+UP_DATA+3],
				(InputPacketBuffer[1+UP_DATA+4] << 8) | InputPacketBuffer[1+UP_DATA+5],
				(InputPacketBuffer[1+UP_DATA+6] << 8) | InputPacketBuffer[1+UP_DATA+7]);

		wxMessageBox(calMsg, _("Calibration"), wxICON_INFORMATION);
	}
}

void RobotMainboardFrame::OnCheckBox1Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	Slider1->Enable(CheckBox1->GetValue());

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = SET_SERVO_CONFIG;
	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Servo à désactiver
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Servo à activer

	if (!CheckBox1->GetValue())
		OutputPacketBuffer[1+UP_DATA+1]|= 1;
	else
		OutputPacketBuffer[1+UP_DATA+2]|= 1;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnCheckBox2Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	Slider2->Enable(CheckBox2->GetValue());

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = SET_SERVO_CONFIG;
	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Servo à désactiver
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Servo à activer

	if (!CheckBox2->GetValue())
		OutputPacketBuffer[1+UP_DATA+1]|= 2;
	else
		OutputPacketBuffer[1+UP_DATA+2]|= 2;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnCheckBox3Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	Slider3->Enable(CheckBox3->GetValue());

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = SET_SERVO_CONFIG;
	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Servo à désactiver
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Servo à activer

	if (!CheckBox3->GetValue())
		OutputPacketBuffer[1+UP_DATA+1]|= 4;
	else
		OutputPacketBuffer[1+UP_DATA+2]|= 4;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnCheckBox4Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	Slider4->Enable(CheckBox4->GetValue());

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = SET_SERVO_CONFIG;
	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Servo à désactiver
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Servo à activer

	if (!CheckBox4->GetValue())
		OutputPacketBuffer[1+UP_DATA+1]|= 8;
	else
		OutputPacketBuffer[1+UP_DATA+2]|= 8;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnCheckBox5Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	Slider5->Enable(CheckBox5->GetValue());

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = SET_SERVO_CONFIG;
	OutputPacketBuffer[1+UP_DATA+1] = 0;			// Servo à désactiver
	OutputPacketBuffer[1+UP_DATA+2] = 0;			// Servo à activer

	if (!CheckBox5->GetValue())
		OutputPacketBuffer[1+UP_DATA+1]|= 16;
	else
		OutputPacketBuffer[1+UP_DATA+2]|= 16;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnSlider1CmdScrollChanged(wxScrollEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_SET;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = SET_SERVO_STATE;
	OutputPacketBuffer[1+UP_DATA+1] = ((int) CheckBox1->GetValue())
										| ((int) CheckBox2->GetValue() << 1)
										| ((int) CheckBox3->GetValue() << 2)
										| ((int) CheckBox4->GetValue() << 3)
										| ((int) CheckBox5->GetValue() << 4);
	OutputPacketBuffer[1+UP_DATA+2] = (unsigned char) Slider1->GetValue();
	OutputPacketBuffer[1+UP_DATA+3] = (unsigned char) Slider2->GetValue();
	OutputPacketBuffer[1+UP_DATA+4] = (unsigned char) Slider3->GetValue();
	OutputPacketBuffer[1+UP_DATA+5] = (unsigned char) Slider4->GetValue();
	OutputPacketBuffer[1+UP_DATA+6] = (unsigned char) Slider5->GetValue();

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnButton21Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = SelectedDevice();
	if (id == USB_NONE) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_TEST;
	OutputPacketBuffer[1+UP_ERR] = 0;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnSlider6CmdScrollChanged(wxScrollEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	long val;
	int position, speed;

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) return;

	if (TextCtrl15->GetValue() != _("")) {
		OutputPacketBuffer[0] = 0;
		OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
		OutputPacketBuffer[1+UP_DSEQ] = 0;
		OutputPacketBuffer[1+UP_CMD] = CMD_AX12;
		OutputPacketBuffer[1+UP_ERR] = 0;

		position = (int) ((float) Slider6->GetValue() / 300.0 * 1023.0 + 0.5);

		if (CheckBox9->GetValue())
			speed = 0;
		else
			speed = (int) ((float) Slider7->GetValue() / 114.0 * 1023.0 + 0.5);

		OutputPacketBuffer[1+UP_DATA] = AX12_GOTO;

		if ((TextCtrl15->GetValue()).ToLong(&val, 0) && val >= 0 && val < 256)
			OutputPacketBuffer[1+UP_DATA+1] = (unsigned char) val;
		else {
			wxMessageBox(_("L'ID de l'AX12 n'est pas une ID valide !"), _("Erreur"), wxICON_ERROR);
			return;
		}

		OutputPacketBuffer[1+UP_DATA+2] = (unsigned char) (position >> 8);
		OutputPacketBuffer[1+UP_DATA+3] = (unsigned char) position;
		OutputPacketBuffer[1+UP_DATA+4] = (unsigned char) (speed >> 8);
		OutputPacketBuffer[1+UP_DATA+5] = (unsigned char) speed;

		WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
	}
	else
		wxMessageBox(_("Vous n'avez pas spécifié l'ID de l'AX12 à controler !"), _("Erreur"), wxICON_ERROR);
}

void RobotMainboardFrame::OnButton24Click(wxCommandEvent& event) {
	TextCtrl17->ChangeValue(TextCtrl16->GetValue());
	TextCtrl18->ChangeValue(StaticText98->GetLabel());
	CheckBox7->SetValue(CheckBox8->GetValue());
}

void RobotMainboardFrame::OnButton22Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	DWORD BytesRead = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	unsigned char InputPacketBuffer[65];	//Allocate a memory buffer equal to our endpoint size + 1
	bool Result;
	long val;
	wxString value;

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) return;

	if (TextCtrl15->GetValue() != _("")) {
		InputPacketBuffer[0] = 0;
		OutputPacketBuffer[0] = 0;
		OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
		OutputPacketBuffer[1+UP_DSEQ] = 0;
		OutputPacketBuffer[1+UP_CMD] = CMD_AX12;
		OutputPacketBuffer[1+UP_ERR] = 0;

		OutputPacketBuffer[1+UP_DATA] = AX12_READ;

		if ((TextCtrl15->GetValue()).ToLong(&val, 0) && val >= 0 && val < 256)
			OutputPacketBuffer[1+UP_DATA+1] = (unsigned char) val;
		else {
			wxMessageBox(_("L'ID de l'AX12 n'est pas une ID valide !"), _("Erreur"), wxICON_ERROR);
			return;
		}

		if ((TextCtrl16->GetValue()).ToLong(&val, 0) && val >= 0 && val < 256)
			OutputPacketBuffer[1+UP_DATA+2] = (unsigned char) val;
		else {
			wxMessageBox(_("L'adresse à lire n'est pas valide !"), _("Erreur"), wxICON_ERROR);
			return;
		}

		if (CheckBox8->GetValue() == true)
			OutputPacketBuffer[1+UP_DATA+3] = 1;
		else
			OutputPacketBuffer[1+UP_DATA+3] = 0;

		OutputPacketBuffer[1+UP_DATA+4] = 100;	// Timeout

		WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);

		for (int i = 0; i < USB_MAX_READ; i++) {
			Result = ReadFile(ReadHandle[id], &InputPacketBuffer, 65, &BytesRead, 0);

			if (!Result || (InputPacketBuffer[1+UP_CMD] == CMD_RESPOND && InputPacketBuffer[1+UP_HSEQ] == OutputPacketBuffer[1+UP_HSEQ]))
				break;
		}

		if (Result) {
			if (CheckBox8->GetValue() == true)
				value.Printf(_("0x%02x%02x"), InputPacketBuffer[1+UP_DATA], InputPacketBuffer[1+UP_DATA+1]);
			else
				value.Printf(_("0x%02x"), InputPacketBuffer[1+UP_DATA]);

			StaticText98->SetLabel(value);
		}
	}
	else
		wxMessageBox(_("Vous n'avez pas spécifié l'ID de l'AX12 à controler !"), _("Erreur"), wxICON_ERROR);
}

void RobotMainboardFrame::OnButton23Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1
	long val;

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) return;

	if (TextCtrl15->GetValue() != _("")) {
		OutputPacketBuffer[0] = 0;
		OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
		OutputPacketBuffer[1+UP_DSEQ] = 0;
		OutputPacketBuffer[1+UP_CMD] = CMD_AX12;
		OutputPacketBuffer[1+UP_ERR] = 0;

		OutputPacketBuffer[1+UP_DATA] = AX12_WRITE;

		if ((TextCtrl15->GetValue()).ToLong(&val, 0) && val >= 0 && val < 256)
			OutputPacketBuffer[1+UP_DATA+1] = (unsigned char) val;
		else {
			wxMessageBox(_("L'ID de l'AX12 n'est pas une ID valide !"), _("Erreur"), wxICON_ERROR);
			return;
		}

		if ((TextCtrl17->GetValue()).ToLong(&val, 0) && val >= 0 && val < 256)
			OutputPacketBuffer[1+UP_DATA+2] = (unsigned char) val;
		else {
			wxMessageBox(_("L'adresse à écrire n'est pas valide !"), _("Erreur"), wxICON_ERROR);
			return;
		}

		if (CheckBox7->GetValue() == true) {
			OutputPacketBuffer[1+UP_DATA+3] = 1;

			if ((TextCtrl18->GetValue()).ToLong(&val, 0) && val >= 0 && val < 65536) {
				OutputPacketBuffer[1+UP_DATA+4] = (unsigned char) (val >> 8);
				OutputPacketBuffer[1+UP_DATA+5] = (unsigned char) val;
			}
			else {
				wxMessageBox(_("L'adresse à écrire n'est pas valide !"), _("Erreur"), wxICON_ERROR);
				return;
			}
		}
		else {
			OutputPacketBuffer[1+UP_DATA+3] = 0;

			if ((TextCtrl18->GetValue()).ToLong(&val, 0) && val >= 0 && val < 256)
				OutputPacketBuffer[1+UP_DATA+4] = (unsigned char) val;
			else {
				wxMessageBox(_("L'adresse à écrire n'est pas valide !"), _("Erreur"), wxICON_ERROR);
				return;
			}
		}

		WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
	}
	else
		wxMessageBox(_("Vous n'avez pas spécifié l'ID de l'AX12 à controler !"), _("Erreur"), wxICON_ERROR);
}

void RobotMainboardFrame::OnCheckBox6Click(wxCommandEvent& event) {
	// TODO
	wxMessageBox(_("Fonction non implémentée pour le moment"), _("Erreur"), wxICON_ERROR);
}

void RobotMainboardFrame::OnCheckBox9Click(wxCommandEvent& event) {
	Slider7->Enable(!CheckBox9->GetValue());
}

void RobotMainboardFrame::OnCheckBox10Click(wxCommandEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_MOTOR;
	OutputPacketBuffer[1+UP_ERR] = 0;

	if (CheckBox10->GetValue()) {
		Slider8->Enable(true);
		OutputPacketBuffer[1+UP_DATA] = MOTOR_ENABLE;
	}
	else {
		Slider8->Enable(false);
		OutputPacketBuffer[1+UP_DATA] = MOTOR_DISABLE;
	}

	OutputPacketBuffer[1+UP_DATA+1] = 0;

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}

void RobotMainboardFrame::OnSlider8CmdScrollChanged(wxScrollEvent& event) {
	int id;
	DWORD BytesWritten = 0;
	unsigned char OutputPacketBuffer[65] = {0};	//Allocate a memory buffer equal to our endpoint size + 1

	id = FindDevice(USB_PID_ROBOT_INTERFACE);
	if (id == USB_NOT_FOUND) return;

	OutputPacketBuffer[0] = 0;
	OutputPacketBuffer[1+UP_HSEQ] = (UPHostSeq++);
	OutputPacketBuffer[1+UP_DSEQ] = 0;
	OutputPacketBuffer[1+UP_CMD] = CMD_MOTOR;
	OutputPacketBuffer[1+UP_ERR] = 0;

	OutputPacketBuffer[1+UP_DATA] = MOTOR_MOVE;
	OutputPacketBuffer[1+UP_DATA+1] = 0;
	OutputPacketBuffer[1+UP_DATA+2] = (Slider8->GetValue() > 0);											// Sens
	OutputPacketBuffer[1+UP_DATA+3] = (unsigned char) (255.0 / 100.0 * (float) abs(Slider8->GetValue()));	// Vitesse
	OutputPacketBuffer[1+UP_DATA+4] = 0;																	// Duration

	WriteFile(WriteHandle[id], &OutputPacketBuffer, 65, &BytesWritten, 0);
}
