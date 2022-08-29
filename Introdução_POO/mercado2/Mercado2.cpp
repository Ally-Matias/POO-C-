#include <iostream>

using namespace std;

class Mercado{
    public:
        string getNome();
        void setNome(string n);

        string getTipo();
        void setTipo(string t);

        int getQuant();
        void setQuant(int q);

        int getLucro();
        void setLucro(int l);

        void imprimir();
        void porte();

        Mercado(string nome, string tipo, int quant, int lucro);

    private: 
        string nome;
        string tipo;
        int quant;
        int lucro;
};

Mercado::Mercado(string n, string t, int q, int l){
    setNome(n);
    setTipo(t);
    setQuant(q);
    setLucro(l);
}

void Mercado::imprimir(){
    cout << "- Nome: " << getNome() << "\n";
    cout << "- Tipo: " << getTipo() << "\n";
    cout << "- Quantidade: " << getQuant() << "\n";
    cout << "- Lucro: " << getLucro() << "\n";
}

void Mercado::porte(){
    if(getLucro() < 50){
        cout << "Ela é de pequeno porte!" << "\n";
    }else if(getLucro() >= 50 && getLucro() < 100){
        cout << "Ela é de medio porte!" << "\n";
    }else if(getLucro() >= 100){
        cout << "Ela é de grande porte!" << "\n";
    }
}

// get e set 

string Mercado::getNome(){
    return nome;
}
void Mercado::setNome(string n){
    nome=n;
}

string Mercado::getTipo(){
    return tipo;
}

void Mercado::setTipo(string t){
    tipo=t;
}

int Mercado::getQuant(){
    return quant;
}

void Mercado::setQuant(int q){
    quant=q;
}

int Mercado::getLucro(){
    return lucro;
}

void Mercado::setLucro(int l){
    lucro=l;
}

