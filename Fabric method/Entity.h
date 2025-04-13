#pragma once


class Entity
{
public:
	Entity() = default;
	virtual ~Entity() = default;

	virtual void attack() = 0;
};