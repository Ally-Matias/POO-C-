#include "quadrado.hpp"

quadrado::quadrado():formaBidimen(){
    cout << "Digite o lado do quadrado: " << '\n';
    cin >> lado;
};

quadrado::~quadrado(){
    cout << "Quadrado" << "\n";
}

float quadrado::getArea(){
    float A;
    A=lado*lado;
    return A;
};
