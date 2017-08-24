#include "apple.h"
#include <iostream>

apple::apple(double weight) {
	_weight = weight;
}

apple::~apple() {}

void apple::draw() {
	std::cout << "I'm apple, my weight is " << _weight << " kg" << std::endl;
}
