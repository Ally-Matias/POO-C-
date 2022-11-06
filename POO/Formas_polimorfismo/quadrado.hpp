#include "formaBidimen.cpp"

class quadrado:public formaBidimen{
    public:
    float lado;
    quadrado();
    ~quadrado();
    float getArea();
};