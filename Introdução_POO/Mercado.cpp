#include <iostream>

using namespace std;

class Mercado{
    public:
        string nome;
        string tipo;
        int quant;
        int lucro;
        void imprimir();
        void porte(int x);

        Mercado(string nome, string tipo, int quant, int lucro);
};

Mercado::Mercado(string n, string t, int q, int l){
    nome = n;
    tipo = t;
    quant = q;
    lucro = l;
}

void Mercado::imprimir(){
    cout << "- Nome: " << nome << "\n";
    cout << "- Tipo: " << tipo << "\n";
    cout << "- Quantidade: " << quant << "\n";
    cout << "- Lucro: " << lucro << "\n";
}

void Mercado::porte(int x){
    if(x < 50){
        cout << "Ela é de pequeno porte!" << "\n";
    }else if(x >= 50 && x < 100){
        cout << "Ela é de medio porte!" << "\n";
    }else if(x >= 100){
        cout << "Ela é de grande porte!" << "\n";
    }
}

