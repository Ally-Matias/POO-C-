#include "Humano.h"

Humano::Humano(string No,string Sexo,string Idade,string Lingua,string Etnia){
    this->Nome=No;
    this->Sexo=Sexo;
    this->Idade=Idade;
    this->Lingua=Lingua;
    this->Etnia=Etnia;
};

void Humano::setNome(string No) { this->Nome = No; } 
string Humano::getNome() { return this->Nome; }
void Humano::setSexo(string Sexo) { this->Sexo = Sexo; } 
string Humano::getSexo() { return this->Sexo; }
void Humano::setIdade(string Idade) { this->Idade = Idade; } 
string Humano::getIdade() { return this->Idade; }
void Humano::setLingua(string Lingua) { this->Lingua = Lingua; } 
string Humano::getLingua() { return this->Lingua; }
void Humano::setEtnia(string Etnia) { this->Etnia = Etnia; } 
string Humano::getEtnia() { return this->Etnia; }
