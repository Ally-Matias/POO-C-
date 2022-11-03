#include <iostream>

using namespace std;

class Tipo{
    string tipo;
    public:
        Tipo(){};
        Tipo(string t);
        void setTipo(string ti);
        void printTi();
};

Tipo::Tipo(string t){
    tipo=t;
};

void Tipo::printTi(){
    cout << "Tipo do Imovel: " << tipo << endl;
};

void Tipo::setTipo(string ti){tipo=ti;}