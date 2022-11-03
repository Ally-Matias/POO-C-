#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(float sa, float tx):Conta(sa){
    taxa=tx;
}

void ContaCorrente::setTaxa(float tx){taxa=tx;}
float ContaCorrente::getTaxa(){return taxa;}

float ContaCorrente::credito(float valor){
    float valor2;
    valor2 = valor - taxa;
    setSaldo(getSaldo() + valor2);
}

float ContaCorrente::debito(float valor){
    if (valor > getSaldo()){
        cout << "Erro! valor maior que o saldo" << endl;
    }else if(getSaldo() - valor >= 0){
        float valor2;
        valor2 = valor - taxa;
        setSaldo(getSaldo() - valor2);
    };
}