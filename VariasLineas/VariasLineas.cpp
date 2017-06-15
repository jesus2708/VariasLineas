#include "stdafx.h"  //________________________________________ VariasLineas.cpp
#include "VariasLineas.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	VariasLineas app;
	return app.BeginDialog(IDI_VariasLineas, hInstance);
}

void VariasLineas::Window_Open(Win::Event& e)
{
	
}
void VariasLineas::Line(int Pregunta)
{
	for (int j = 0; j < Pregunta; j++)
		{
			for (int i = 0; i < Pregunta; i++)
			tbx1.Text += L"*";
			tbx1.Text += L"\r\n";
		}
}

void VariasLineas::btClick_Click(Win::Event& e)
{
	int r = tbxNumero.IntValue;
	Line(r);
}

