#pragma once

#include "Entity.h"
#include <iostream>


class Archer : public Entity
{
public:
	Archer() = default;
	virtual ~Archer() = default;

	void attack() override
	{
		std::cout << "Archer attack" << std::endl;
	}
};