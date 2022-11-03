#include "Empresa.h"

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