#pragma once
#include "BtnFactory.h"
#include "Processor.h"

class MainWindow : public wxFrame
{
public:
	MainWindow();
	~MainWindow();
	wxDECLARE_EVENT_TABLE();
	void OnButtonClick(wxCommandEvent& action);
	BtnFactory* factory = nullptr;
	Processor* processor = Processor::GetInstance();


private:
	wxButton* _multiply = nullptr;
	wxButton* _divide = nullptr;
	wxButton* _add = nullptr;
	wxButton* _subtract = nullptr;
	wxButton* _equal = nullptr;
	wxButton* _mod = nullptr;
	wxButton* _sin = nullptr;
	wxButton* _cos = nullptr;
	wxButton* _tan = nullptr;
	wxButton* _negative = nullptr;
	wxButton* _clear = nullptr;
	wxButton* _binary = nullptr;
	wxButton* _hex = nullptr;
	wxButton* _decimal = nullptr;

	wxTextCtrl* _textBox;

	wxButton* _one = nullptr;
	wxButton* _two = nullptr;
	wxButton* _three = nullptr;
	wxButton* _four = nullptr;
	wxButton* _five = nullptr;
	wxButton* _six = nullptr;
	wxButton* _seven = nullptr;
	wxButton* _eight = nullptr;
	wxButton* _nine = nullptr;
	wxButton* _zero = nullptr;
	

};

