#include "Empresa.cpp"

using namespace std;

class Restaurante:public Empresa{
    private:
        string TipComida;
        int PrecMedio;
    public:
        Restaurante(string n, string e, string c, string es, string ce, string t, string tc, int pm)
        :Empresa{n ,e ,c ,es ,ce ,t}{
            TipComida=tc;
            PrecMedio=pm;
        }
        string getTipComida();
        void setTipComida(string tc);

        int getPrecMedio();
        void setPrecMedio(int pm);

        void print();

};

void Restaurante::print(){
    Empresa::print();
    cout << "Tipo de Comida: " << TipComida << endl;
    cout << "Preco Medio: " << PrecMedio << endl;
}

string Restaurante::getTipComida(){return TipComida;}
void Restaurante::setTipComida(string tc){TipComida=tc;}

int Restaurante::getPrecMedio(){return PrecMedio;}
void Restaurante::setPrecMedio(int pm){PrecMedio=pm;}
