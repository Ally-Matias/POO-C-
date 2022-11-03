#include "Poupanca.h"

Poupanca::Poupanca(float sa, float r):Conta(sa){
    rendimento=r;
}

void Poupanca::setRendimento(float r){rendimento=r;}
float Poupanca::getRendimento(){return rendimento;}

void Poupanca::CalculaRendimento(){
    float rend;
    rend = Conta::getSaldo() * rendimento;
    cout << rend << endl;
};