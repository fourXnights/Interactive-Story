//use of facotry method
#pragma once
#include "NPC.h"

class Archer : public NPC {
public:
	Archer() {}
	string name;
	int attack;
	int hp;

	string getClassName() {
		return "I am Class Archer!";
	}
	void setName() {
		cout << "Enter the Archer's Name: ";
		cin >> name;
	}
	void setAttack() {
		cout << "Set the Archer's Attack: ";
		cin >> attack;
	}
	void setHP() {
		cout << "Set the Archer's HP: ";
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
