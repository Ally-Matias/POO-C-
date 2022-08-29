#include <iostream>
#include "Mercado.cpp"

int main(){
    Mercado *frigorifico=new Mercado("frigorifico", "a", 2, 40);
    frigorifico->imprimir();
    frigorifico->porte(40);

    cout << "--------------------------" << "\n";

    Mercado *fruteira=new Mercado("fruteira", "b", 2, 60);
    fruteira->imprimir();
    fruteira->porte(60);

    cout << "--------------------------" << "\n";

    Mercado *atacadao=new Mercado("atacadao", "c", 2, 100);
    atacadao->imprimir();
    atacadao->porte(100);

    return 0;
}
