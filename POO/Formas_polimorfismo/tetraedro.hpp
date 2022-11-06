#include "math.h"
#include "formaTridimen.cpp"

class tetraedro:public formaTridimen{
    public:
    float lado;
    tetraedro();
    ~tetraedro();
    float getArea();
    float getVolume();
};