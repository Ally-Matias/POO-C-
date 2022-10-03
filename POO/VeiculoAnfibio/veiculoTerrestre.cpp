#include "veiculoTerrestre.h"

veiculoTerrestre::veiculoTerrestre(string nome,string marca,int numerochassi,int qtd_rodas,int qtd_eixos): veiculo(nome,marca,numerochassi){
    this->nome=nome;
    this->marca=marca;
    this->numerochassi=numerochassi;
    this->qtd_rodas=qtd_rodas;
    this->qtd_eixos=qtd_eixos;
}
int veiculoTerrestre::getQtdrodas(){
    return qtd_rodas;
}
void veiculoTerrestre::setQtdrodas(int r){
    qtd_rodas=r;
}
int veiculoTerrestre::getQtdeixos(){
    return qtd_eixos;
}
void veiculoTerrestre::setQtdeixos(int e){
    qtd_eixos=e;
}