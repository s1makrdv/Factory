#include <iostream>
#include "Factory.h"
#include <string>

int main() {
	ObjectMathPtr object = Factory::createCircle(1.0);
	object->draw();
	std::cout << "perimetr:" << object->perimetr() << " area:" << object->area() << std::endl;
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	object = Factory::createCircle(4.0);
	object->draw();
	std::cout << "perimetr:" << object->perimetr() << " area:" << object->area() << std::endl;
	std::cout << "--------------------------------------------------------------------------" << std::endl;
	ObjectPtr object2 = Factory::createOrange(10);
	object2->draw();
	

	Factory::createApple(1)->draw();
	Factory::createOrange(0.5)->draw();
	Factory::createHouse("New")->draw();
	Factory::createTriangle(1, 2, 3)->draw();
	Factory::createSquare(3)->draw();
	Factory::createCircle(2)->draw();



	return 0;
}
