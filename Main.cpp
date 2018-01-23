/*
Title: Assignment - 7
Author : Leyalee Alsaadi
Objective : to display knowledge and an understaning of the singleton, oberver and facotry method and to create an interactive game using them
*/

#include <iostream>
#include <vector>
#include <conio.h>
#include "NPCBuilder.h"
#include "inputListener.h"
#include "inputManager.h"
#include <Windows.h>
#include "singleton.h"

using namespace std;

void menu();
void startAdventure();
char partOne();
char partTwo();
char partThree();
char partFour();
char partFive();
char partSix();
char partSeven();
void showCredits();
void gotoXCoorYCoor(int x, int y);


//using the observer pattern used to specify which key has what function
class player : public inputListener {

	inputManager* inputMgr;

	void keyDownEvent(int input) {
		switch (input) {
		case '1':
			system("cls");
			startAdventure();
			break;
		case '2':
			system("cls");
			showCredits();
			break;
		case '3':
			exit(0);
			break;
		}
	}

public:
	player(inputManager* inputMgr) : inputMgr(inputMgr) {}
};

int main() {

	menu();
	

	system("pause");
	return 0;
}

void menu() {
	gotoXCoorYCoor(50, 0);
	cout << "WELCOME TO" << endl;
	gotoXCoorYCoor(40, 1);
	cout << "A MASTER AND THEIR SERVANTS" << endl;
	gotoXCoorYCoor(38, 2);
	cout << "Please select one of the options:" << endl;
	gotoXCoorYCoor(47, 3);
	cout << "1. Start Adventure" << endl;
	gotoXCoorYCoor(47, 4);
	cout << "2. Show Credits" << endl;
	gotoXCoorYCoor(47, 5);
	cout << "3. Quit" << endl;

	//the code belows uses the observer pattern to specify which keys may be pressed in the menu 
	inputManager* inputMgr = new inputManager();

	player* master = new player(inputMgr);
	inputMgr->attach('1');
	inputMgr->attach('2');
	inputMgr->attach('3');

	inputMgr->setListeners(master);

	while (true) {
		if (_kbhit()) {
			inputMgr->notify(_getch());
		}
	}
}

