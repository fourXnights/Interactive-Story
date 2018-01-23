//use of facotry method
#pragma once
#include "NPC.h"
class Assassin :public NPC {
public:
	Assassin() {}
	string name;
	int attack;
	int hp;

	string getClassName() {
		return "I am Class Assassin!";
	}
	void setName() {
		cout << "Enter the Assassin's Name: ";
		cin >> name;
	}
	void setAttack() {
		cout << "Set the Assassin's Attack: ";
		cin >> attack;
	}
	void setHP() {
		cout << "Set the Assassin's HP: ";
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
