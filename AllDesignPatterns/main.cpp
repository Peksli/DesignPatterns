#include "EntityFabric.h"


void ClientCode()
{
	EntityFabric* eF_archer = new ArcherFabric();
	EntityFabric* eF_knight = new KnightFabric();

	eF_archer->SomeFabricCode();
	eF_knight->SomeFabricCode();

	delete eF_archer;
	delete eF_knight;
}


int main()
{
	ClientCode();
}