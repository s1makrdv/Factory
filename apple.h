#pragma once
#include "Object.h"
class apple :
	public Object
{
private:
	double _weight;

public:
	apple(double weight);
	~apple();
	void draw();
};

