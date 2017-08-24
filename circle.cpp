#include "circle.h"
#include <iostream>


circle::circle(double radius) {
	_radius = radius;
}

circle::~circle() {}

void circle::draw() {
	std::cout << "circle" << std::endl;
}

double circle::area() {
	return PI * _radius * _radius;
}

double circle::perimetr() {
	return 2 * PI * _radius;
}
