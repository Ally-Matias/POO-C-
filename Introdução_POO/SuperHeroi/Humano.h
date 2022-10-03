#include <iostream>

using namespace std;

class Humano{
    private:
       string Nome, Sexo, Idade, Lingua, Etnia;
    public:
        Humano(string No,string Sexo,string Idade,string Lingua,string Etnia);

        void setNome(string No);
        string getNome();
        void setSexo(string Sexo);
        string getSexo();
        void setIdade(string Idade);
        string getIdade();
        void setLingua(string Lingua); 
        string getLingua(); 
        void setEtnia(string Etnia);
        string getEtnia();
};