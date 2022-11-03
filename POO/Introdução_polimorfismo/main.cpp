#include "forma.cpp"
#include "retangulo.cpp"
#include "circulo.cpp"
#include <iostream>
using namespace std;

int main(){
/*
    cout << "\nINSTANCIANDO SEM PONTEIROS " << endl;
    Forma ponto {10.0, 20.0};
    cout << "forma: " << endl;
    ponto.imprimir();
    cout << "\nArea = " << ponto.area() << endl;

    cout << "\nretangulo: " << endl;
    Retangulo ret {0, 0, 10, 50};
    ret.imprimir();

    cout << " " << endl;
///////////////////////////////////////////////////////
    cout << "\nACESSANDO POR PONTEIROS " << endl;
    cout << " " << endl;

    // aqui vai sair o resultado igual ao anterior
    Forma* ponto1 = new Forma{10.0, 20.0};
    cout << "forma: " << endl;
    ponto1->imprimir();
    cout << "\nArea = " << ponto1->area() << endl;

    cout << "\nretangulo: " << endl;
    Retangulo* ret1 = new Retangulo{0, 0, 10, 50};
    ret1->imprimir();

    cout << " " << endl;
///////////////////////////////////////////////////////
    cout << "\nPONTEIRO DE FORMA APONTADO PARA RETANGULO E CIRCULO " << endl;
    cout << " " << endl;

    // " um ponteiro de forma generico "
    // se tirar o virtual de forma, aqui iria chamar o imprimir de forma e n de retangulo
    cout << "\nretangulo: " << endl;
    Forma* ret2 = new Retangulo{0, 0, 10, 50};
    ret2->imprimir();

    cout << "\ncirculo: " << endl;
    Forma* cir = new Circulo{0, 0, 10};
    cir->imprimir();
*/
///////////////////////////////////////////////////////////
    cout << "\nINICIO DO VETOR" << endl;

    Forma* vetor_formas[4];
//    vetor_formas[0] = new Forma{100, 120}; isso n seria possivel, pois forma é uma classe abstrata
    vetor_formas[0] = new Retangulo{15, 35, 40, 31};
    vetor_formas[1] = new Retangulo{10, 30, 45, 21};
    vetor_formas[2] = new Circulo{0, 0, 15.5};
    vetor_formas[3] = new Circulo{9.0, 0.75, 18};

    for(auto x : vetor_formas){
        cout << "Forma: " << endl;
        x->imprimir();
        cout << "\n-----------------------------" << endl;       
    }

    return 0;

// aqui mostra como instanciar varios objetos derivados apontando para a classe base abstrata.
// classe abstrata : uma classe que n se instancia, apenas serve como base para instanciar outras classes derivadas.
// e nas classes abstratas tem as funções virtuais pura, q é poliformica mas n está implementada na classe base.
// as classes concretas derivadas devem OBRIGATORIAMENTE sobrepor as funções virtuais puras da classe base.
// no nosso caso é area().

}