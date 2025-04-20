#include "Shape.h"
#include "Circle.h"
#include "Square.h"

#include <memory>
#include <iostream>



int main()
{
	std::unique_ptr<Shape> ptr_circle_1 = std::make_unique<Circle>(10.0);
	std::unique_ptr<Shape> ptr_circle_2 = ptr_circle_1->clone();

	std::cout << ptr_circle_1->calculateArea() << std::endl;
	std::cout << ptr_circle_2->calculateArea() << std::endl;

	std::cout << ptr_circle_1->getShapeName() << std::endl;
	std::cout << ptr_circle_2->getShapeName() << std::endl;


	return 0;
}