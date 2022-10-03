#include "PacoteDoisDias.h"

PacoteDoisDias::PacoteDoisDias(string nd, string ed, string cd, string esd, string cepd, string nr, string er, string cr, string esr, string cepr, float pe, float pr, float ta):pacote(nd, ed, cd, esd, cepd, nr, er, cr, esr, cepr, pe, pr){
    taxaAdc=ta;
}

double PacoteDoisDias::calculaCusto(){
    double var;
    var = pacote::calculaCusto() + taxaAdc;
    return var;
}

void PacoteDoisDias::setTaxaAdc(float ta){taxaAdc=ta;}
double PacoteDoisDias::getTaxaAdc(){return taxaAdc;}