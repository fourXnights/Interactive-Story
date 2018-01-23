//use of singleton

#include <iostream>
#include <vector>
#include <conio.h>
#include "NPCBuilder.h"
#include "inputListener.h"
#include "inputManager.h"
#include <Windows.h>



class changeColour {
private:
	static changeColour* textColour;
	changeColour();
public:
	static changeColour* getInstance();
	void changeText(int num);

};
