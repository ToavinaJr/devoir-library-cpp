#pragma once
#include "./Shape2D.hpp"

namespace Geometry
{
    class Square : public Shape2D
    {
        public:
            Square();
            ~Square();
            
            void print()const;

            void setWidth(float width);
            float getWidth() const;

            float getPerimeter()const override;
            float getSurface()const override;
            
        private:
            float width;
    };
}