//use of factory method and singleton pattern here

#pragma once
#include "Archer.h"
#include "Assassin.h"
#include "Berserker.h"
#include "Caster.h"
#include "Lancer.h"
#include "Rider.h"
#include "Saber.h"
#include "NPC.h"


enum class NPCClassType {Saber, Archer, Lancer, Rider, Caster, Assassin, Berserker};

class NPCBuilder {
public:
	//singleton pattern used here to create only once instance that can be called multiple times to create an NPC
	static NPCBuilder* getInstance();

	NPC* createNPCCLASS(NPCClassType classType);

private:
	NPCBuilder();

	static NPCBuilder* myNPCBuilder;

};
