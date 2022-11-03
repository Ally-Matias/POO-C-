#include "circulo.hpp"

Circulo::Circulo(double xx, double yy, double rr)
: Forma{xx, yy}, r{rr} {};

double Circulo::area(){
    return 3.141592*r*r;
}

void Circulo::imprimir(){
    Forma::imprimir();
    cout << "\nRaio = " << r << endl;
    cout << "Area = " << area() << endl;
}
