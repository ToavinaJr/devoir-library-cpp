#pragma once

#include "./Shape2D.hpp"

namespace Geometry
{
    class Rectangle : Shape2D
    {
        private:
            float width, height;

        public:
            Rectangle();
            ~Rectangle();
            
            void print()const override;

            float getPerimeter()const override;
            float getSurface()const override;
            
            float getWidth()const;
            float getHeight()const;

            void setWidth(float width);
            void setHeight(float height);
    };
}