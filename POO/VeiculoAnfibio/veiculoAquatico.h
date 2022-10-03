#pragma once
#include "veiculo.cpp"

class veiculoAquatico: virtual public veiculo{
protected:
    string porte;
    int qtd_pas;
public:
    veiculoAquatico();
    veiculoAquatico(string nome,string marca,int numerochassi,string porte,int qtd_pas);
    string getPorte();
    void setPorte(string porte);
    int getQtdpas();
    void setQtdpas(int pas);
};