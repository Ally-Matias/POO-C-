#include "Veiculo.cpp" 
#include "Motor.cpp"

class CarroPasseio:public Veiculo, public Motor{
    private:
        string modelo;
        string cor;
    public:
        CarroPasseio(int velMax, int peso, int preco, int cilindros, int potencia);

        string getModelo();
        void setModelo(string m);

        string getCor();
        void setCor(string c);

        void print();
};

string CarroPasseio::getModelo(){return modelo;}

void CarroPasseio::setModelo(string c){modelo=c;}

string CarroPasseio::getCor(){return cor;}

void CarroPasseio::setCor(string c){cor=c;}