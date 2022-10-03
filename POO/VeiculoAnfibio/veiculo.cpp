#pragma once
#include "veiculo.h"

veiculo::veiculo(string nome, string marca, int numerochassi){
    this->nome=nome;
    this->marca=marca;
    this->numerochassi=numerochassi;
}
string veiculo::getNome(){
    return nome;
}
void veiculo::setNome(string n){
    this->nome=n;
}
string veiculo::getMarca(){
    return marca;
}
void veiculo::setMarca(string m){
    this->marca=m;
}
int veiculo::getNumchassi(){
    return numerochassi;
}
void veiculo::setNumchassi(int nc){
    this->numerochassi=nc;
}