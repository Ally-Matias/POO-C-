#include "formaBidimen.cpp"

class triangulo:public formaBidimen{
    public:
    float base;
    float altura;
    triangulo();
    ~triangulo();
    float getArea();
};