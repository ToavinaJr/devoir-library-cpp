#include <iostream>
#include "../header/Cube.hpp"

namespace Geometry
{
    Cube::Cube()
    {
        // std::cout << "Calling the Cube constructor " << std::endl;
    }
    Cube::~Cube()
    {
        // std::cout << "Calling the Cube destructor " << std::endl;
    }

    void Cube::print()const
    {
        baseSquare.print();
        std::cout << "Central Height : " << centralHeight << std::endl;
    }
    
    void Cube::setBaseSquare(Square baseSquare)
    {
        this->baseSquare = baseSquare;
    }

    Square Cube::getBaseSquare()const
    {
        return baseSquare;
    }

    float Cube::getVolume()const
    {
        return ( baseSquare.getSurface() * centralHeight );
    }
}
