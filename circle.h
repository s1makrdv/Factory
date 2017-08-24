#pragma once
#include "ObjectMath.h"
class circle :
	public ObjectMath
{
private:
	double _radius;

public:
	circle(double radius);
	~circle();
	void draw();
	double area();
	double perimetr();
};

