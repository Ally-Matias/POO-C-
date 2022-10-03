#include "Inseto.h"

Inseto::Inseto(string Nom,bool Venenoso,bool Alado,bool ferrao){
    this->Nome=Nom;
    this->Venenoso=Venenoso;
    this->Alado=Alado;
    this->ferrao=ferrao;
};

void Inseto::setNome(string Nom) { this->Nome = Nom; } 
string Inseto::getNome() { return this->Nome; }
void Inseto::setVenenoso(bool Venenoso) { this->Venenoso = Venenoso; } 
bool Inseto::getVenenoso() { return this->Venenoso; }
void Inseto::setAlado(bool Alado) { this->Alado = Alado; } 
bool Inseto::getAlado() { return this->Alado; }
void Inseto::setferrao(bool ferrao) { this->ferrao = ferrao; } 
bool Inseto::getferrao() { return this->ferrao; }
