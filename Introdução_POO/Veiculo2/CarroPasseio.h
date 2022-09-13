#include "Veiculo.cpp" 
#include "Motor.cpp"

class CarroPasseio:public Veiculo, public Motor{
    private:
        string modelo;
        string cor;
    public:
        CarroPasseio(int velMax, int peso, int preco, int cilindros, int potencia, string modelo, string cor)
        :Veiculo(velMax, peso, preco), Motor(cilindros, potencia){
            this->modelo=modelo;
            this->cor=cor;
        }

        string getModelo();
        void setModelo(string m);

        string getCor();
        void setCor(string c);

        void print();
};
