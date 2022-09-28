#include "veiculoAnfibio.h"

veiculoAnfibio::veiculoAnfibio(string nome,string marca,string porte,int numerochassi,int qtd_rodas,int qtd_eixos,int qtd_pas,int qtd_ar): veiculoAquatico(nome,marca,numerochassi,porte,qtd_pas),veiculoTerrestre(nome,marca,numerochassi,qtd_rodas,qtd_eixos),veiculo(nome,marca,numerochassi){
    this->nome=nome;
    this->marca=marca;
    this->porte=porte;
    this->numerochassi=numerochassi;
    this->qtd_rodas=qtd_rodas;
    this->qtd_eixos=qtd_eixos;
    this->qtd_pas=qtd_pas;
    this->qtd_ar=qtd_ar;
}
    int veiculoAnfibio::getQtdar(){
        cout << qtd_ar << endl;
        return qtd_ar;
    }
    void veiculoAnfibio::setQtdar(int q){
        qtd_ar=q;
    }