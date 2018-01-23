/*
I used the singleton and factory patterns in this cpp file
*/

#include "NPCBuilder.h"

NPCBuilder* NPCBuilder::myNPCBuilder = 0;

//use of a singleton here to ensure only one instance of an object will be created
NPCBuilder* NPCBuilder::getInstance() {
	if (myNPCBuilder == 0) {
		myNPCBuilder = new NPCBuilder();
	}
	return myNPCBuilder;
}

NPCBuilder::NPCBuilder() {}

//use of factory method here to create the different NPC classes
NPC* NPCBuilder::createNPCCLASS(NPCClassType classType) {
	switch (classType) {
	case NPCClassType::Saber:
		return new Saber();
		break;
	case NPCClassType::Archer:
		return new Archer();
		break;
	case NPCClassType::Lancer:
		return new Lancer();
		break;
	case NPCClassType::Rider:
		return new Rider();
		break;
	case NPCClassType::Caster:
		return new Caster();
		break;
	case NPCClassType::Assassin:
		return new Assassin();
		break;
	case NPCClassType::Berserker:
		return new Berserker();
	}
}