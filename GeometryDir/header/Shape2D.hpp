#pragma once

namespace Geometry
{
    class Shape2D
    {
        public:
            virtual float getPerimeter() const = 0;
            virtual float getSurface() const = 0;
            virtual void print() const = 0;

    };
}
