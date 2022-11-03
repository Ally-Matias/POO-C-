#include <iostream>

using namespace std;

class Motor{
    private:
        int cilindros;
        int potencia;
    public:
        Motor(){};
        Motor(int cilindros, int potencia);

        int getCilindros();
        void setCilindros(int c);

        int getPotencia();
        void setPotencia(int p);

        void print();

};
