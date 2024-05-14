#pragma once

namespace Geometry
{
    class Shape3D
    {
        public:
            virtual float getVolume() const = 0;
            virtual void print() const = 0;
            
            void setCentralHeight(float centraHeight);
            float getCentralHeight()const;

        protected:
            float centralHeight;
    };
}
