#pragma once
#include "veiculoAquatico.h"
#include "veiculoTerrestre.h"

class veiculoAnfibio: public veiculoTerrestre, public veiculoAquatico{
private:
    int qtd_ar;
public:
    veiculoAnfibio();
    veiculoAnfibio(string nome,string marca,string porte,int numerochassi,int qtd_rodas,int qtd_eixos,int qtd_pas,int qtd_ar);
    int getQtdar();
    void setQtdar(int q);
};