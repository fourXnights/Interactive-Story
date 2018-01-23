//use of facotry method
#pragma once
#include "NPC.h"
class Rider : public NPC {
public:
	Rider() {}
	string name;
	int attack;
	int hp;

	string getClassName() {
		return "I am Class Rider!";
	}
	void setName() {
		cout << "Enter the Rider's Name: ";
		cin >> name;
	}
	void setAttack() {
		cout << "Set the Rider's Attack: ";
		cin >> attack;
	}
	void setHP() {
		cout << "Set the Rider's HP: ";
		cin >> hp;
	}
	string getName() {
		return name;
	}
	int getAttack() {
		return attack;
	}
	int getHP() {
		return hp;
	}
};

