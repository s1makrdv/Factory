#include "square.h"
#include <iostream>

square::square(double a) {
	_a = a;
}

square::~square() {}

void square::draw() {
	std::cout << "square" << std::endl;
}

double square::area() {
	return _a * _a;
}

double square::perimetr() {
	return _a * 4;
}
