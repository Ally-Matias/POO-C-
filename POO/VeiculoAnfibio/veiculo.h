#pragma once
#include <iostream>
using namespace std;

class veiculo{
protected:
    string nome, marca;
    int numerochassi;
public:
    veiculo();
    veiculo(string nome, string marca, int numerochassi);
    string getNome();
    void setNome(string n);
    string getMarca();
    void setMarca(string m);
    int getNumchassi();
    void setNumchassi(int nc);
};