#include "EntityFabric.h"


void ClientCode()
{
	EntityFabric* eF_archer = new ArcherFabric();
	EntityFabric* eF_knight = new KnightFabric();

	eF_archer->SomeFabricCode();
	eF_knight->SomeFabricCode();

	delete eF_archer;
	delete eF_knight;

	EntityFabric* eF_Archer = new ArcherFabric();
	Entity* hero = eF_Archer->createHero();
	hero->attack();
}


int main()
{
	ClientCode();
}