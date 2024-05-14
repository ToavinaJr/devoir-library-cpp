#include "../header/Shape3D.hpp"
#include <iostream>

namespace Geometry
{
    void Shape3D::setCentralHeight(float centraHeight)
    {
        this->centralHeight = centraHeight;
    }

    float Shape3D::getCentralHeight()const
    {
        return centralHeight;
    }
}