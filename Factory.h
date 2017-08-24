#pragma once
#include "Object.h"
#include "ObjectMath.h"
#include <string>

typedef Object* ObjectPtr;
typedef ObjectMath* ObjectMathPtr;

class Factory {
public:
	static ObjectMathPtr createTriangle(double a, double b, double c);
	static ObjectMathPtr createSquare(double a);
	static ObjectMathPtr createCircle(double radius);
	static ObjectPtr createApple(double weight);
	static ObjectPtr createOrange(double weight);
	static ObjectPtr createHouse(std::string name);
};


