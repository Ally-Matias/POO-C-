#include "esfera.hpp"

esfera::esfera():formaTridimen(){
    cout << "Digite o raio do esfera: " << '\n';
    cin >> raio;
};

esfera::~esfera(){
    cout << "esfera" << "\n";
}

float esfera::getArea(){
    float A;
    A = 4*pi*(raio*raio);
    return A;
}

float esfera::getVolume(){
    float V;
    V = (4*pi*(raio*raio*raio))/3;
    return V;
};