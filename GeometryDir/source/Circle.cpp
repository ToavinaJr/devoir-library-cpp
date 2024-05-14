#include "../header/Circle.hpp"
#include <iostream>

namespace Geometry
{
    Circle::Circle()
    {
        // std::cout << "Calling the Circle constructor " << std::endl;
    }

    Circle::~Circle()
    {
        // std::cout << "Calling the Circle desstructor " << std::endl;
    }

    Point Circle::getCenter()const
    {
        return center;
    }

    void Circle::print() const {
        std::cout << "Center : ";
        center.print();
        std::cout << "Rayon : " << rayon << std::endl;
    }

    float Circle::getRayon()const
    {
        return rayon;
    }

    void Circle::setRayon(float rayon)
    {
        this->rayon = rayon;
    }

    void Circle::setCenter(Point center)
    {
        this->center = center;
    }

    float Circle::getPerimeter()const
    {
        return (2 * 3.14f * rayon);
    }

    float Circle::getSurface()const{
        return ( rayon * rayon * 3.14f );
    }
}