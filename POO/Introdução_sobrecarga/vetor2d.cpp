#include <iostream>

using namespace std;

// exemplo de sobrecarga de operadores

class Vetor2d{
    private:
        float x, y;
    public:
        Vetor2d operator + (Vetor2d v){
            Vetor2d ret;
            ret.x = x+v.x;
            ret.y = y+v.y;
            return ret;
        }
};
