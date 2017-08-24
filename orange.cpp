#include "orange.h"
#include <iostream>

orange::orange(double weight) {
	_weight = weight;
}

orange::~orange() {}

void orange::draw() {
	std::cout << "I'm orange, my weight is " << _weight << " kg" << std::endl;
}
