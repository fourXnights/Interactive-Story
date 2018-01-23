//use of oberver pattern, the code was provided to us by Chris
#pragma once
#include <vector>
#include "inputListener.h"

using namespace std;

class inputManager {
public:
	bool attach(int input);
	void detach(int input);
	void notify(int input);

	void setListeners(inputListener* listener);

	inputManager();

private:
	vector<inputListener*> myListeners;
	vector<int> myRegisterInput;
};