#include "../header/Rectangle.hpp"
#include <iostream>

namespace Geometry
{
    Rectangle::Rectangle()
    {

    }

    Rectangle::~Rectangle()
    {

    }

    void Rectangle::print()const
    {
        std::cout << "Width : " << width << std::endl;
        std::cout << "Height : " << height << std::endl;
    }

    float Rectangle::getPerimeter()const
    {
        return ( 2 * ( width + height ) );
    }

    float Rectangle::getSurface()const
    {
        return ( width * height );
    }

    float Rectangle::getWidth()const
    {
        return (width);
    }

    float Rectangle::getHeight()const
    {
        return (height);
    }

    void Rectangle::setWidth(float width)
    {
        this->width = width;
    }

    void Rectangle::setHeight(float height)
    {
        this->height = height;
    }

}
