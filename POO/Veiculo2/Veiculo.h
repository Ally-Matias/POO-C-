#include <iostream>

using namespace std;

class Veiculo{
    private:
        int velMax;
        int peso;
        int preco;
    public:
        Veiculo(){};
        Veiculo(int velMax, int peso, int preco);

        int getVelMax();
        void setVelMax(int vm);

        int getPeso();
        void setPeso(int p);

        int getPreco();
        void setPreco(int pr);

        void print();

};