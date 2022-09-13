#include <iostream>

using namespace std;

class Empresa{
    private:
        string nome;
        string endereco;
        string cidade;
        string estado;
        string cep;
        string telefone;
    public:
        Empresa(){}
        Empresa(string nome, string endereco, string cidade, string estado, string cep, string telefone); 

        string getNome();
        void setNome(string n);

        string getEndereco();
        void setEndereco(string e);

        string getCidade();
        void setCidade(string c);

        string getEstado();
        void setEstado(string es);

        string getCep();
        void setCep(string ce);

        string getTelefone();
        void setTelefone(string t);

        void print();
};

Empresa::Empresa(string n, string e, string c, string es, string ce, string t){
    nome=n;
    endereco=e;
    cidade=c;
    estado=es;
    cep=ce;
    telefone=t;
};

void Empresa::print(){
    cout << "Nome da Empresa: " << nome << endl;
    cout << "Localizada no Endereco: " << endereco << endl;
    cout << "Cidade de: " << cidade << endl;
    cout << "No Estado: " << estado << endl;
    cout << "CEP: " << cep << endl;
    cout << "Telefone para contato: " << telefone << endl;
};

string Empresa::getNome(){return nome;}
void Empresa::setNome(string n){nome=n;}

string Empresa::getEndereco(){return endereco;}
void Empresa::setEndereco(string e){endereco=e;}

string Empresa::getCidade(){return cidade;}
void Empresa::setCidade(string c){cidade=c;}

string Empresa::getEstado(){return estado;}
void Empresa::setEstado(string es){estado=es;}

string Empresa::getCep(){return cep;}
void Empresa::setCep(string ce){cep=ce;}

string Empresa::getTelefone(){return telefone;}
void Empresa::setTelefone(string t){telefone=t;}
