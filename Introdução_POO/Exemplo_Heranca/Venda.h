#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "Cadastro.cpp"
#include "Imovel.cpp"
#include "Tipo.cpp"

class Venda: public Cadastro, Imovel, Tipo{
private:
    float valor;
public:
    Venda();
    Venda(string n, string f, string e, string b, float au, float at, int q, string tt, float v);
    void set();
    void print();
};
