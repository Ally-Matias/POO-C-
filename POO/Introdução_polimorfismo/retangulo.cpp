#include "retangulo.hpp"
#include <iostream>
using namespace std;

Retangulo::Retangulo(double xx, double yy, double bb, double hh)
: Forma{xx, yy}, b{bb}, h{hh} {}

double Retangulo::area(){
    return b*h;
}

void Retangulo::imprimir(){
    cout << "imprimir de forma " << endl;
    Forma::imprimir();
    cout << "\nimprimir de retangulo " << endl;
    cout << "Base = " << b << " e altura = " << h << endl;
    cout << "Area = " << area() << endl;
}