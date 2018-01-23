//use of facotry method
#pragma once
#include "NPC.h"
class Caster : public NPC {
public:
	Caster() {}
	string name;
	int attack;
	int hp;

	string getClassName() {
		return "I am Class Caster!";
	}
	void setName() {
		cout << "Enter the Caster's Name: ";
		cin >> name;
	}
	void setAttack() {
		cout << "Set the Caster's Attack: ";
		cin >> attack;
	}
	void setHP() {
		cout << "Set the Caster's HP: ";
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
