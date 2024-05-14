#pragma once
#include "./Shape2D.hpp"
#include "./Point.hpp"

namespace Geometry
{
    class Circle : public Shape2D 
    {
        public :
            Circle();
            ~Circle();

            void print()const override;
            float getPerimeter()const override;
            float getSurface()const override;
            
            Point getCenter()const;
            float getRayon()const;

            void setRayon(float rayon);
            void setCenter(Point center);

            

        private :
            Point center;
            float rayon;
    };
}
