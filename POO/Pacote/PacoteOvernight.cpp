#include "PacoteOvernight.h"

PacoteOvernight::PacoteOvernight(string nd, string ed, string cd, string esd, string cepd, string nr, string er, string cr, string esr, string cepr, float pe, float pr, float ta):pacote(nd, ed, cd, esd, cepd, nr, er, cr, esr, cepr, pe, pr){
    taxaAdc=ta;
}

double PacoteOvernight::calculaCusto(){
    double var;
    var = pacote::calculaCusto() + (taxaAdc*getPeso());
    return var;
}

void PacoteOvernight::setTaxaAdc(float ta){taxaAdc=ta;}
double PacoteOvernight::getTaxaAdc(){return taxaAdc;}