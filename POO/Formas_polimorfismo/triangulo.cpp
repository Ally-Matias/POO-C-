#include "triangulo.hpp"

triangulo::triangulo():formaBidimen(){
    cout << "Digite a base do triangulo: " << '\n';
    cin >> base;
    cout << "Digite a altura do triangulo: " << '\n';
    cin >> altura;
};

triangulo::~triangulo(){
    cout << "Triangulo" << "\n";
}

float triangulo::getArea(){
    float A;
    A=(base*altura)/2;
    return A;
};