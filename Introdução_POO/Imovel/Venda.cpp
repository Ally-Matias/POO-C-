#include "Imovel.cpp"
#include "Cadastro.cpp"
#include "Tipo.cpp"

class Venda:public Imovel, public Cadastro, public Tipo{
    float valor;
    public:
        Venda(string e, string b, float au, float at, double q, string n, string f, string t, float v)
        :Imovel(e, b, au, at, q), Cadastro(n, f), Tipo(t){
            valor=v;    
        };
        void setValor(float v);
        void print();
};

void Venda::print(){
    cout << "-----IMOVEL-----" << endl;
    Imovel::printIm();
    cout << " " << endl;
    cout << "-----CADASTRO-----" << endl;
    Cadastro::printCa();
    cout << " " << endl;
    cout << "-----TIPO DE IMOVEL-----" << endl;
    Tipo::printTi();
    cout << " " << endl;
    cout << "-----VALOR-----" << endl;
    cout << "Valor: " << valor << endl;
};