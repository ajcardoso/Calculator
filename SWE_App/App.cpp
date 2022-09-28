#include "App.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	window = new MainWindow();
	window->Show();
	return true;

}

