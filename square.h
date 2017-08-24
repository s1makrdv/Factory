#pragma once
#include "ObjectMath.h"
class square :
	public ObjectMath
{
private:
	double _a;

public:
	square(double a);
	~square();
	void draw();
	double area();
	double perimetr();
};

