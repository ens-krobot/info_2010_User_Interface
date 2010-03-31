/***************************************************************
 * Name:      RobotMainboardMain.h
 * Purpose:   Defines Application Frame
 * Author:    Olivier BICHLER (olivier.bichler@ens-cachan.fr)
 * Created:   2008-08-08
 * Copyright: Olivier BICHLER ()
 * License:
 **************************************************************/

#ifndef ROBOTMAINBOARDMAIN_H
#define ROBOTMAINBOARDMAIN_H

//(*Headers(RobotMainboardFrame)
#include <wx/notebook.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/listbox.h>
#include <wx/tglbtn.h>
#include <wx/statbox.h>
#include <wx/slider.h>
#include <wx/panel.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/gauge.h>
#include <wx/statusbr.h>
//*)

#include <Windows.h>	// Definitions for various common and not so common types like DWORD, PCHAR, HANDLE, etc.
#include <setupapi.h>	// From Platform SDK. Definitions needed for the SetupDixxx() functions, which we use to
						// find our plug and play device.
#include "PcInterface.h"		// Fichier commun avec le firmware des PICs.

/**
 * @def MAX_USB_DEVICES
 * Nombre maximal de port USB gérés.
 *
 * @def USB_MAX_READ
 * Nombre maximal de read sur le port USB dans l'attente d'une réponse.
*/
#define MAX_USB_DEVICES				8
#define USB_MAX_READ				10

/**
 * @def USB_INVALID_PID
 * Indique que le Product ID n'est pas valide.
 * C'est le cas s'il ne s'agit pas d'un périphérique connu ou si aucun périphérique n'est connecté à cette emplacement.
 * @see RobotMainboardFrame::DevicePID().
 *
 * @def USB_NONE
 * Indique qu'aucun périphérique n'est sélectionné.
 * @see RobotMainboardFrame::SelectedDevice(), RobotMainboardFrame::HIDSelect().
 *
 * @def USB_NOT_FOUND
 * Indique qu'aucun périphérique n'a été trouvé.
 * @see RobotMainboardFrame::FindDevice().
*/
#define USB_INVALID_PID				-1
#define USB_NONE					-2
#define USB_NOT_FOUND				-3

// On déclare les classes ici car ils peuvent être utilisés dans la classe RobotMainboardFrame
class connectionThread;
class interceptionThread;

/**
 * Classe du programme.
 * Il s'agit de la classe associée à la fenêtre principale du programme, c'est dans cette classe que se trouve
 * l'essentiel du programme.
*/
class RobotMainboardFrame: public wxFrame {
	public:
		typedef interceptionThread* PinterceptionThread;

		wxCriticalSection DeviceData_critSect;
		connectionThread *connectThread;
		PinterceptionThread interceptThread[MAX_USB_DEVICES];
		HANDLE WriteHandle[MAX_USB_DEVICES];
		HANDLE ReadHandle[MAX_USB_DEVICES];
		HANDLE ReadHandleOvl[MAX_USB_DEVICES];
		BYTE UPHostSeq;

		RobotMainboardFrame(wxWindow* parent, wxWindowID id = -1);
		virtual ~RobotMainboardFrame();

		int DevicePID(int DeviceId);
		int SelectedDevice();
		int FindDevice(int DevicePID);
		void HIDConnect(int DeviceId, int DevicePID);
		void HIDDisconnect(int DeviceId);
		void HIDSelect(int DeviceId);
		void UpdatePICStatus();
		void UpdateRangefinder();
		void UpdateTOR();
		void UpdateIsens();
		void UpdatePosition();
		void UpdateAX12();
		void UpdateI2C();
		void RetrieveResetSource();
		void RetrieveFirmwareBuild();


	private:

