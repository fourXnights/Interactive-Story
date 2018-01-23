//use of facotry method
#pragma once
#include "NPC.h"
class Berserker : public NPC {
public:
	Berserker(){}
	string name;
	int attack;
	int hp;

	string getClassName() {
		return "I am Class Berserker!";
	}
	void setName() {
		cout << "Enter the Berserker's Name: ";
		cin >> name;
	}
	void setAttack() {
		cout << "Set the Berserker's Attack: ";
		cin >> attack;
	}
	void setHP() {
		cout << "Set the Berserker's HP: ";
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
