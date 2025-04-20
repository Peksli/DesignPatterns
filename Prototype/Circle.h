#pragma once

#include "Shape.h"
#include <string>
#include <memory>


class Circle : public Shape
{
public:
	Circle(double r = 0.0)
	{
		this->r = r;
	}

	Circle(const Circle& circle)
	{
		this->r = circle.r;
	}

	std::unique_ptr<Shape> clone() override
	{
		return std::make_unique<Circle>(*this);
	}

	double calculateArea() noexcept override
	{
		return 3.1415 * r * r;
	}

	std::string getShapeName() const noexcept override
	{
		return std::string("circle");
	}

private:
	double r;
};