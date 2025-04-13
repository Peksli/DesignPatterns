#pragma once

#include "Entity.h"
#include <iostream>


class Knight : public Entity
{
public:
	Knight() = default;
	virtual ~Knight() = default;

	void attack() override
	{
		std::cout << "Knight attack" << std::endl;
	}
};