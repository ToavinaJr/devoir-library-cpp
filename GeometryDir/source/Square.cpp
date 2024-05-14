#include "../header/Square.hpp"
#include <iostream>

namespace Geometry
{
    Square::Square()
    {
        // std::cout << "Calling the Square constructor " << std::endl;
    }

    Square::~Square()
    {
        // std::cout << "Calling the Square destructor " << std::endl;
    }
    
    void Square::print() const
    {
        std::cout << "Width : " << width << std::endl;
    }

    void Square::setWidth(float width)
    {
        this->width = width;
    }

    float Square::getWidth() const
    {
        return width;
    }

    float Square::getPerimeter()const
    {
        return ( 4 * width );
    }

    float Square::getSurface()const
    {
        return ( width * width );
    }
}