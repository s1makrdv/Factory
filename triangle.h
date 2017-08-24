#pragma once
#include "ObjectMath.h"

class triangle :
	public ObjectMath
{
private:
	double _a;
	double _b;
	double _c;
public:
	triangle(double a, double b, double c);
	~triangle();
	void draw();
	double area();
	double perimetr();
};

