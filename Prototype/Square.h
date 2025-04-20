#pragma once

#include "Shape.h"
#include <string>
#include <memory>


class Square : public Shape
{
public:
	Square(double x = 0.0)
	{
		this->x = x;
	}

	Square(const Square& square)
	{
		this->x = square.x;
	}

	std::unique_ptr<Shape> clone() override
	{
		return std::make_unique<Square>(*this);
	}

	double calculateArea() noexcept override
	{
		return x * x;
	}

	std::string getShapeName() const noexcept override
	{
		return std::string("square");
	}

private:
	double x;
};