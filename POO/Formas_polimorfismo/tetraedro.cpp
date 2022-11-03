#include "tetraedro.hpp"

tetraedro::tetraedro():formaTridimen(){
    cout << "Digite o lado do tetraedro: " << '\n';
    cin >> lado;
};

tetraedro::~tetraedro(){
    cout << "tetraedro" << "\n";
}

float tetraedro::getArea(){
    float A;
    A = (lado*lado)*sqrt(3);
    return A;
}

float tetraedro::getVolume(){
    float V;
    V=((lado*lado*lado)*sqrt(2))/12;
    return V;
};