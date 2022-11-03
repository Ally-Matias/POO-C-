#include "Carnivora.cpp"

class gato:public Carnivora{
    public:
    gato():Carnivora(){};
    void som(){
        cout << "gato" << endl;
    }
};