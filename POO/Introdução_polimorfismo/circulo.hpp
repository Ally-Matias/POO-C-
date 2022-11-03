#pragma once

#include "forma.hpp"
#include <iostream>
using namespace std;

class Circulo:public Forma{
    private:
        double r;
    public:
        Circulo(double, double, double);
        ~Circulo(){};

        double area();
        void imprimir();
};