void startAdventure() {

	int partCounter = 0;

	vector<NPC*> servants;
	string saberName;
	int saberAttack;
	int saberHP;

	string archerName;
	int archerAttack;
	int archerHP;

	string lancerName;
	int lancerAttack;
	int lancerHP;

	string riderName;
	int riderAttack;
	int riderHP;

	string assassinName;
	int assassinAttack;
	int assassinHP;

	string casterName;
	int casterAttack;
	int casterHP;

	string berserkerName;
	int bersekerAttack;
	int berserkerHP;

	//this uses the singleton pattern by using one function, getInstance() to create characters using the factory method
	servants.push_back(NPCBuilder::getInstance()->createNPCCLASS(NPCClassType::Saber));
	servants.push_back(NPCBuilder::getInstance()->createNPCCLASS(NPCClassType::Lancer));
	servants.push_back(NPCBuilder::getInstance()->createNPCCLASS(NPCClassType::Archer));
	servants.push_back(NPCBuilder::getInstance()->createNPCCLASS(NPCClassType::Rider));
	servants.push_back(NPCBuilder::getInstance()->createNPCCLASS(NPCClassType::Caster));
	servants.push_back(NPCBuilder::getInstance()->createNPCCLASS(NPCClassType::Assassin));
	servants.push_back(NPCBuilder::getInstance()->createNPCCLASS(NPCClassType::Berserker));

	for (int i = 0; i < servants.size(); i++) {
		//use of singleton
		changeColour::getInstance()->changeText(4);
		if (i == 0) {
			
			cout << "     []" << endl;
			cout << "o////||::===========================-" << endl;
			cout << "     []" << endl;
		}
		//use of singleton
		changeColour::getInstance()->changeText(7);
		if (i == 1) {
			
			cout << "              / `-..___ " << endl;
			cout << " ___________ / ````-----......_______" << endl;
			cout << "(___________ |                _______:::::::: == == == == = ----------" << endl;
			cout << "              \        ___, , , , ---- - ''''''" << endl;
			cout << "               \, -''" << endl;
		}
		//use of singleton
		changeColour::getInstance()->changeText(14);
		if (i == 2) {
			
			cout << "  (" << endl;
			cout << "  '\'" << endl;
			cout << "    )" << endl;
			cout << "##-------->" << endl;
			cout << "    )" << endl;
			cout << "  '/'" << endl;
			cout << "  (" << endl;
		}
		//use of singleton
		changeColour::getInstance()->changeText(9);
		if (i == 3) {
			
			cout << "      _~" << endl;
			cout << "  _~ )_) _~" << endl;
			cout << "  )_))_))_)" << endl;
			cout << "  _!__!__!_" << endl;
			cout << "  |_______/" << endl;
			cout << "~~~~~~~~~~~~~" << endl;
		}
		//use of singleton
		changeColour::getInstance()->changeText(3);
		if(i == 4) {
			
			cout << ". || ." << endl;
			cout << "\.`', /" << endl;
			cout << "=, . =" << endl;
			cout << "* || *" << endl;
			cout << "  ||" << endl;
			cout << "  ||" << endl;
			cout << "  ||" << endl;
			cout << "  ||" << endl;
			cout << "  ||" << endl;
			cout << "  ||" << endl;
		}
		//use of singleton
		changeColour::getInstance()->changeText(7);
		if (i == 5) {
			cout << "[]++++ || == == == = >" << endl;
			cout << "[]++++ || == == == = >" << endl;
		}
		//use of singleton
		changeColour::getInstance()->changeText(6);
		if(i == 6){
			
			cout << " _________________.-- - .______" << endl;
			cout << "(_(______________(_o  o_(____()" << endl;
			cout << "              .___.'. .'.___." << endl;
			cout << "              'o    Y    o '" << endl;
			cout << "	            `__   __ `" << endl;
			cout << "                '.__' - '__.'" << endl;
			cout << "                     '''" << endl;
		}
		//use of singleton
		changeColour::getInstance()->changeText(15);
		cout << servants[i]->getClassName() << endl;
		servants[i]->setName();
		servants[i]->setAttack();
		servants[i]->setHP();

		switch (i) {
		case 0:
			saberName = servants[0]->getName();
			saberAttack = servants[0]->getAttack();
			saberHP = servants[0]->getHP();
			break;
		case 1:
			lancerName = servants[1]->getName();
			lancerAttack = servants[1]->getAttack();
			lancerHP = servants[1]->getHP();
			break;
		case 2:
			archerName = servants[2]->getName();
			archerAttack = servants[2]->getAttack();
			archerHP = servants[2]->getHP();
			break;
		case 3:
			riderName = servants[3]->getName();
			riderAttack = servants[3]->getAttack();
			riderHP = servants[3]->getHP();
			break;
		case 4:
			casterName = servants[4]->getName();
			casterAttack = servants[4]->getAttack();
			casterHP = servants[4]->getHP();
			break;
		case 5:
			assassinName = servants[5]->getName();
			assassinAttack = servants[5]->getAttack();
			assassinHP = servants[5]->getHP();
			break;
		case 6:
			berserkerName = servants[6]->getName();
			bersekerAttack = servants[6]->getAttack();
			berserkerHP = servants[6]->getHP();
			break;
		}

		cout << endl;

		system("cls");
	}

	char choice;

	while (partCounter < 7) {
		if (partCounter == 0) {
			choice = partOne();

			//use of singleton
			changeColour::getInstance()->changeText(15);
			if (choice == 'A' || choice == 'a') {
				cout << "You run into enemies by going down the right path!" << endl;
				cout << "Your Saber " << servants[0]->getName() << " has been killed." << endl;
				cout << "The rest of your servants manage to get you out of the forest alive." << endl;
				cout << "The rest of your servants become stronger." << endl;
				saberHP = 0;
				archerAttack += 50;
				lancerAttack += 50;
				riderAttack += 50;
				assassinAttack += 50;
				casterAttack += 50;
				bersekerAttack += 50;
			}
			else if (choice == 'B' || choice == 'b') {
				cout << "You are attacked from behind, but your Assassin was able to block the attack." << endl;
				cout << "The rest of your servants manage to get you out of the forest alive" << endl;
				cout << "The rest of your servants become stronger." << endl;
				saberAttack += 50;
				archerAttack += 50;
				lancerAttack += 50;
				riderAttack += 50;
				assassinAttack += 50;
				casterAttack += 50;
				bersekerAttack += 50;
			}
		}
		else if (partCounter == 1) {
			choice = partTwo();
			//use of singleton
			changeColour::getInstance()->changeText(15);
			if (choice == 'A' || choice == 'a') {
				cout << "As you approach the carriage, a group of thieves appear! Caster uses a spell to protect you." << endl;
				cout << "However, they did not notice the thief behind them, and ended up being killed." << endl;
				saberAttack += 50;
				archerAttack += 50;
				lancerAttack += 50;
				riderAttack += 50;
				assassinAttack += 50;
				casterAttack = 0;
				casterHP = 0;
				bersekerAttack += 50;
			}
			else if (choice == 'B' || choice == 'b') {
				cout << "As you begin to pass the carriage, your Caster senses danger. A group of thieves then appear." << endl;
				cout << "Your servants defeat them and become stronger!" << endl;
				saberAttack += 50;
				archerAttack += 50;
				lancerAttack += 50;
				riderAttack += 50;
				assassinAttack += 50;
				casterAttack += 50;
				bersekerAttack += 50;
			}
		}
		else if (partCounter == 2) {
			choice = partThree();
			//use of singleton
			changeColour::getInstance()->changeText(15);
			if (choice == 'A' || choice == 'a') {
				cout << "You decide to stay in the town. As you begin to look around, your Berserker suddenly starts rampaging through the town!" << endl;
				cout << "Their rampaging attracks a large group of monsters to the town. Your Berserker becomes excited and starts fighting the monsters." << endl;
				cout << "Your Berserker was able to defeat the monsters, however their wounds are to serious to heal, and so your Berserker dies." << endl;
				cout << "Your servants are now tired from the battle, and have become weaker." << endl;
				saberAttack -= 20;
				archerAttack -= 20;
				lancerAttack -= 20;
				riderAttack -= 20;
				assassinAttack -= 20;
				casterAttack -= 20;
				bersekerAttack -= 20;
				berserkerHP = 0;
			}
			else if (choice == 'B' || choice == 'b') {
				cout << "You decide to continue your journey and walk past the town. Nothing happens while continuing your journey. " << endl;
				cout << "Your servants become stronger by being able to rest!" << endl;
				saberAttack += 50;
				archerAttack += 50;
				lancerAttack += 50;
				riderAttack += 50;
				assassinAttack += 50;
				casterAttack += 50;
				bersekerAttack += 50;
			}
		}
		else if (partCounter == 3) {
			choice = partFour();
			//use of singleton
			changeColour::getInstance()->changeText(15);
			if (choice == 'A' || choice == 'a') {
				cout << "You decide to stay and help your servants fight, you are not about to abandon them." << endl;
				cout << "Your servants and you manage to defeat the monsters without any casualties!." << endl;
				cout << "Your servants become stronger from defeating the monsters." << endl;
				saberAttack += 60;
				archerAttack += 60;
				lancerAttack += 60;
				riderAttack += 60;
				assassinAttack += 60;
				casterAttack += 60;
				bersekerAttack += 60;
			}
			else if (choice == 'B' || choice == 'b') {
				cout << "You decide to led Rider take you away from the battle and to let the rest of the servants handle the monsters. " << endl;
				cout << "Just as your Rider is about to take you to safety, a monster leaps towards you, killing intent in its eyes!" << endl;
				cout << "Just before the monster is about to kill, your Rider throws themself in front of you!" << endl;
				cout << "Just as the monsters claws sink into your Rider, they to have sunk their own weapon into the monster. They both die in the process." << endl;
				saberAttack += 50;
				archerAttack += 50;
				lancerAttack += 50;
				riderHP = 0;
				assassinAttack += 50;
				casterAttack += 50;
				bersekerAttack += 50;
			}
		}
		else if (partCounter == 4) {
			choice = partFive();
			//use of singleton
			changeColour::getInstance()->changeText(15);
			if (choice == 'A' || choice == 'a') {
				cout << "Your servants become stronger after being well rested!" << endl;
				saberAttack += 50;
				archerAttack += 50;
				lancerAttack += 50;
				riderHP = 0;
				assassinAttack += 50;
				casterAttack += 50;
				bersekerAttack += 50;
			}
		}
		else if (partCounter == 5) {
			choice = partSix();
			//use of singleton
			changeColour::getInstance()->changeText(15);
			if (choice == 'A' || choice == 'a') {
				cout << "Your Lancer starts to intercept the bows while your Archer fire their arrows towards the direction of the incoming arrows." << endl;
				cout << "When you think that your archer has taken out all enemies, one more arrow flies out and strikes your Lancer in the head, killing them." << endl;
				lancerHP = 0;
			}
			else if (choice == 'B' || choice == 'b') {
				cout << "Your Archer manages to hit all of the enemies while you Lancer blockes the incoming arrows." << endl;
				cout << "You continue on your journey." << endl;
			}
		}
		else if (partCounter == 6) {
			choice = partSeven();
			//use of singleton
			changeColour::getInstance()->changeText(15);
			if (choice == 'A' || choice == 'a') {
				cout << "Your servants defeat the monsters and save the travellers!" << endl;
			}
			else if (choice == 'B' || choice == 'b') {
				cout << "Your Archer manages to take out the monsters gathered around the travellers." << endl;
				cout << "However, the Archer did not notice that there were two monsters creeping behind you." << endl;
				cout << "Just before the monsters manager to attack you, your Assassin and Archer intercept them!" << endl;
				cout << "Their interception saved you, however, they perished as a result." << endl;
				archerHP = 0;
				assassinHP = 0;
			}
		}

		partCounter++;
	}

	cout << "You have finally reached the end of your jounrney, Master!" << endl;
	cout << "Lets see how your servants did: " << endl;
	cout << "Name: " << saberName << endl;
	cout << "Attack: " << saberAttack << endl;
	cout << "HP: " << saberHP << endl;
	cout << endl;
	cout << "Name: " << lancerName << endl;
	cout << "Attack: " << lancerAttack << endl;
	cout << "HP: " << lancerHP << endl;
	cout << endl;
	cout << "Name: " << archerName << endl;
	cout << "Attack: " << archerAttack << endl;
	cout << "HP: " << archerHP << endl;
	cout << endl;
	cout << "Name: " << riderName << endl;
	cout << "Attack: " << riderAttack << endl;
	cout << "HP: " << riderHP << endl;
	cout << endl;
	cout << "Name: " << casterName << endl;
	cout << "Attack: " << casterAttack << endl;
	cout << "HP: " << casterHP << endl;
	cout << endl;
	cout << "Name: " << assassinName << endl;
	cout << "Attack: " << assassinAttack << endl;
	cout << "HP: " << assassinHP << endl;
	cout << endl;
	cout << "Name: " << berserkerName << endl;
	cout << "Attack: " << bersekerAttack << endl;
	cout << "HP: " << berserkerHP << endl;

}

