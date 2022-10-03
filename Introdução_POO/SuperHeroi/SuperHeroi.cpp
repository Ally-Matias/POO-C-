#include "SuperHeroi.h"

SuperHeroi::SuperHeroi(string No,string Sexo,string Idade,string Lingua,string Etnia, string Nom,bool Venenoso,bool Alado,bool ferrao, string Codinome, string Trauma, string Poderes)
:Humano(No,Sexo,Idade,Lingua,Etnia), Inseto(Nom,Venenoso,Alado,ferrao){
    this->Codinome=Codinome;
    this->Trauma=Trauma;
    this->Poderes=Poderes;
};

void SuperHeroi::print(){
    cout << "##  HUMANO  ##" << endl;
    cout << Humano::getNome() << endl;
    cout << Humano::getSexo() << endl;
    cout << Humano::getIdade() << endl;
    cout << Humano::getLingua() << endl;
    cout << Humano::getEtnia() << endl;
    cout << "----------------------" << endl;
    
    cout << "##  INSETO  ##" << endl;
    cout << Inseto::getNome() << endl;
    cout << Inseto::getVenenoso() << endl;
    cout << Inseto::getAlado() << endl;
    cout << Inseto::getferrao() << endl;
    cout << "----------------------" << endl;

    cout << "##  SUPER HEROI  ##" << endl;
    cout << getCodinome() << endl;
    cout << getTrauma() << endl;
    cout << getPoderes() << endl;
    cout << "----------------------" << endl;
};

string SuperHeroi::getCodinome(){return Codinome;}

void SuperHeroi::setCodi(string Codinome) {Codinome = Codinome;}

string SuperHeroi::getTrauma(){return Trauma;}

void SuperHeroi::setTrauma(string Trauma) {Trauma = Trauma;}

string SuperHeroi::getPoderes(){return Poderes;}

void SuperHeroi::setPoderes(string Poderes) {Poderes = Poderes;}
