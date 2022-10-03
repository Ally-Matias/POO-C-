#include "Conta.cpp"

class Poupanca:public Conta{
    float rendimento;
    public:
        Poupanca(float sa, float r);
        void CalculaRendimento();
        void setRendimento(float r);
        float getRendimento();
};