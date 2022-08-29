#include <iostream>
#include "Mercado2.cpp"

int main(){
    Mercado *frigorifico = new Mercado("frigorifico", "a", 1, 40);
    frigorifico->imprimir();
    frigorifico->porte();

    cout << "--------------------------" << "\n";

    Mercado *fruteira = new Mercado("fruteira", "b", 2, 60);
    fruteira->imprimir();
    fruteira->porte();

    cout << "--------------------------" << "\n";

    Mercado *atacadao = new Mercado("atacadao", "c", 3, 100);
    atacadao->imprimir();
    atacadao->porte();

    return 0;
}

