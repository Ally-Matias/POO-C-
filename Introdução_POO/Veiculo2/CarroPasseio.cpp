#include "CarroPasseio.h"

void CarroPasseio::print(){
    Veiculo::print();
    Motor::print();
}

string CarroPasseio::getModelo(){return modelo;}

void CarroPasseio::setModelo(string c){modelo=c;}

string CarroPasseio::getCor(){return cor;}

void CarroPasseio::setCor(string c){cor=c;}