#pragma once

#include "./Shape3D.hpp"
#include "./Circle.hpp"

namespace Geometry
{
    class Cylindre : public Shape3D
    {
        public:
            Cylindre();
            ~Cylindre();

            void print()const override;
            float getVolume()const override;

            void setBaseCircle(Circle baseCircle);
            Circle getBaseCircle()const;

        private:
            Circle baseCircle;
    };
}
