#include "veiculoAnfibio.h"

veiculoAnfibio::veiculoAnfibio(string nome,string marca,string porte,int numerochassi,int qtd_rodas,int qtd_eixos,int qtd_pas,int qtd_ar): veiculoAquatico(nome,marca,numerochassi,porte,qtd_pas),veiculoTerrestre(nome,marca,numerochassi,qtd_rodas,qtd_eixos),veiculo(nome,marca,numerochassi){
    this->qtd_ar=qtd_ar;
}
    int veiculoAnfibio::getQtdar(){
        cout << qtd_ar << endl;
        return qtd_ar;
    }
    void veiculoAnfibio::setQtdar(int q){
        qtd_ar=q;
    }