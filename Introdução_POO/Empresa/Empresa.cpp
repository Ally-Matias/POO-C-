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
        Empresa();
        void Empresa::inicializa(string nome, string endereco, string cidade, string estado, string cep, string telefone); // ou int

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

void Empresa::inicializa(string n, string e, string c, string es, string ce, string t){
    nome=n;
    endereco=e;
    cidade=c;
    estado=es;
    cep=ce;
    telefone=t;
};

void Empresa::print(){
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl;
    cout << "Cidade: " << cidade << endl;
    cout << "Estado: " << estado << endl;
    cout << "CEP: " << cep << endl;
    cout << "Telefone: " << telefone << endl;
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


class Restaurante:public Empresa{
    private:
        string TipComida;
        int PrecMedio;
    public:
        Restaurante(); // falta coisa
        string getTipComida();
        void setTipComida(string tc);

        int getPrecMedio();
        void setPrecMedio(int pm);

        void print(); // falta coisa

};

string Restaurante::getTipComida(){return TipComida;}
void Restaurante::setTipComida(string tc){TipComida=tc;}

int Restaurante::getPrecMedio(){return PrecMedio;}
void Restaurante::setPrecMedio(int pm){PrecMedio=pm;}