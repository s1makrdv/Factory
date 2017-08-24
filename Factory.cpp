#include "Factory.h"
#include "triangle.h"
#include "square.h"
#include "circle.h"
#include "apple.h"
#include "orange.h"
#include "house.h"
#include <string>

ObjectMathPtr Factory::createTriangle(double a, double b, double c) {
	return new triangle(a, b, c);
}

ObjectMathPtr Factory::createSquare(double a) {
	return new square(a);
}

ObjectMathPtr Factory::createCircle(double radius) {
	return new circle(radius);
}

ObjectPtr Factory::createApple(double weight) {
	return new apple(weight);
}

ObjectPtr Factory::createOrange(double weight) {
	return new orange(weight);
}

ObjectPtr Factory::createHouse(std::string name) {
	return new house(name);
}