char partOne() {

	char choice;

	cout << "You have now formed your team of seven servants who will travel with you on your journey to escape the strange world you have been trapped in." << endl;
	cout << "You leave the inn that you were staying in and start your journey with the servants following behind." << endl;
	cout << "You arrive at the entrace of a forest, however, there are two paths and your servants sense danger." << endl;

	//use of singleton
	changeColour::getInstance()->changeText(6);
	cout << "                             )" << endl;
	cout << "                  *-*        (" << endl;
	cout << "           _______ | ________%%__" << endl;
	cout << "          |%%%%%%%%%%%%%%%%%%%%% |" << endl;
	cout << "     _____|%%%/^\%%%/^\%%%/^\%%% |_____" << endl;
	cout <<   "  /%/^\%|%%%|-|%%%|-|%%%|-|%%% |%/^\%\'" << endl;
	cout <<	"' / %%|-|%| %%%%%%%%%%%%%%%%%%%%%|%|-|¾¾\'" << endl;
	cout << "/ %%%%%%%% | __  __ ___ __  __ | %%%%%%%%\'" << endl;
	cout << "  |_|-|-|_ ||__||__|.|.|__||__|| _|-|-|_|" << endl;
	cout << "  IIIIIIII |       |_|_|       | IIIIIIII" << endl;
	cout << "  ~^    ^'@@@@@@@@ |   | @@@@@@@@'^    ^~" << endl;
	cout << endl;

	//use of singleton
	changeColour::getInstance()->changeText(15);
	cout << "Which path do you choose?" << endl;
	cout << "A. The path on the right" << endl;
	cout << "B. The path on the left" << endl;
	cout << "Choice: ";

	cin >> choice;
	while (choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b') {
		cout << "Enter a valid option!" << endl;
		cout << "Choice: ";
		cin >> choice;
	}

	system("cls");

	return choice;
}

