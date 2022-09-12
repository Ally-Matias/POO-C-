#include "Conta.h"

void Conta::inicializar(string no, float sa, int nu){
    setNome(no);
    setSaldo(sa);
    setNumero(nu);
    if(getSaldo() < 0){
        cout << "Erro na criação da conta!" << "\n";
    };
};

void Conta::deposita(float valor){
    setSaldo(getSaldo() + valor);
};

void Conta::consulta(){
  cout << "Cliente: " << getNome() << endl;
  cout << "Saldo Atual: " << getSaldo() << endl;
  cout << "Numero da Conta: " << getNumero() << endl;
};

int Conta::saque(float valor){
    if (getSaldo() < valor)
        return 0;
    else{
        setSaldo(getSaldo() - valor);
        return 1;
    };
};

// Get e Set

string Conta::getNome(){
    return nome;
}
void Conta::setNome(string no){
    nome=no;
}

int Conta::getNumero(){
    return numero;
}

void Conta::setNumero(int nu){
    numero=nu;
}

float Conta::getSaldo(){
    return saldo;
}

void Conta::setSaldo(float sa){
    saldo=sa;
}

// Herança
// Quando coloco a subclasse em um arquivo separado de conta.cpp, eu não consigo chamar as duas classes na main, exemplo:
// include "conta.cpp" e include "poupanca.cpp", o codigo quebra mas vou descobrir o pq!

class Poupanca:public Conta{
    private:
        int juros;
    public:
        void IniPoupanca(string no, float sa, int nu, int j);
        void imprimir();
};

void Poupanca::IniPoupanca(string no, float sa, int nu, int j){
    setNome(no);
    setSaldo(sa);
    setNumero(nu);
    juros=j;
}

void Poupanca::imprimir(){
    cout << "*CONTA POUPANCA*" << endl;
    cout << "Cliente: " << getNome() << endl;
    cout << "Saldo Atual: " << getSaldo() << endl;
    cout << "Numero da Conta: " << getNumero() << endl;
    cout << "Juros da Conta: " << juros << endl;
};







