#include <iostream>

#include "../header/Paral.hpp"

namespace Geometry
{
    Paral::Paral()
    {
        // std::cout << "Calling the Paral constructor " << std::endl;
    }

    Paral::~Paral()
    {
        // std::cout << "Calling the Paral destructor " << std::endl;
    }

    void Paral::print()const {
        std::cout << "Base Rectangle : " ;baseRectangle.print();
        std::cout << "Central height : " << centralHeight;
    }

    void Paral::setBaseRectangle(Rectangle baseRectangle)
    {
        this->baseRectangle = baseRectangle;
    }

    Rectangle Paral::getBaseRectangle()const
    {
        return baseRectangle;
    }

    float Paral::getVolume()const
    {
        return ( baseRectangle.getSurface() * centralHeight );
    }
}
