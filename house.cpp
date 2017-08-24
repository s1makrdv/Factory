#include "house.h"
#include <iostream>
#include <string>

house::house(std::string name) {
	_name = name;
}

house::~house() {}

void house::draw() {
	std::cout << "House \"" << _name << "\"" << std::endl;
}
