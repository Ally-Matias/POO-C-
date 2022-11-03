#include <iostream>

using namespace std;

class Cadastro{
    string nome;
    string fone;
    public:
        Cadastro(){};
        Cadastro(string n, string f);
        void setNome(string n);
        void setFone(string f);
        void printCa();
};

Cadastro::Cadastro(string n, string f){
    nome=n;
    fone=f;
};

void Cadastro::printCa(){
    cout << "Nome: " << nome << endl;
    cout << "Fone: " << fone << endl;
};

void Cadastro::setNome(string n){nome=n;}
void Cadastro::setFone(string f){fone=f;}