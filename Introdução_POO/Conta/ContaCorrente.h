#include "Conta.cpp"

class ContaCorrente:public Conta{
    float taxa;
    public:
        ContaCorrente(float sa, float tx);
        void setTaxa(float tx);
        float getTaxa();
        float credito(float valor);
        float debito(float valor);
};