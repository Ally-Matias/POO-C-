#pragma once
#include "Conta.h"

Conta::Conta(float sa){
    if(sa < 0){
        saldo=0;
        cout << "Erro na criação da conta! seu saldo é: 0" << "\n";
    }else{
        saldo=sa;
    }
};

float Conta::credito(float valor){
    saldo = saldo + valor;
};

float Conta::debito(float valor){
    if (valor > saldo){
        cout << "Erro! valor maior que o saldo" << endl;
    }else if(saldo - valor >= 0){
        saldo = saldo - valor;
    };
};

// Get e Set

float Conta::getSaldo(){
    return saldo;}

void Conta::setSaldo(float sa){
    saldo=sa;
}




