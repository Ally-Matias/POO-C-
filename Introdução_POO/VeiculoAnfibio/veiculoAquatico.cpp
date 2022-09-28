#include "veiculoAquatico.h"

veiculoAquatico::veiculoAquatico(string nome,string marca,int numerochassi,string porte,int qtd_pas): veiculo(nome,marca,numerochassi){
    this->porte=porte;
    this->nome=nome;
    this->marca=marca;
    this->numerochassi=numerochassi;
    this->qtd_pas=qtd_pas;
}
string veiculoAquatico::getPorte(){
    cout << porte << endl;
    return porte;
}
void veiculoAquatico::setPorte(string porte){
    this->porte=porte;
}
int veiculoAquatico::getQtdpas(){
    cout << qtd_pas << endl;
    return qtd_pas;
}
void veiculoAquatico::setQtdpas(int pas){
    this->qtd_pas=pas;
}