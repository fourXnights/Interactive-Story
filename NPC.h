//use of the factory pattern
#pragma once
#include <string>
#include <iostream>

using namespace std;
using std::string;

class NPC {
public:
	virtual string getClassName() = 0;
	virtual void setName() = 0;
	virtual void setAttack() = 0;
	virtual void setHP() = 0;
	virtual string getName() = 0;
	virtual int getAttack() = 0;
	virtual int getHP() = 0;
};
