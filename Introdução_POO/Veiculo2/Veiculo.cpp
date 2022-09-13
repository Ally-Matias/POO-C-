#include <iostream>

using namespace std;

class Veiculo{
    private:
        int velMax;
        int peso;
        int preco;
    public:
        Veiculo();
        void Veiculo::inicializa(int velMax, int peso, int preco);

        int getVelMax();
        void setVelMax(int vm);

        int getPeso();
        void setPeso(int p);

        int getPreco();
        void setPreco(int pr);

        void print();

};

void Veiculo::print(){
    cout << "Velocidade Maxima: " << velMax << "\n";
    cout << "Peso:" << peso << "\n";
    cout << "Preco:" << preco << "\n";
}

int Veiculo::getVelMax(){return velMax;}

void Veiculo::setVelMax(int vm){velMax=vm;}

int Veiculo::getPeso(){return peso;}

void Veiculo::setPeso(int p){peso=p;}

int Veiculo::getPreco(){return preco;}

void Veiculo::setPreco(int pr){preco=pr;}