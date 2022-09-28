#include "MainWindow.h"

wxBEGIN_EVENT_TABLE(MainWindow, wxFrame)

EVT_BUTTON(wxID_ANY, OnButtonClick)

wxEND_EVENT_TABLE()
MainWindow::MainWindow() : wxFrame(nullptr, wxID_ANY, "Computo's Calculator", wxPoint(500, 500), wxSize(320, 462), wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX)) {

	_multiply = factory->GetMultiplyButton(this);
	_divide = factory->GetDivideButton(this);
	_add = factory->GetAddButton(this);
	_subtract = factory->GetSubtractButton(this);
	_mod = factory->GetModButton(this);
	_equal = factory->GetEqualButton(this);
	_sin = factory->GetSinButton(this);
	_cos = factory->GetCosButton(this);
	_tan = factory->GetTanButton(this);
	_negative = factory->GetNegativeButton(this);
	_clear = factory->GetClearButton(this);
	_binary = factory->GetBinaryButton(this);
	_hex = factory->GetHexButton(this);
	_decimal = factory->GetDecButton(this);
	_one = factory->GetOneButton(this);
	_two = factory->GetTwoButton(this);
	_three = factory->GetThreeButton(this);
	_four = factory->GetFourButton(this);
	_five = factory->GetFiveButton(this);
	_six = factory->GetSixButton(this);
	_seven = factory->GetSevenButton(this);
	_eight = factory->GetEightButton(this);
	_nine = factory->GetNineButton(this);
	_zero = factory->GetZeroButton(this);


	_textBox = new wxTextCtrl(this, 114, "", wxPoint(1, 1), wxSize(302, 69));
	wxFont font(14, wxFONTFAMILY_DECORATIVE, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_HEAVY, false);
	_textBox->SetFont(font);
	_textBox->Disable();

}

MainWindow::~MainWindow() {
	delete processor; 
}

void MainWindow::OnButtonClick(wxCommandEvent& action) {


	int id = action.GetId();
	_textBox->Clear();

	switch (id)
	{
	case 100:
		_textBox->AppendText(processor->Multiply());
		break;

	case 101:
		_textBox->AppendText(processor->Divide());
		break;

	case 102:
		_textBox->AppendText(processor->Add());
		break;

	case 103:
		_textBox->AppendText(processor->Subtract());
		break;

	case 104:
		_textBox->AppendText(processor->Equal());
		break;

	case 105:
		_textBox->AppendText(processor->Mod());
		break;

	case 106:
		_textBox->AppendText(processor->Sin());
		break;

	case 107:
		_textBox->AppendText(processor->Cos());
		break;

	case 108:
		_textBox->AppendText(processor->Tan());
		break;

	case 109:
		_textBox->AppendText(processor->Negative());
		break;

	case 110:
		processor->Clear();
		break;

	case 111:
		_textBox->AppendText(processor->GetBinary());
		break;

	case 112:
		_textBox->AppendText(processor->GetHexadecimal());
		break;

	case 113:
		_textBox->AppendText(processor->GetDecimal());
		break;

	case 1000:
		_textBox->AppendText(processor->Zero());
		break;

	case 1001:
		_textBox->AppendText(processor->One());
		break;

	case 1002:
		_textBox->AppendText(processor->Two());
		break;

	case 1003:
		_textBox->AppendText(processor->Three());
		break;

	case 1004:
		_textBox->AppendText(processor->Four());
		break;

	case 1005:
		_textBox->AppendText(processor->Five());
		break;

	case 1006:
		_textBox->AppendText(processor->Six());
		break;

	case 1007:
		_textBox->AppendText(processor->Seven());
		break;

	case 1008:
		_textBox->AppendText(processor->Eight());
		break;

	case 1009:
		_textBox->AppendText(processor->Nine());
		break;

	default:
		break;
	}
}



