#include "pacote.h"

pacote::pacote(string nd, string ed, string cd, string esd, string cepd, string nr, string er, string cr, string esr, string cepr, float pe, float pr){
    nomeDest=nd;
    enderDest=ed;
    cidadeDest=cd;
    estadoDest=esd;
    cepDest=cepd;
    nomeRemet=nr;
    endeRemet=er;
    cidadeRemet=cr;
    estadoRemet=esr;
    cepRemet=cepr;
    peso=pe;
    preco=pr;
};

double pacote::calculaCusto(){
    double custo;
    custo = peso * preco;
    cout << custo << endl;
    return custo;
};

void pacote::setNomeDest(string nd){nomeDest=nd;}

void pacote::setEnderDest(string ed){enderDest=ed;}

void pacote::setCidadeDest(string cd){cidadeDest=cd;}

void pacote::setEstadoDest(string ed){estadoDest=ed;}

void pacote::setCepDest(string cepd){cepDest=cepd;}

void pacote::setNomeRemet(string nr){nomeRemet=nr;}

void pacote::setEndeRemet(string er){endeRemet=er;}

void pacote::setCidadeRemet(string cr){cidadeRemet=cr;}

void pacote::setEstadoRemet(string er){estadoRemet=er;}

void pacote::setCepRemet(string cepr){cepRemet=cepr;}

void pacote::setPeso(float pe){
    if(pe<=0){
        cout<<"Valor menor ou igual a zero!";
    }else{
        peso=pe;
    }
}
void pacote::setPreco(float pr){
    if(pr<=0){
        cout<<"Valor menor ou igual a zero!";
    }else{
        preco=pr;
    }
}
