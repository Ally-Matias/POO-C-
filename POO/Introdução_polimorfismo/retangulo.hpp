#pragma once

#include "forma.hpp" // ver se vai dar BO (n deu BO :) )

class Retangulo : public Forma{
    private:
        double b, h;
    public:
        Retangulo(double, double, double, double);
        ~Retangulo(){}

        void imprimir();
        double area();
};
