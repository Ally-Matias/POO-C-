#include "Inseto.cpp"
#include "Humano.cpp"

class SuperHeroi:public Humano, public Inseto{
    private:
        string Codinome;
        string Trauma;
        string Poderes;
    public:
        SuperHeroi(string No,string Sexo,string Idade,string Lingua,string Etnia, string Nom,bool Venenoso,bool Alado,bool ferrao, string Codinome, string Trauma, string Poderes);
        void setCodi(string Codinome);
        string getCodinome();
        void setTrauma(string Trauma);
        string getTrauma();
        void setPoderes(string Poderes);
        string getPoderes();
        void print();
        
};