char partTwo() {
	char choice;

	cout << "You have managed to get out of the forest, and continue on your journey with your servants." << endl;
	cout << "While you continue your journey, you walk into a carriage that appears to have been abandoned." << endl;
	cout << "What do you decide to do?" << endl;
	
	//use of singleton
	changeColour::getInstance()->changeText(2);
	cout << "            , @@@@@@@," << endl;
	cout << "    , , , ., @@@@@@/@@,  .oo8888o." << endl;
	cout << ", &%%&%&&%, @@@@@/@@@@@@,8888\88 /8o" << endl;
	cout << ", %&\%&&%&&%, @@@\@@@/@@@88\88888/88'" << endl;
	cout << "%&&%&%&/%&&%@@\@@/ / @@@88888\88888'" << endl;
	cout << "%&&% / %&%%&&@@\ V / @@' `88\8 `/88'" << endl;
	cout << "`&%\ ` / %&'    |.|        \ ' | 8'" << endl;
	cout << "    | o | | | | | " << endl;
	cout << "    | . |       | |         | |" << endl;
	cout << " \\ / ._\//_/__/  ,\_//__\\/.  \_//__/_" << endl;
	cout << endl;
	//use of singleton
	changeColour::getInstance()->changeText(15);
	cout << "A. Check the carriage to see if there is anything useful." << endl;
	cout << "B. Continue to walk and not bother with the carriage." << endl;
	cout << "Choice: ";

	cin >> choice;
	while (choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b') {
		cout << "Enter a valid option!" << endl;
		cout << "Choice: ";
		cin >> choice;
	}

	system("cls");
	
	return choice;
}

