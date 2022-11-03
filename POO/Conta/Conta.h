#pragma once
#include <iostream>

using namespace std;

class Conta{    
        float saldo;
    public:
        Conta(float sa);
        float credito(float valor);
        float debito(float valor);

        void setSaldo(float sa);
        float getSaldo();
};
