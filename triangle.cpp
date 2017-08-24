#include "triangle.h"
#include <cmath>
#include <iostream>

triangle::triangle(double a, double b, double c) {
	_a = a;
	_b = b;
	_c = c;
}

triangle::~triangle() {}

void triangle::draw() {
	std::cout << "triangle" << std::endl;
}

double triangle::area() {
	double p = perimetr() / 2;
	return sqrt(p * (p - _a) * (p - _b) * (p - _c));
}

double triangle::perimetr() {
	return _a + _b + _c;
}
