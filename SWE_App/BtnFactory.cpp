#include "BtnFactory.h"

std::string BtnFactory::SetLabel(std::string label) {
	return label;
}
wxButton* BtnFactory::GetMultiplyButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 100, BtnFactory::SetLabel("x"), wxPoint(1, 70), wxSize(50, 50));
	return btn;
}

wxButton* BtnFactory::GetDivideButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 101, BtnFactory::SetLabel("/"), wxPoint(51, 70), wxSize(50, 50));
	return btn;
}

wxButton* BtnFactory::GetAddButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 102, BtnFactory::SetLabel("+"), wxPoint(101, 70), wxSize(50, 50));
	return btn;
}

wxButton* BtnFactory::GetSubtractButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 103, BtnFactory::SetLabel("-"), wxPoint(151, 70), wxSize(50, 50));
	return btn;
}

wxButton* BtnFactory::GetModButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 105, BtnFactory::SetLabel("mod"), wxPoint(201, 70), wxSize(50, 50));
	return btn;
}

wxButton* BtnFactory::GetEqualButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 104, BtnFactory::SetLabel("="), wxPoint(251, 70), wxSize(50, 50));
	return btn;
}

wxButton* BtnFactory::GetSinButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 106, BtnFactory::SetLabel("sin"), wxPoint(1, 120), wxSize(50, 50));
	return btn;
}

wxButton* BtnFactory::GetCosButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 107, BtnFactory::SetLabel("cos"), wxPoint(51, 120), wxSize(50, 50));
	return btn;
}

wxButton* BtnFactory::GetTanButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 108, BtnFactory::SetLabel("tan"), wxPoint(101, 120), wxSize(50, 50));
	return btn;
}

wxButton* BtnFactory::GetNegativeButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 109, BtnFactory::SetLabel("+/-"), wxPoint(151, 120), wxSize(50, 50));
	return btn;
}

wxButton* BtnFactory::GetClearButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 110, BtnFactory::SetLabel("C"), wxPoint(201, 120), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetBinaryButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 111, BtnFactory::SetLabel("Binary"), wxPoint(1, 370), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetHexButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 112, BtnFactory::SetLabel("Hexadecimal"), wxPoint(101, 370), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetDecButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 113, BtnFactory::SetLabel("Decimal"), wxPoint(201, 370), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetOneButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 1001, BtnFactory::SetLabel("1"), wxPoint(1, 170), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetTwoButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 1002, BtnFactory::SetLabel("2"), wxPoint(101, 170), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetThreeButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 1003, BtnFactory::SetLabel("3"), wxPoint(201, 170), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetFourButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 1004, BtnFactory::SetLabel("4"), wxPoint(1, 220), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetFiveButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 1005, BtnFactory::SetLabel("5"), wxPoint(101, 220), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetSixButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 1006, BtnFactory::SetLabel("6"), wxPoint(201, 220), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetSevenButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 1007, BtnFactory::SetLabel("7"), wxPoint(1, 270), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetEightButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 1008, BtnFactory::SetLabel("8"), wxPoint(101, 270), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetNineButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 1009, BtnFactory::SetLabel("9"), wxPoint(201, 270), wxSize(100, 50));
	return btn;
}

wxButton* BtnFactory::GetZeroButton(wxWindow* window) {
	wxButton* btn = new wxButton(window, 1000, BtnFactory::SetLabel("0"), wxPoint(1, 320), wxSize(300, 50));
	return btn;
}


