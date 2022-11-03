#include "formaTridimen.cpp"

class cubo:public formaTridimen{
    public:
    float lado;
    cubo();
    ~cubo();
    float getArea();
    float getVolume();
};