		//(*Handlers(RobotMainboardFrame)
		void OnQuit(wxCommandEvent& event);
		void OnAbout(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnToggleButton_RA0Toggle(wxCommandEvent& event);
		void OnToggleButton_RA1Toggle(wxCommandEvent& event);
		void OnToggleButton_RA2Toggle(wxCommandEvent& event);
		void OnToggleButton_RA3Toggle(wxCommandEvent& event);
		void OnToggleButton_RA4Toggle(wxCommandEvent& event);
		void OnToggleButton_RA5Toggle(wxCommandEvent& event);
		void OnToggleButton_RA6Toggle(wxCommandEvent& event);
		void OnTextCtrl_RA0Text(wxCommandEvent& event);
		void OnTextCtrl_RA1Text(wxCommandEvent& event);
		void OnTextCtrl_RA2Text(wxCommandEvent& event);
		void OnTextCtrl_RA3Text(wxCommandEvent& event);
		void OnTextCtrl_RA4Text(wxCommandEvent& event);
		void OnTextCtrl_RA5Text(wxCommandEvent& event);
		void OnTextCtrl_RA6Text(wxCommandEvent& event);
		void OnToggleButton_RB0Toggle(wxCommandEvent& event);
		void OnToggleButton_RB1Toggle(wxCommandEvent& event);
		void OnToggleButton_RB2Toggle(wxCommandEvent& event);
		void OnToggleButton_RB3Toggle(wxCommandEvent& event);
		void OnToggleButton_RB4Toggle(wxCommandEvent& event);
		void OnToggleButton_RB5Toggle(wxCommandEvent& event);
		void OnToggleButton_RB6Toggle(wxCommandEvent& event);
		void OnToggleButton_RB7Toggle(wxCommandEvent& event);
		void OnTextCtrl_RB0Text(wxCommandEvent& event);
		void OnTextCtrl_RB1Text(wxCommandEvent& event);
		void OnTextCtrl_RB2Text(wxCommandEvent& event);
		void OnTextCtrl_RB3Text(wxCommandEvent& event);
		void OnTextCtrl_RB4Text(wxCommandEvent& event);
		void OnTextCtrl_RB5Text(wxCommandEvent& event);
		void OnTextCtrl_RB6Text(wxCommandEvent& event);
		void OnTextCtrl_RB7Text(wxCommandEvent& event);
		void OnToggleButton_RC0Toggle(wxCommandEvent& event);
		void OnToggleButton_RC1Toggle(wxCommandEvent& event);
		void OnToggleButton_RC2Toggle(wxCommandEvent& event);
		void OnToggleButton_RC4Toggle(wxCommandEvent& event);
		void OnToggleButton_RC5Toggle(wxCommandEvent& event);
		void OnToggleButton_RC6Toggle(wxCommandEvent& event);
		void OnToggleButton_RC7Toggle(wxCommandEvent& event);
		void OnTextCtrl_RC0Text(wxCommandEvent& event);
		void OnTextCtrl_RC1Text(wxCommandEvent& event);
		void OnTextCtrl_RC2Text(wxCommandEvent& event);
		void OnTextCtrl_RC4Text(wxCommandEvent& event);
		void OnTextCtrl_RC5Text(wxCommandEvent& event);
		void OnTextCtrl_RC6Text(wxCommandEvent& event);
		void OnTextCtrl_RC7Text(wxCommandEvent& event);
		void OnToggleButton_RD0Toggle(wxCommandEvent& event);
		void OnToggleButton_RD1Toggle(wxCommandEvent& event);
		void OnToggleButton_RD2Toggle(wxCommandEvent& event);
		void OnToggleButton_RD3Toggle(wxCommandEvent& event);
		void OnToggleButton_RD4Toggle(wxCommandEvent& event);
		void OnToggleButton_RD5Toggle(wxCommandEvent& event);
		void OnToggleButton_RD6Toggle(wxCommandEvent& event);
		void OnToggleButton_RD7Toggle(wxCommandEvent& event);
		void OnTextCtrl_RD0Text(wxCommandEvent& event);
		void OnTextCtrl_RD1Text(wxCommandEvent& event);
		void OnTextCtrl_RD2Text(wxCommandEvent& event);
		void OnTextCtrl_RD3Text(wxCommandEvent& event);
		void OnTextCtrl_RD4Text(wxCommandEvent& event);
		void OnTextCtrl_RD5Text(wxCommandEvent& event);
		void OnTextCtrl_RD6Text(wxCommandEvent& event);
		void OnTextCtrl_RD7Text(wxCommandEvent& event);
		void OnToggleButton_RE0Toggle(wxCommandEvent& event);
		void OnToggleButton_RE1Toggle(wxCommandEvent& event);
		void OnToggleButton_RE2Toggle(wxCommandEvent& event);
		void OnToggleButton_RE3Toggle(wxCommandEvent& event);
		void OnTextCtrl_RE0Text(wxCommandEvent& event);
		void OnTextCtrl_RE1Text(wxCommandEvent& event);
		void OnTextCtrl_RE2Text(wxCommandEvent& event);
		void OnTextCtrl_RE3Text(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnListBox1Select(wxCommandEvent& event);
		void OnButton4Click(wxCommandEvent& event);
		void OnButton5Click(wxCommandEvent& event);
		void OnButton6Click(wxCommandEvent& event);
		void OnButton7Click(wxCommandEvent& event);
		void OnButton9Click(wxCommandEvent& event);
		void OnButton8Click(wxCommandEvent& event);
		void OnButton10Click(wxCommandEvent& event);
		void OnButton11Click(wxCommandEvent& event);
		void OnButton11Click1(wxCommandEvent& event);
		void OnButton13Click(wxCommandEvent& event);
		void OnButton15Click(wxCommandEvent& event);
		void OnButton17Click(wxCommandEvent& event);
		void OnButton19Click(wxCommandEvent& event);
		void OnButton12Click(wxCommandEvent& event);
		void OnButton14Click(wxCommandEvent& event);
		void OnButton16Click(wxCommandEvent& event);
		void OnButton18Click(wxCommandEvent& event);
		void OnButton20Click(wxCommandEvent& event);
		void OnCheckBox1Click(wxCommandEvent& event);
		void OnCheckBox2Click(wxCommandEvent& event);
		void OnCheckBox3Click(wxCommandEvent& event);
		void OnCheckBox4Click(wxCommandEvent& event);
		void OnCheckBox5Click(wxCommandEvent& event);
		void OnSlider1CmdScrollChanged(wxScrollEvent& event);
		void OnButton21Click(wxCommandEvent& event);
		void OnTextCtrl15Text(wxCommandEvent& event);
		void OnSlider6CmdScrollChanged(wxScrollEvent& event);
		void OnSlider7CmdScrollChanged(wxScrollEvent& event);
		void OnButton24Click(wxCommandEvent& event);
		void OnButton22Click(wxCommandEvent& event);
		void OnButton23Click(wxCommandEvent& event);
		void OnCheckBox6Click(wxCommandEvent& event);
		void OnCheckBox8Click(wxCommandEvent& event);
		void OnSlider6CmdScroll(wxScrollEvent& event);
		void OnCheckBox9Click(wxCommandEvent& event);
		void OnCheckBox10Click(wxCommandEvent& event);
		void OnSlider8CmdScrollChanged(wxScrollEvent& event);
		//*)

		//(*Identifiers(RobotMainboardFrame)
		static const long ID_STATICTEXT51;
		static const long ID_LISTBOX1;
		static const long ID_STATICTEXT52;
		static const long ID_BUTTON4;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON21;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_PANEL1;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT4;
		static const long ID_TOGGLEBUTTON1;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT3;
		static const long ID_TOGGLEBUTTON2;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT5;
		static const long ID_TOGGLEBUTTON3;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT6;
		static const long ID_TOGGLEBUTTON4;
		static const long ID_TEXTCTRL6;
		static const long ID_STATICTEXT8;
		static const long ID_TOGGLEBUTTON5;
		static const long ID_TEXTCTRL7;
		static const long ID_STATICTEXT9;
		static const long ID_TOGGLEBUTTON6;
		static const long ID_TEXTCTRL8;
		static const long ID_STATICTEXT19;
		static const long ID_TOGGLEBUTTON7;
		static const long ID_TEXTCTRL17;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT11;
		static const long ID_TOGGLEBUTTON8;
		static const long ID_TEXTCTRL9;
		static const long ID_STATICTEXT12;
		static const long ID_TOGGLEBUTTON9;
		static const long ID_TEXTCTRL10;
		static const long ID_STATICTEXT13;
		static const long ID_TOGGLEBUTTON10;
		static const long ID_TEXTCTRL11;
		static const long ID_STATICTEXT14;
		static const long ID_TOGGLEBUTTON11;
		static const long ID_TEXTCTRL12;
		static const long ID_STATICTEXT15;
		static const long ID_TOGGLEBUTTON12;
		static const long ID_TEXTCTRL13;
		static const long ID_STATICTEXT16;
		static const long ID_TOGGLEBUTTON13;
		static const long ID_TEXTCTRL14;
		static const long ID_STATICTEXT17;
		static const long ID_TOGGLEBUTTON14;
		static const long ID_TEXTCTRL15;
		static const long ID_STATICTEXT18;
		static const long ID_TOGGLEBUTTON15;
		static const long ID_TEXTCTRL16;
		static const long ID_TEXTCTRL38;
		static const long ID_STATICTEXT43;
		static const long ID_TEXTCTRL37;
		static const long ID_STATICTEXT42;
		static const long ID_STATICTEXT20;
		static const long ID_STATICTEXT21;
		static const long ID_TOGGLEBUTTON16;
		static const long ID_TEXTCTRL18;
		static const long ID_STATICTEXT22;
		static const long ID_TOGGLEBUTTON17;
		static const long ID_TEXTCTRL19;
		static const long ID_STATICTEXT23;
		static const long ID_TOGGLEBUTTON18;
		static const long ID_TEXTCTRL20;
		static const long ID_STATICTEXT24;
		static const long ID_TOGGLEBUTTON19;
		static const long ID_TEXTCTRL21;
		static const long ID_STATICTEXT25;
		static const long ID_TOGGLEBUTTON20;
		static const long ID_TEXTCTRL22;
		static const long ID_STATICTEXT26;
		static const long ID_TOGGLEBUTTON21;
		static const long ID_TEXTCTRL23;
		static const long ID_STATICTEXT27;
		static const long ID_TOGGLEBUTTON22;
		static const long ID_TEXTCTRL24;
		static const long ID_TEXTCTRL39;
		static const long ID_STATICTEXT44;
		static const long ID_TEXTCTRL40;
		static const long ID_STATICTEXT45;
		static const long ID_STATICTEXT28;
		static const long ID_STATICTEXT29;
		static const long ID_TOGGLEBUTTON23;
		static const long ID_TEXTCTRL25;
		static const long ID_STATICTEXT30;
		static const long ID_TOGGLEBUTTON24;
		static const long ID_TEXTCTRL26;
		static const long ID_STATICTEXT31;
		static const long ID_TOGGLEBUTTON25;
		static const long ID_TEXTCTRL27;
		static const long ID_STATICTEXT32;
		static const long ID_TOGGLEBUTTON26;
		static const long ID_TEXTCTRL28;
		static const long ID_STATICTEXT33;
		static const long ID_TOGGLEBUTTON27;
		static const long ID_TEXTCTRL29;
		static const long ID_STATICTEXT34;
		static const long ID_TOGGLEBUTTON28;
		static const long ID_TEXTCTRL30;
		static const long ID_STATICTEXT35;
		static const long ID_TOGGLEBUTTON29;
		static const long ID_TEXTCTRL31;
		static const long ID_STATICTEXT36;
		static const long ID_TOGGLEBUTTON30;
		static const long ID_TEXTCTRL32;
		static const long ID_STATICTEXT37;
		static const long ID_STATICTEXT38;
		static const long ID_TOGGLEBUTTON31;
		static const long ID_TEXTCTRL33;
		static const long ID_STATICTEXT39;
		static const long ID_TOGGLEBUTTON32;
		static const long ID_TEXTCTRL34;
		static const long ID_STATICTEXT40;
		static const long ID_TOGGLEBUTTON33;
		static const long ID_TEXTCTRL35;
		static const long ID_STATICTEXT41;
		static const long ID_TOGGLEBUTTON34;
		static const long ID_TEXTCTRL36;
		static const long ID_TEXTCTRL41;
		static const long ID_STATICTEXT46;
		static const long ID_PANEL2;
		static const long ID_STATICTEXT47;
		static const long ID_STATICTEXT49;
		static const long ID_STATICTEXT48;
		static const long ID_STATICTEXT50;
		static const long ID_GAUGE1;
		static const long ID_BUTTON5;
		static const long ID_BUTTON8;
		static const long ID_STATICTEXT53;
		static const long ID_STATICTEXT54;
		static const long ID_STATICTEXT55;
		static const long ID_STATICTEXT56;
		static const long ID_GAUGE2;
		static const long ID_BUTTON6;
		static const long ID_BUTTON9;
		static const long ID_STATICTEXT57;
		static const long ID_STATICTEXT58;
		static const long ID_STATICTEXT59;
		static const long ID_STATICTEXT60;
		static const long ID_GAUGE3;
		static const long ID_BUTTON7;
		static const long ID_BUTTON10;
		static const long ID_STATICTEXT73;
		static const long ID_STATICTEXT78;
		static const long ID_STATICTEXT83;
		static const long ID_STATICTEXT88;
		static const long ID_GAUGE4;
		static const long ID_BUTTON11;
		static const long ID_BUTTON12;
		static const long ID_STATICTEXT74;
		static const long ID_STATICTEXT79;
		static const long ID_STATICTEXT84;
		static const long ID_STATICTEXT89;
		static const long ID_GAUGE5;
		static const long ID_BUTTON13;
		static const long ID_BUTTON14;
		static const long ID_STATICTEXT75;
		static const long ID_STATICTEXT80;
		static const long ID_STATICTEXT85;
		static const long ID_STATICTEXT90;
		static const long ID_GAUGE6;
		static const long ID_BUTTON15;
		static const long ID_BUTTON16;
		static const long ID_STATICTEXT76;
		static const long ID_STATICTEXT81;
		static const long ID_STATICTEXT86;
		static const long ID_STATICTEXT91;
		static const long ID_GAUGE7;
		static const long ID_BUTTON17;
		static const long ID_BUTTON18;
		static const long ID_STATICTEXT77;
		static const long ID_STATICTEXT82;
		static const long ID_STATICTEXT87;
		static const long ID_STATICTEXT92;
		static const long ID_GAUGE8;
		static const long ID_BUTTON19;
		static const long ID_BUTTON20;
		static const long ID_PANEL3;
		static const long ID_BITMAPBUTTON2;
		static const long ID_BITMAPBUTTON1;
		static const long ID_TEXTCTRL47;
		static const long ID_TEXTCTRL46;
		static const long ID_TEXTCTRL48;
		static const long ID_TEXTCTRL49;
		static const long ID_TEXTCTRL50;
		static const long ID_TEXTCTRL51;
		static const long ID_TEXTCTRL52;
		static const long ID_TEXTCTRL53;
		static const long ID_STATICTEXT65;
		static const long ID_STATICTEXT66;
		static const long ID_STATICTEXT67;
		static const long ID_STATICTEXT68;
		static const long ID_STATICTEXT69;
		static const long ID_STATICTEXT70;
		static const long ID_STATICTEXT71;
		static const long ID_STATICTEXT72;
		static const long ID_STATICTEXT93;
		static const long ID_STATICTEXT94;
		static const long ID_TEXTCTRL54;
		static const long ID_TEXTCTRL55;
		static const long ID_TEXTCTRL56;
		static const long ID_TEXTCTRL57;
		static const long ID_TEXTCTRL58;
		static const long ID_TEXTCTRL59;
		static const long ID_TEXTCTRL60;
		static const long ID_TEXTCTRL61;
		static const long ID_STATICTEXT95;
		static const long ID_STATICTEXT96;
		static const long ID_STATICTEXT97;
		static const long ID_STATICTEXT98;
		static const long ID_STATICTEXT99;
		static const long ID_STATICTEXT100;
		static const long ID_STATICTEXT101;
		static const long ID_STATICTEXT102;
		static const long ID_PANEL4;
		static const long ID_BUTTON3;
		static const long ID_TEXTCTRL42;
		static const long ID_TEXTCTRL43;
		static const long ID_STATICTEXT61;
		static const long ID_STATICTEXT62;
		static const long ID_STATICTEXT63;
		static const long ID_STATICTEXT64;
		static const long ID_TEXTCTRL44;
		static const long ID_TEXTCTRL45;
		static const long ID_PANEL5;
		static const long ID_STATICTEXT107;
		static const long ID_STATICTEXT108;
		static const long ID_STATICTEXT109;
		static const long ID_STATICTEXT110;
		static const long ID_STATICTEXT111;
		static const long ID_CHECKBOX1;
		static const long ID_CHECKBOX2;
		static const long ID_CHECKBOX3;
		static const long ID_CHECKBOX4;
		static const long ID_CHECKBOX5;
		static const long ID_SLIDER1;
		static const long ID_SLIDER2;
		static const long ID_SLIDER3;
		static const long ID_SLIDER4;
		static const long ID_SLIDER5;
		static const long ID_PANEL7;
		static const long ID_STATICBOX1;
		static const long ID_STATICTEXT106;
		static const long ID_TEXTCTRL65;
		static const long ID_STATICTEXT112;
		static const long ID_STATICTEXT113;
		static const long ID_STATICTEXT114;
		static const long ID_STATICTEXT115;
		static const long ID_STATICTEXT116;
		static const long ID_STATICTEXT117;
		static const long ID_STATICTEXT118;
		static const long ID_STATICTEXT119;
		static const long ID_STATICTEXT120;
		static const long ID_TEXTCTRL66;
		static const long ID_STATICTEXT121;
		static const long ID_STATICTEXT122;
		static const long ID_STATICTEXT123;
		static const long ID_STATICTEXT125;
		static const long ID_STATICTEXT126;
		static const long ID_STATICTEXT128;
		static const long ID_STATICTEXT129;
		static const long ID_STATICTEXT130;
		static const long ID_STATICTEXT131;
		static const long ID_STATICTEXT132;
		static const long ID_BUTTON22;
		static const long ID_STATICBOX2;
		static const long ID_STATICTEXT133;
		static const long ID_TEXTCTRL67;
		static const long ID_CHECKBOX7;
		static const long ID_STATICTEXT134;
		static const long ID_TEXTCTRL68;
		static const long ID_BUTTON23;
		static const long ID_SLIDER6;
		static const long ID_SLIDER7;
		static const long ID_CHECKBOX6;
		static const long ID_BUTTON24;
		static const long ID_CHECKBOX8;
		static const long ID_CHECKBOX9;
		static const long ID_PANEL8;
		static const long ID_STATICBOX3;
		static const long ID_STATICTEXT103;
		static const long ID_STATICTEXT104;
		static const long ID_STATICTEXT105;
		static const long ID_TEXTCTRL62;
		static const long ID_TEXTCTRL63;
		static const long ID_TEXTCTRL64;
		static const long ID_PANEL6;
		static const long ID_STATICTEXT124;
		static const long ID_CHECKBOX10;
		static const long ID_SLIDER8;
		static const long ID_PANEL9;
		static const long ID_NOTEBOOK1;
		static const long idMenuQuit;
		static const long idMenuAbout;
		static const long ID_STATUSBAR1;
		//*)

		//(*Declarations(RobotMainboardFrame)
		wxStaticText* StaticText_RC2;
		wxTextCtrl* TextCtrl_TOR8;
		wxStaticText* StaticText79;
		wxButton* Button22;
		wxStaticText* StaticText97;
		wxPanel* Panel8;
		wxTextCtrl* TextCtrl_RD1;
		wxTextCtrl* TextCtrl_RA4;
		wxTextCtrl* TextCtrl_RE3;
		wxStaticText* StaticText_RC4;
		wxTextCtrl* TextCtrl_TOR6;
		wxStaticText* StaticText_RB3;
		wxButton* Button14;
		wxStaticText* StaticText75;
		wxCheckBox* CheckBox7;
		wxToggleButton* ToggleButton_RA5;
		wxToggleButton* ToggleButton_RD1;
		wxToggleButton* ToggleButton_RA1;
		wxStaticText* StaticText68;
		wxToggleButton* ToggleButton_RC0;
		wxButton* Button11;
		wxStaticText* StaticText_RD7;
		wxToggleButton* ToggleButton_RC5;
		wxStaticText* StaticText100;
		wxStaticText* StaticText71;
		wxStaticText* StaticText32;
		wxPanel* Panel5;
		wxStaticText* StaticText_RD2;
		wxStaticText* StaticText_RA0;
		wxStaticText* StaticText36;
		wxTextCtrl* TextCtrl_RD7;
		wxPanel* Panel2;
		wxTextCtrl* TextCtrl_RC7;
		wxStaticBox* StaticBox2;
		wxStaticText* StaticText40;
		wxTextCtrl* TextCtrl_RD2;
		wxStaticText* StaticText27;
		wxToggleButton* ToggleButton_RD4;
		wxTextCtrl* TextCtrl_RC2;
		wxStaticText* StaticText89;
		wxTextCtrl* TextCtrl_RD5;
		wxToggleButton* ToggleButton_RC2;
		wxToggleButton* ToggleButton_RE3;
		wxTextCtrl* TextCtrl_TOR16;
		wxStaticText* StaticText41;
		wxTextCtrl* TextCtrl12;
		wxTextCtrl* TextCtrl15;
		wxPanel* Panel1;
		wxToggleButton* ToggleButton_RD5;
		wxStaticText* StaticText_RA1;
		wxSlider* Slider4;
		wxStaticText* StaticText85;
		wxTextCtrl* TextCtrl_RD3;
		wxTextCtrl* TextCtrl8;
		wxStaticText* StaticText50;
		wxStaticText* StaticText_RA3;
		wxCheckBox* CheckBox8;
		wxStaticText* StaticText46;
		wxButton* Button2;
		wxStaticText* StaticText_RE3;
		wxTextCtrl* TextCtrl_RA3;
		wxStaticText* StaticText_RE0;
		wxStaticText* StaticText72;
		wxSlider* Slider8;
		wxStaticText* StaticText69;
		wxStaticText* StaticText_RA6;
		wxStaticText* StaticText64;
		wxStaticText* StaticText42;
		wxButton* Button19;
		wxStaticText* StaticText92;
		wxStaticText* StaticText73;
		wxStaticText* StaticText48;
		wxCheckBox* CheckBox10;
		wxStaticText* StaticText5;
		wxStaticText* StaticText87;
		wxToggleButton* ToggleButton_RE1;
		wxTextCtrl* TextCtrl_TOR9;
		wxStaticText* StaticText_RA4;
		wxTextCtrl* TextCtrl_TOR1;
		wxStaticText* StaticText25;
		wxStaticText* StaticText6;
		wxSlider* Slider6;
		wxStaticText* StaticText52;
		wxStaticText* StaticText_RB4;
		wxTextCtrl* TextCtrl3;
		wxStaticText* StaticText84;
		wxNotebook* Notebook1;
		wxTextCtrl* TextCtrl_RC0;
		wxStaticText* StaticText19;
		wxGauge* Gauge8;
		wxTextCtrl* TextCtrl_RC5;
		wxTextCtrl* TextCtrl_RB7;
		wxCheckBox* CheckBox5;
		wxStaticText* StaticText39;
		wxStaticText* StaticText_RD1;
		wxCheckBox* CheckBox9;
		wxStaticText* StaticText10;
		wxGauge* Gauge5;
		wxSlider* Slider1;
		wxStaticText* StaticText35;
		wxSlider* Slider2;
		wxTextCtrl* TextCtrl11;
		wxTextCtrl* TextCtrl_TOR4;
		wxToggleButton* ToggleButton_RD0;
		wxToggleButton* ToggleButton_RB1;
		wxToggleButton* ToggleButton_RC4;
		wxStaticText* StaticText_RB2;
		wxToggleButton* ToggleButton_RB7;
		wxToggleButton* ToggleButton_RB3;
		wxGauge* Gauge2;
		wxToggleButton* ToggleButton_RE2;
		wxSlider* Slider3;
		wxStaticText* StaticText78;
		wxTextCtrl* TextCtrl_RC6;
		wxStaticText* StaticText33;
		wxStaticText* StaticText23;
		wxButton* Button16;
		wxStaticText* StaticText12;
		wxStaticText* StaticText22;
		wxStaticText* StaticText76;
		wxStaticText* StaticText56;
		wxListBox* ListBox1;
		wxStaticText* StaticText_RB7;
		wxPanel* Panel7;
		wxSlider* Slider5;
		wxStaticText* StaticText90;
		wxGauge* Gauge1;
		wxTextCtrl* TextCtrl13;
		wxButton* Button23;
		wxButton* Button21;
		wxTextCtrl* TextCtrl6;
		wxTextCtrl* TextCtrl_TOR7;
		wxStaticText* StaticText49;
		wxTextCtrl* TextCtrl_TOR14;
		wxStaticText* StaticText55;
		wxStaticText* StaticText_RC6;
		wxToggleButton* ToggleButton_RB6;
		wxStaticText* StaticText99;
		wxStaticText* StaticText_RB0;
		wxStaticBox* StaticBox1;
		wxStaticText* StaticText61;
		wxTextCtrl* TextCtrl_TOR12;
		wxStaticText* StaticText7;
		wxTextCtrl* TextCtrl17;
		wxToggleButton* ToggleButton_RD7;
		wxStaticText* StaticText16;
		wxTextCtrl* TextCtrl_TOR5;
		wxToggleButton* ToggleButton_RB2;
		wxStaticText* StaticText_RD4;
		wxStaticText* StaticText57;
		wxStaticText* StaticText_RB6;
		wxStaticText* StaticText60;
		wxStaticText* StaticText98;
		wxStaticText* StaticText47;
		wxButton* Button20;
		wxStaticText* StaticText_RE1;
		wxTextCtrl* TextCtrl_RB2;
		wxStaticText* StaticText43;
		wxStaticText* StaticText24;
		wxStaticText* StaticText65;
		wxStaticText* StaticText94;
		wxStaticText* StaticText82;
		wxTextCtrl* TextCtrl_TOR13;
		wxToggleButton* ToggleButton_RE0;
		wxTextCtrl* TextCtrl_RE1;
		wxStaticText* StaticText14;
		wxStaticText* StaticText88;
		wxStaticText* StaticText_RA2;
		wxTextCtrl* TextCtrl_RB3;
		wxStaticText* StaticText_RC1;
		wxStaticText* StaticText34;
		wxStaticText* StaticText_RC0;
		wxStatusBar* StatusBar1;
		wxStaticText* StaticText70;
		wxPanel* Panel3;
		wxStaticText* StaticText18;
		wxStaticText* StaticText_RD6;
		wxStaticText* StaticText86;
		wxTextCtrl* TextCtrl_RB5;
		wxTextCtrl* TextCtrl7;
		wxToggleButton* ToggleButton_RA4;
		wxStaticText* StaticText37;
		wxCheckBox* CheckBox4;
		wxTextCtrl* TextCtrl_RB0;
		wxStaticText* StaticText13;
		wxCheckBox* CheckBox1;
		wxStaticText* StaticText51;
		wxStaticText* StaticText_RB5;
		wxTextCtrl* TextCtrl9;
		wxTextCtrl* TextCtrl_TOR10;
		wxButton* Button15;
		wxStaticText* StaticText53;
		wxToggleButton* ToggleButton_RD6;
		wxToggleButton* ToggleButton_RB5;
		wxTextCtrl* TextCtrl_TOR15;
		wxToggleButton* ToggleButton_RC6;
		wxTextCtrl* TextCtrl_TOR2;
		wxButton* Button17;
		wxStaticText* StaticText54;
		wxStaticText* StaticText20;
		wxTextCtrl* TextCtrl_RD4;
		wxButton* Button6;
		wxToggleButton* ToggleButton_RB0;
		wxTextCtrl* TextCtrl_RA6;
		wxTextCtrl* TextCtrl10;
		wxStaticText* StaticText31;
		wxToggleButton* ToggleButton_RC7;
		wxGauge* Gauge6;
		wxStaticText* StaticText74;
		wxToggleButton* ToggleButton_RC1;
		wxTextCtrl* TextCtrl14;
		wxStaticText* StaticText96;
		wxBitmapButton* BitmapButton1;
		wxToggleButton* ToggleButton_RD3;
		wxTextCtrl* TextCtrl_RD6;
		wxButton* Button5;
		wxButton* Button12;
		wxStaticText* StaticText67;
		wxStaticText* StaticText_RC7;
		wxTextCtrl* TextCtrl_RA5;
		wxToggleButton* ToggleButton_RA3;
		wxPanel* Panel4;
		wxTextCtrl* TextCtrl_RB6;
		wxGauge* Gauge3;
		wxStaticText* StaticText45;
		wxStaticText* StaticText62;
		wxStaticText* StaticText21;
		wxStaticText* StaticText4;
		wxStaticText* StaticText80;
		wxTextCtrl* TextCtrl2;
		wxStaticText* StaticText77;
		wxButton* Button9;
		wxPanel* Panel6;
		wxStaticText* StaticText59;
		wxStaticText* StaticText95;
		wxTextCtrl* TextCtrl_RE0;
		wxTextCtrl* TextCtrl_RC4;
		wxButton* Button3;
		wxStaticText* StaticText_RD5;
		wxStaticText* StaticText66;
		wxButton* Button24;
		wxGauge* Gauge7;
		wxBitmapButton* BitmapButton2;
		wxStaticBox* StaticBox3;
		wxStaticText* StaticText26;
		wxTextCtrl* TextCtrl_RA0;
		wxStaticText* StaticText15;
		wxButton* Button10;
		wxStaticText* StaticText_RE2;
		wxStaticText* StaticText8;
		wxStaticText* StaticText_RD3;
		wxButton* Button18;
		wxStaticText* StaticText29;
		wxStaticText* StaticText30;
		wxStaticText* StaticText28;
		wxStaticText* StaticText58;
		wxToggleButton* ToggleButton_RA6;
		wxCheckBox* CheckBox2;
		wxButton* Button1;
		wxButton* Button13;
		wxStaticText* StaticText63;
		wxTextCtrl* TextCtrl4;
		wxGauge* Gauge4;
		wxSlider* Slider7;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText_RD0;
		wxTextCtrl* TextCtrl_RA2;
		wxStaticText* StaticText_RB1;
		wxButton* Button8;
		wxTextCtrl* TextCtrl_RB4;
		wxStaticText* StaticText83;
		wxStaticText* StaticText38;
		wxStaticText* StaticText91;
		wxStaticText* StaticText81;
		wxStaticText* StaticText17;
		wxStaticText* StaticText_RC5;
		wxStaticText* StaticText_RA5;
		wxStaticText* StaticText11;
		wxTextCtrl* TextCtrl_TOR3;
		wxCheckBox* CheckBox3;
		wxTextCtrl* TextCtrl16;
		wxToggleButton* ToggleButton_RA0;
		wxTextCtrl* TextCtrl18;
		wxTextCtrl* TextCtrl1;
		wxToggleButton* ToggleButton_RA2;
		wxToggleButton* ToggleButton_RB4;
		wxTextCtrl* TextCtrl5;
		wxTextCtrl* TextCtrl_RC1;
		wxButton* Button4;
		wxTextCtrl* TextCtrl_TOR11;
		wxTextCtrl* TextCtrl_RE2;
		wxPanel* Panel9;
		wxButton* Button7;
		wxStaticText* StaticText9;
		wxToggleButton* ToggleButton_RD2;
		wxTextCtrl* TextCtrl_RB1;
		wxTextCtrl* TextCtrl_RA1;
		wxTextCtrl* TextCtrl_RD0;
		wxCheckBox* CheckBox6;
		wxStaticText* StaticText44;
		wxStaticText* StaticText3;
		//*)

		int _DevicePID[MAX_USB_DEVICES];
		int _SelectedDevice;

		DECLARE_EVENT_TABLE()
};

/**
 * Ce thread gère la connection des périphériques USB qui nous intéressent et maintient à jour les informations les
 * concernant.
*/
class connectionThread: public wxThread {
	private:

	public :
		RobotMainboardFrame *MainFrame;

		connectionThread(RobotMainboardFrame *frame) : wxThread() {
			MainFrame = frame;
		}

		void *Entry();
};

/**
 * Ce thread lit en permanence ce qu'envoie la carte à laquelle il est rattaché.
 * Cela permet notamment d'intercepter des messages envoyés par le PIC. Le PIC peut également envoyer des commandes au
 * programme, qui peuvent faire office d'interruptions (lors de la détection d'un obstacle par exemple).
*/
class interceptionThread: public wxThread {
	private:
		int _DeviceId;

	public :
		RobotMainboardFrame *MainFrame;

		interceptionThread(RobotMainboardFrame *frame, int DeviceId) : wxThread() {
			MainFrame = frame;
			_DeviceId = DeviceId;
		}

		void *Entry();
};

#endif // ROBOTMAINBOARDMAIN_H
