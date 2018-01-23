//use of facotry method
#pragma once
#include "NPC.h"
class Lancer : public NPC {
public:
	Lancer() {}
	string name;
	int attack;
	int hp;

	string getClassName() {
		return "I am Class Lancer!";
	}
	void setName() {
		cout << "Enter the Lancer's Name: ";
		cin >> name;
	}
	void setAttack() {
		cout << "Set the Lancer's Attack: ";
		cin >> attack;
	}
	void setHP() {
		cout << "Set the Lancer's HP: ";
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
