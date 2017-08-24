# Factory
Test task #3 to KeepSolid summer intership.

Необходимо сделать удобный SDK со следующими требованиями:
1. Можно создать следующие объекты: triangle, square, circle, apple, orange, house. Параметры объектов на ваш выбор.
2. У каждого объекта есть метод "void draw()". 
Его изображение зависит от его типа и параметров. 
Учитывая то, что все необходимо сделать в консоли, изображение необходимо делать с помощью символов. Это может быть словесное описание или как приведено в примере.
3. Типы объектов: triangle, square и circle имеют методы "double area()" и "double perimetr()".
4. Также в SDK есть фабрика объектов. 
Пользователю SDK необходимо подключать только заголовочный файл фабрики.
Для работы с объектом ему необходимо использовать класс Object.
Для использования математических методов - ObjectMath, для тех объектов у которых они есть.
Будет хорошо если пользователь не будет знать о классах конкретных объектов.

Example:
Исходный код main.cpp:
#include "Factory.h"
#include <iostream>

int main(void)
{
    ObjectMathPtr object = Factory::circle(1.0);
    object->draw();
    std::cout << "perimetr:" << object->perimetr() << " area:" << object->area() << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    object = Factory::circle(4.0);
    object->draw();
    std::cout << "perimetr:" << object->perimetr() << " area:" << object->area() << std::endl;
    std::cout << "--------------------------------------------------------------------------" << std::endl;
    ObjectPtr object2 = Factory::orange(10);
    object2->draw();

    return 0;
}
OUTPUT:
***
* *
***

perimetr:6.28319 area:3.14159
--------------------------------------------------------------------------
  *****  
 **   ** 
**     **
*       *
*       *
*       *
**     **
 **   ** 
  *****  

perimetr:25.1327 area:50.2655
--------------------------------------------------------------------------
I am orange, my weight is 10 kg
