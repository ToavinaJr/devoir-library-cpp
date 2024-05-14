#include "../header/Point.hpp"
#include <iostream>
#include <cmath>

namespace Geometry
{
    Point::Point() 
    {
        // std::cout << "Calling the Point constructor " << std::endl;
    }

    Point::~Point() 
    {
        // std::cout << "Calling the Point destructor " << std::endl;
    }

    void Point::print()const
    {
        std::cout << "Point (" << x << " ; " << y << ")" << std::endl;
    }

    void Point::setX(float x)
    {
        this->x = x;
    }

    void Point::setY(float y)
    {
        this->y = y;
    }

    float Point::getX()const
    {
        return x;
    }

    float Point::getY()const
    {
        return y;
    }

    float distance(Point a, Point b)
    {
        float dx = a.getX() - b.getX();
        float dy = a.getY() - b.getY();

        return std::sqrt(( dx * dx ) + ( dy * dy ));
    }
}