#pragma once
#include <iostream>

using namespace std;

class pacote{
    string nomeDest;
    string enderDest;
    string cidadeDest;
    string estadoDest;
    string cepDest;
    string nomeRemet;
    string endeRemet;
    string cidadeRemet;
    string estadoRemet;
    string cepRemet;
    float peso;
    float preco;

    public:
        pacote(){};
        pacote(string nd, string ed, string cd, string esd, string cepd, string nr, string er, string cr, string esr, string cepr, float pe, float pr);
        double calculaCusto();
        void setNomeDest(string nd);
        void setEnderDest(string ed);
        void setCidadeDest(string cd);
        void setEstadoDest(string esd);
        void setCepDest(string cepd);
        void setNomeRemet(string nr);
        void setEndeRemet(string er);
        void setCidadeRemet(string cr);
        void setEstadoRemet(string esr);
        void setCepRemet(string cepr);
        void setPeso(float pe);
        void setPreco(float pr);
        float getPeso();
};
