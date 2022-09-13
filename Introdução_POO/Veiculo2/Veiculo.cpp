#include "Veiculo.h"

Veiculo::Veiculo(int vm, int p, int pr){
    velMax=vm;
    peso=p;
    preco=pr;
}

void Veiculo::print(){
    cout << "Velocidade Maxima: " << velMax << "\n";
    cout << "Peso:" << peso << "\n";
    cout << "Preco:" << preco << "\n";
}

int Veiculo::getVelMax(){return velMax;}

void Veiculo::setVelMax(int vm){velMax=vm;}

int Veiculo::getPeso(){return peso;}

void Veiculo::setPeso(int p){peso=p;}

int Veiculo::getPreco(){return preco;}

void Veiculo::setPreco(int pr){preco=pr;}