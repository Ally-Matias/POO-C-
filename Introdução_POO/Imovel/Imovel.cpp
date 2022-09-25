#include <iostream>

using namespace std;

class Imovel{
    private:
        string endereco;
        string bairro;
        float areaUtil;
        float areaTotal;
        double quartos;
    public:
        Imovel(){};
        Imovel(string e, string b, float au, float at, double q);
        void setEndereco(string e);
        void setBairro(string b);
        void setAreaUtil(float au);
        void setAreaTotal(float at);
        void setQuartos(double q);
        void printIm();
};

Imovel::Imovel(string e, string b, float au, float at, double q){
    endereco=e;
    bairro=b;
    areaUtil=au;
    areaTotal=at;
    quartos=q;
};

void Imovel::printIm(){
    cout << "Endereco: " << endereco << endl;
    cout << "Bairro: " << bairro << endl;
    cout << "Area Util: " << areaUtil << endl;
    cout << "Area Total: " << areaTotal << endl;
    cout << "Quantidade de quartos: " << quartos << endl;
};

void Imovel::setEndereco(string e){endereco=e;}
void Imovel::setBairro(string b){bairro=b;}
void Imovel::setAreaUtil(float au){areaUtil=au;}
void Imovel::setAreaTotal(float at){areaTotal=at;}
void Imovel::setQuartos(double q){quartos=q;}
