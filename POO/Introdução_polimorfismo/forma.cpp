#include "forma.hpp"
#include <iostream>
using namespace std;

Forma::Forma(double xx, double yy) : x{xx}, y{yy} {

};

void Forma::imprimir(){
    cout << "Origem: (" << x << "," << y << ")" << endl;
}