char partThree() {
	char choice;

	//use of singleton
	changeColour::getInstance()->changeText(15);
	cout << "After your fight with the gang of thieves as ended, you come a small town that seems to be abandoned." << endl;
	cout << "One of your servants suggest you look through the town for anything useful and to possibly set up camp." << endl;
	cout << "Another servant is against this idea and suggests that you keep going until you find somewhere that seems more safe." << endl;
	cout << "Which option do you choose?" << endl;
	//use of singleton
	changeColour::getInstance()->changeText(7);
	cout << "                        . |" << endl;
	cout << "                       |   |" << endl;
	cout << "                       | ' |           ._____        " << endl;
	cout << "                ___    |   |           | .  | ' .---'" << endl;
	cout << "         _   .-'   '-. |   |     .--'  | |  | _|    |" << endl;
	cout << "    . -'|  _.|  |    ||    '-__  |  |  |    ||      | " << endl;
	cout << "    | ' | |.    |    ||        | |  |  |    ||      |" << endl;
	cout << "___ |   '-'     '    ""        '-'  '-.'    '`      | ____" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	//use of singleton
	changeColour::getInstance()->changeText(15);
	cout << "A. Choose to stay in the town and look around." << endl;
	cout << "B Choose to continue with your journey" << endl;

	cin >> choice;
	while (choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b') {
		cout << "Enter a valid option!" << endl;
		cout << "Choice: ";
		cin >> choice;
	}

	system("cls");

	return choice;
}

