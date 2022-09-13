#include "Restaurante.h"

void Restaurante::print(){
    Empresa::print();
    cout << "Tipo de Comida: " << TipComida << endl;
    cout << "Preco Medio: " << PrecMedio << endl;
}

string Restaurante::getTipComida(){return TipComida;}
void Restaurante::setTipComida(string tc){TipComida=tc;}

int Restaurante::getPrecMedio(){return PrecMedio;}
void Restaurante::setPrecMedio(int pm){PrecMedio=pm;}