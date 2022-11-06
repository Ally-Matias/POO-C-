#include "formaTridimen.cpp"

class esfera:public formaTridimen{
    public:
    float pi = 3.14;
    float raio;
    esfera();
    ~esfera();
    float getArea();
    float getVolume();
};