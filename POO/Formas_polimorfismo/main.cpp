#include "circulo.cpp"
#include "quadrado.cpp"
#include "triangulo.cpp"
#include "esfera.cpp"
#include "cubo.cpp"
#include "tetraedro.cpp"


int main(){
forma *f[6] = {new circulo(), new quadrado(), new triangulo(), new esfera(), new cubo(), new tetraedro()};


for(auto x : f){
        cout << "Forma: " << endl;
        x->~forma();
        cout << "\n-----------------------------" << endl;       
    }

//int i;
//for(i=0; i<6; i++){
//    f[i]->~forma();
//    //cout << f[i]->getArea() << endl;
//};
}