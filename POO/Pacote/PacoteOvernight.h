#include "pacote.cpp"

class PacoteOvernight:public pacote{
    float taxaAdc;
    public:
        PacoteOvernight(){}
        PacoteOvernight(string nd, string ed, string cd, string esd, string cepd, string nr, string er, string cr, string esr, string cepr, float pe, float pr, float ta);
        double calculaCusto();
        void setTaxaAdc(float ta);
        double getTaxaAdc();
};
