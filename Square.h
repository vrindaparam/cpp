#include "Shape.h"

class Square : public Shape
{
    private:
        float m_side;

    public:
        Square( float side )
        {
            m_side = side;
        }

       virtual float area();
       {
           return (m_side * m_side);
       }
};