#include "pacote.cpp"
#include "PacoteDoisDias.cpp"
#include "PacoteOvernight.cpp"

int main(){
    cout << "Pacote sem taxas: " << endl;
    pacote package{"a", "a","a", "a","a", "a","a", "a","a", "a",2, 2};
    cout << package.calculaCusto() << endl;

    cout << "Pacote com taxas: " << endl;
    PacoteDoisDias package2{"a", "a","a", "a","a", "a","a", "a","a", "a",2, 2, 3};
    cout << package2.calculaCusto() << endl;

    cout << "Pacote com taxas, multiplicado pelo peso:" << endl;
    PacoteOvernight package3{"a", "a","a", "a","a", "a","a", "a","a", "a",2, 2, 3};
    cout << package3.calculaCusto() << endl;
    
}

// Esse código deu um erro interessante, "error: redefinition of class", resolvi colocando #pragma once na classe pai (pacote).