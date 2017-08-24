#pragma once
#include "Object.h"

const double PI = 3.1415926535;

class ObjectMath : public Object
{
public:
	virtual double area() = 0;
	virtual double perimetr() = 0;
};
