#pragma once
#include "Object.h"
class orange :
	public Object
{
private:
	double _weight;

public:
	orange(double weight);
	~orange();
	void draw();
};

