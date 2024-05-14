#pragma once

#include "./Shape3D.hpp"
#include "./Square.hpp"

namespace Geometry
{
    class Cube : public Shape3D
    {
        public:
            Cube();
            ~Cube();

            void print()const override;
            float getVolume()const override;

            void setBaseSquare(Square baseSquare);
            Square getBaseSquare()const;

        private:
            Square baseSquare;
    };
}
