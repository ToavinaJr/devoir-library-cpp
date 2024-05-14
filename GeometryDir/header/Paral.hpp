#pragma once

#include "./Shape3D.hpp"
#include "./Rectangle.hpp"

namespace Geometry
{
    class Paral : public Shape3D
    {
        public:
            Paral();
            ~Paral();
            
            void print()const override;
            float getVolume()const override;

            void setBaseRectangle(Rectangle baseRectangle);
            Rectangle getBaseRectangle()const;

        private:
            Rectangle baseRectangle;
    };
}
