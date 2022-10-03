#include <iostream>

using namespace std;

class Inseto{
    private:
       string Nome;
       bool Venenoso, Alado, ferrao = false;
    public:
        Inseto(string Nom,bool Venenoso,bool Alado,bool ferrao);

        void setNome(string Nom);
        string getNome();
        void setVenenoso(bool Venenoso);
        bool getVenenoso();
        void setAlado(bool Alado);
        bool getAlado();
        void setferrao(bool ferrao); 
        bool getferrao(); 
};