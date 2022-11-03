#include "Motor.h"

Motor::Motor(int c, int p){
    cilindros=c;
    potencia=p;
}

void Motor::print(){
    cout << "Numero de cilindros: " << cilindros << "\n";
    cout << "Potencia:" << potencia << "\n";
};

int Motor::getCilindros(){return cilindros;}

void Motor::setCilindros(int c){cilindros=c;}

int Motor::getPotencia(){return potencia;}

void Motor::setPotencia(int p){potencia=p;}