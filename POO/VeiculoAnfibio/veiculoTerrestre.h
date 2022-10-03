#pragma once
#include "veiculo.h"

class veiculoTerrestre: virtual public veiculo{
protected:
    int qtd_rodas, qtd_eixos;
public:
    veiculoTerrestre();
    veiculoTerrestre(string nome,string marca,int numerochassi,int qtd_rodas,int qtd_eixos);
    int getQtdrodas();
    void setQtdrodas(int r);
    int getQtdeixos();
    void setQtdeixos(int e);
};