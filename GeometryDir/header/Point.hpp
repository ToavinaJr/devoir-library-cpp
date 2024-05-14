#pragma once

namespace Geometry 
{
    class Point 
    {
        public:
            // CONSTRUCTOR
            Point();
            // DESTRUCTOR
            ~Point();

            void print()const;

            float getX()const;
            float getY()const;

            void setX(float x);
            void setY(float y);

        private:
            float x, y;
    };

    float distance(Point a, Point b);
}