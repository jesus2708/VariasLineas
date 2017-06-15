#pragma once  //______________________________________ VariasLineas.h  
#include "Resource.h"
class VariasLineas: public Win::Dialog
{
public:
	VariasLineas()
	{
	}
	~VariasLineas()
	{
	}
	void Line(int Pregunta);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbx1;
	Win::Label lb1;
	Win::Textbox tbxNumero;
	Win::Button btClick;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(10.92729);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(8.99583);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"VariasLineas";
		tbx1.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_LEFT | ES_WINNORMALCASE, 1.29646, 1.34938, 6.03250, 7.46125, hWnd, 1000);
		lb1.CreateX(NULL, L"conteo", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.39688, 0.31750, 2.80458, 0.60854, hWnd, 1001);
		tbxNumero.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 4.07458, 0.29104, 2.64583, 0.60854, hWnd, 1002);
		btClick.CreateX(NULL, L"Click", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 7.93750, 0.34396, 2.80458, 0.68792, hWnd, 1003);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbx1.Font = fontArial009A;
		lb1.Font = fontArial009A;
		tbxNumero.Font = fontArial009A;
		btClick.Font = fontArial009A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) {btClick_Click(e); return true;}
		return false;
	}
};
