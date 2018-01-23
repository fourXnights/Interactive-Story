//use of facotry method
#pragma once
#include "NPC.h"
class Saber : public NPC {
public:
	Saber() {}
	string name;
	int attack;
	int hp;

	string getClassName() {
		return "I am Class Saber!";
	}
	void setName() {
		cout << "Enter the Saber's Name: ";
		cin >> name;
	}
	void setAttack() {
		cout << "Set the Saber's Attack: ";
		cin >> attack;
	}
	void setHP() {
		cout << "Set the Saber's HP: ";
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
