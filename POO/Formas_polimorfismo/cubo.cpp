#include "cubo.hpp"

cubo::cubo():formaTridimen(){
    cout << "Digite o lado do cubo: " << '\n';
    cin >> lado;
};

cubo::~cubo(){
    cout << "cubo" << "\n";
}

float cubo::getArea(){
    float A;
    A = 6*(lado*lado);
    return A;
}

float cubo::getVolume(){
    float V;
    V = lado*lado*lado;
    return V;
};