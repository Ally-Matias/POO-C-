#include "circulo.hpp"

circulo::circulo():formaBidimen(){
    cout << "Digite o raio do circulo: " << '\n';
    cin >> raio;
};

circulo::~circulo(){
    cout << "Circulo" << "\n";
}

float circulo::getArea(){
    float A;
    A = pi*(raio*raio);
    return A;
}
