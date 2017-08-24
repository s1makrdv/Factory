#pragma once
#include "Object.h"
#include <string>

class house :
	public Object
{
private:
	std::string _name;

public:
	house(std::string name);
	~house();
	void draw();
};

