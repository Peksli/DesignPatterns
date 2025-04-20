#pragma once

#include <string>
#include <memory>


class Shape
{
public:
	virtual std::unique_ptr<Shape> clone() = 0;
	virtual double calculateArea() noexcept = 0;
	virtual std::string getShapeName() const noexcept = 0;
};