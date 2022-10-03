#include "pacote.cpp"

class PacoteDoisDias:public pacote{
    float taxaAdc;
    public:
        PacoteDoisDias(){}
        PacoteDoisDias(string nd, string ed, string cd, string esd, string cepd, string nr, string er, string cr, string esr, string cepr, float pe, float pr, float ta);
        double calculaCusto();
        void setTaxaAdc(float ta);
        double getTaxaAdc();
};
