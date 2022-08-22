#include <iostream>
#include "veiculo.h"

using namespace std;

// codigo nao finalizado, ainda necessita de mudanças. 

// Moto = 1, Carro = 2, Aviao = 3
// 1 para ligar veiculo, 0 para desligar

int main(){
    Veiculo *vei=new Veiculo();

    Moto *mot=new Moto();
    Carro *car=new Carro();
    Aviao *avi=new Aviao();

    vei->setLigado(1);

    vei->imprimir();
    cout << "-------------------------------- \n";
    mot->imprimir();
    cout << "-------------------------------- \n";
    car->imprimir();
    cout << "-------------------------------- \n";
    avi->imprimir();

    return 0;
}
