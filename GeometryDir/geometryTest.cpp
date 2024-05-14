#include <iostream>
#include "./header/Point.hpp"
#include "./header/Square.hpp"
#include "./header/Rectangle.hpp"
#include "./header/Circle.hpp"
#include "./header/Cylindre.hpp"
#include "./header/Cube.hpp"
#include "./header/Paral.hpp"

using namespace Geometry;

int main()
{
    auto point = Point();
    auto rectangle = Rectangle();
    auto square = Square();
    auto circle = Circle();
    auto cube = Cube();
    auto cylindre = Cylindre();
    auto paral = Paral();
    
    std::cout << "Point" << std::endl;
    point.setX(4.f);
    point.setY(5.f);
    point.print();

    std::cout << std::endl;

    std::cout << "Rectangle" << std::endl;
    rectangle.setHeight(12.f);
    rectangle.setWidth(12.f);
    rectangle.print();
    std::cout << std::endl;

    std::cout << "Square" << std::endl;
    square.setWidth(2.f);
    square.print();
    std::cout << std::endl;    std::cout << "Circle" << std::endl;
    circle.setCenter( point );
    circle.setRayon(5.f);
    circle.print();

    std::cout << "Cube" << std::endl;
    cube.setBaseSquare( square );
    cube.setCentralHeight(1.5f);
    cube.print();

    std::cout << std::endl;

    std::cout << "Paral" << std::endl;
    paral.setBaseRectangle( rectangle );
    paral.setCentralHeight(1.5f);
    paral.print();

    std::cout << std::endl;

    std::cout << "Cylindre" << std::endl;
    cylindre.setBaseCircle( circle );
    cylindre.setCentralHeight(1.5f);
    cylindre.print();

    std::cout << std::endl;

    return 0;
}