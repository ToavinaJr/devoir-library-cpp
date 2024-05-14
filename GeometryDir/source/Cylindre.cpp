#include <iostream>
#include "../header/Cylindre.hpp"

namespace Geometry
{
    Cylindre::Cylindre()
    {
        // std::cout << "Calling the Cylindre constructor " << std::endl;
    }
    Cylindre::~Cylindre()
    {
        // std::cout << "Calling the Cylindre destructor " << std::endl;
    }

    void Cylindre::print()const
    {
        baseCircle.print();
        std::cout << "Central Height : " << centralHeight << std::endl;
    }

    void Cylindre::setBaseCircle(Circle baseCircle)
    {
        this->baseCircle = baseCircle;
    }

    Circle Cylindre::getBaseCircle()const
    {
        return baseCircle;
    }

    float Cylindre::getVolume()const
    {
        return ( baseCircle.getSurface() * centralHeight );
    }
}
