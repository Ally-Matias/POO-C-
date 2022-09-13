#include <iostream>

using namespace std;

class Motor{
    private:
        int cilindros;
        int potencia;
    public:
        Motor();
        void Motor::inicializa(int cilindros, int potencia);

        int getCilindros();
        void setCilindros(int c);

        int getPotencia();
        void setPotencia(int p);

        void print();

};

void Motor::print(){
    cout << "Numero de cilindros: " << cilindros << "\n";
    cout << "Potencia:" << potencia << "\n";
};

int Motor::getCilindros(){return cilindros;}

void Motor::setCilindros(int c){cilindros=c;}

int Motor::getPotencia(){return potencia;}

void Motor::setPotencia(int p){potencia=p;}