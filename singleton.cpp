//use of singleton here
#include "singleton.h"

changeColour* changeColour::textColour = 0;

changeColour* changeColour::getInstance()
{
	if (textColour == 0)
		textColour = new changeColour();
	return textColour;
}

changeColour::changeColour() {

}

void changeColour::changeText(int num) {
	HANDLE ConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	//red
	if (num == 4) {
		SetConsoleTextAttribute(ConsoleHandle, 4);
	}
	//white
	if (num == 15) {
		SetConsoleTextAttribute(ConsoleHandle, 15);
	}
	//green
	if (num == 2) {
		SetConsoleTextAttribute(ConsoleHandle, 2);
	}
	//brown
	if (num == 6) {
		SetConsoleTextAttribute(ConsoleHandle, 6);
	}
	//dark gray
	if (num == 7) {
		SetConsoleTextAttribute(ConsoleHandle, 7);
	}
	//yellow
	if (num == 14) {
		SetConsoleTextAttribute(ConsoleHandle, 14);
	}
	//cyan
	if (num == 3) {
		SetConsoleTextAttribute(ConsoleHandle, 3);
	}
	//blue
	if (num == 9) {
		SetConsoleTextAttribute(ConsoleHandle, 9);
	}
}