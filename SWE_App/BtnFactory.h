#pragma once
#include "wx/wx.h"

class BtnFactory
{

public:
	wxButton* GetMultiplyButton(wxWindow* window);
	wxButton* GetDivideButton(wxWindow* window);
	wxButton* GetAddButton(wxWindow* window);
	wxButton* GetSubtractButton(wxWindow* window);
	wxButton* GetModButton(wxWindow* window);
	wxButton* GetEqualButton(wxWindow* window);
	wxButton* GetSinButton(wxWindow* window);
	wxButton* GetCosButton(wxWindow* window);
	wxButton* GetTanButton(wxWindow* window);
	wxButton* GetNegativeButton(wxWindow* window);
	wxButton* GetClearButton(wxWindow* window);
	wxButton* GetBinaryButton(wxWindow* window);
	wxButton* GetHexButton(wxWindow* window);
	wxButton* GetDecButton(wxWindow* window);
	wxButton* GetOneButton(wxWindow* window);
	wxButton* GetTwoButton(wxWindow* window);
	wxButton* GetThreeButton(wxWindow* window);
	wxButton* GetFourButton(wxWindow* window);
	wxButton* GetFiveButton(wxWindow* window);
	wxButton* GetSixButton(wxWindow* window);
	wxButton* GetSevenButton(wxWindow* window);
	wxButton* GetEightButton(wxWindow* window);
	wxButton* GetNineButton(wxWindow* window);
	wxButton* GetZeroButton(wxWindow* window);

	static std::string SetLabel(std::string label);

};

