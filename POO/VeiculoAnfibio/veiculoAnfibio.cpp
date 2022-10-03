#include "veiculoAnfibio.h"

veiculoAnfibio::veiculoAnfibio(string nome,string marca,string porte,int numerochassi,int qtd_rodas,int qtd_eixos,int qtd_pas,int qtd_ar): veiculoAquatico(nome,marca,numerochassi,porte,qtd_pas),veiculoTerrestre(nome,marca,numerochassi,qtd_rodas,qtd_eixos),veiculo(nome,marca,numerochassi){
    this->qtd_ar=qtd_ar;
}

void veiculoAnfibio::print(){
    cout << "Nome: " << getNome() << endl;
    cout << "Marca: " << getMarca() << endl;
    cout << "Porte: " << getPorte() << endl;
    cout << "Numero do chassi: " << getNumchassi() << endl;
    cout << "Quantidade de rodas: " << getQtdrodas() << endl;
    cout << "Quantidade de eixos: " << getQtdeixos() << endl;
    cout << "Quantidade de pas: " << getQtdpas() << endl;
    cout << "Quantidade de ar: " << getQtdar() << endl;
};

int veiculoAnfibio::getQtdar(){
    return qtd_ar;
}
void veiculoAnfibio::setQtdar(int q){
    qtd_ar=q;
}