#pragma once

#include "Entity.h"
#include "Archer.h"
#include "Knight.h"
#include <iostream>



class EntityFabric
{
public:
	EntityFabric() = default;
	virtual ~EntityFabric() = default;

	void SomeFabricCode()
	{
		Entity* hero = createHero();
		delete hero;
	}

	virtual Entity* createHero() = 0;
};



class ArcherFabric : public EntityFabric
{
public:
	ArcherFabric() = default;
	virtual ~ArcherFabric() = default;

	Entity* createHero() override
	{
		std::cout << "Created Archer" << std::endl;
		return new Archer();
	}
};



class KnightFabric : public EntityFabric
{
public:
	KnightFabric() = default;
	virtual ~KnightFabric() = default;

	Entity* createHero() override
	{
		std::cout << "Created Knight" << std::endl;
		return new Knight();
	}
};