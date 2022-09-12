#include <iostream>

using namespace std;

class Conta{    
        int numero;
        string nome;
        float saldo;
    public:
        void inicializar(string no, float sa, int nu);
        void deposita(float valor);
        void consulta();
        int saque(float valor);

        void setNumero(int nu);
        void setNome(string no);
        void setSaldo(float sa);
        int getNumero();
        string getNome();
        float getSaldo();
};