char partFour() {
	char choice;

	//use of singleton
	changeColour::getInstance()->changeText(15);
	cout << "You have now left the town and continue on  your journey. You start to feel tired and hungry." << endl;
	cout << "You tell your servants that you will be making camp here for the night." << endl;
	cout << "A few hours after night has come, loud sounds wake you up. You look outside of your tent and see that the servants are in battle!" << endl;
	cout << "You are about to be attacked by a monster, but then Rider appears and saves you! Rider suggests that they take you away from the battle." << endl;
	cout << "Which option do you choose?" << endl;
	//use of singleton
	changeColour::getInstance()->changeText(4);
	cout << "   _________" << endl;
	cout << "  /       / \'" << endl;
	cout << " /       /   \'" << endl;
	cout << "/ _____ / ----\_        (" << endl;
	cout << ""      "              ) ." << endl;
	cout << "   _ ___          o (:') o" << endl;
	cout <<  " (@))_))        o ~/~~\~ o" << endl;
	cout << "                  o  o  o" << endl;
	cout << endl;
	//use of singleton
	changeColour::getInstance()->changeText(15);
	cout << "A. Choose to stay and help the servants." << endl;
	cout << "B Choose to let Rider take you away." << endl;

	cin >> choice;
	while (choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b') {
		cout << "Enter a valid option!" << endl;
		cout << "Choice: ";
		cin >> choice;
	}

	system("cls");

	return choice;
}

char partFive() {
	char choice;

	cout << "After leaving the campsite, you and your servants continue on your journey until you come across a town with an inn." << endl;
	cout << "You decide that this is a good place to stop to allow your servants to rest." << endl;

	//use of singleton
	changeColour::getInstance()->changeText(6);
	cout << "                             )" << endl;
	cout << "                  *-*        (" << endl;
	cout << "           _______ | ________%%__" << endl;
	cout << "          |%%%%%%%%%%%%%%%%%%%%% |" << endl;
	cout << "     _____|%%%/^\%%%/^\%%%/^\%%% |_____" << endl;
	cout << "  /%/^\%|%%%|-|%%%|-|%%%|-|%%% |%/^\%\'" << endl;
	cout << "' / %%|-|%| %%%%%%%%%%%%%%%%%%%%%|%|-|¾¾\'" << endl;
	cout << "/ %%%%%%%% | __  __ ___ __  __ | %%%%%%%%\'" << endl;
	cout << "  |_|-|-|_ ||__||__|.|.|__||__|| _|-|-|_|" << endl;
	cout << "  IIIIIIII |       |_|_|       | IIIIIIII" << endl;
	cout << "  ~^    ^'@@@@@@@@ |   | @@@@@@@@'^    ^~" << endl;
	cout << endl;
	//use of singleton
	changeColour::getInstance()->changeText(15);
	cout << "A. Let your servants rest at the inn. " << endl;

	cin >> choice;
	while (choice != 'A' && choice != 'a') {
		cout << "Enter a valid option!" << endl;
		cout << "Choice: ";
		cin >> choice;
	}

	system("cls");

	return choice;
}

