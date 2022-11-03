#include "formaBidimen.cpp"

class circulo:public formaBidimen{
    public:
    float pi = 3.14;
    float raio;
    circulo();
    ~circulo();
    float getArea();
};