char partSix() {
	char choice;

	//use of singleton
	changeColour::getInstance()->changeText(15);
	cout << "The next day, you leave the inn with your remaining servants." << endl;
	cout << "As you are making your way towards your destination, arrows start flying towards you!" << endl;
	cout << "What do you do?" << endl;
	//use of singleton
	changeColour::getInstance()->changeText(14);
	cout << ">> >> >> >_____________________\`-._" << endl;
	cout << ">> >> >> >                     / . - '" << endl;
	cout << ">> >> >> >_____________________\`-._" << endl;
	cout << ">> >> >> >                     / . - '" << endl;
	cout << ">> >> >> >_____________________\`-._" << endl;
	cout << ">> >> >> >                     / . - '" << endl;
	cout << endl;
	//use of singleton
	changeColour::getInstance()->changeText(15);
	cout << "A. Let your servants handle the enemies." << endl;
	cout << "B. Retreat with your servants." << endl;
	
	cin >> choice;
	while (choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b') {
		cout << "Enter a valid option!" << endl;
		cout << "Choice: ";
		cin >> choice;
	}

	system("cls");

	return choice;
}

char partSeven() {
	char choice;

	//use of singleton
	changeColour::getInstance()->changeText(15);
	cout << "After making it past the enemies, you continue onwards with your servants." << endl;
	cout << "You are finally about to reach the end of your journey, however, you are faced with one more challenge." << endl;
	cout << "You see some travellers being attacked by a group of monsters! You see that they are not match for the monsters." << endl;
	cout << "What do you do?" << endl;

	//use of singleton
	changeColour::getInstance()->changeText(4);
	cout << "                  ..i'        q." << endl;
	cout << "              .poj;           \*." << endl;
	cout << "           .oKPO               THk" << endl;
	cout << "  .k     { HHk`                 THH," << endl;
	cout << " dH,     ;YJH.                   YHHk" << endl;
	cout << "{ HHk    :lHHk                   jHHH }" << endl;
	cout << "THHk     `NJHH,                 .HHHl'" << endl;
	cout << "THHk,    lHHHHk                 jHHHHP" << endl;
	cout << "THHHi:, `GHHHHH,.            .'HHHHH " << endl;
	cout << "`THHHHHHi\WHHHHHkoo....ooooojHHHHHHF" << endl;
	cout << "`*THHHH`THHHHHHHHHHHHHHHHHHHHHHHHl" << endl;
	cout << "     `*THHHYHHHHHHHHHHHHHHHHHHHHHHHI" << endl;
	cout << "        `*THHYHHHHHHHHHHHHHHHHHHHHHH }" << endl;
	cout << "          `*THHHHHHHHHHHHHHHHHHHHHH" << endl;
	cout << "            `THHHHHHHHHHHHHHHHHHHP" << endl;
	cout << "             `THHHHHHHHHHHHHHHHHH|" << endl;

	//use of singleton
	changeColour::getInstance()->changeText(15);
	cout << "A. Command your servants to save the group of travellers." << endl;
	cout << "B. Command your Archer to shoot the monsters from a distance." << endl;

	cin >> choice;
	while (choice != 'A' && choice != 'a' && choice != 'B' && choice != 'b') {
		cout << "Enter a valid option!" << endl;
		cout << "Choice: ";
		cin >> choice;
	}

	system("cls");

	return choice;
}

void showCredits() {
	cout << "Title: A Master and Their Servants" << endl;
	cout << "Author: Leyalee Alsaadi" << endl;

	Sleep(5000);
	system("cls");

	menu();
}

void gotoXCoorYCoor(int x, int y) {
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = { x, y };
	SetConsoleCursorPosition(hStdout, position);
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = false;
	cursorInfo.dwSize = 10;
	SetConsoleCursorInfo(hStdout, &cursorInfo);
}