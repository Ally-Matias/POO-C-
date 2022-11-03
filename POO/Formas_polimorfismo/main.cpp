#include "circulo.cpp"
#include "quadrado.cpp"
#include "triangulo.cpp"
#include "esfera.cpp"
#include "cubo.cpp"
#include "tetraedro.cpp"


int main(){
forma *f[6] = {new circulo(), new quadrado(), new triangulo(), new esfera(), new cubo(), new tetraedro()};

int i;
for(i=0; i<6; i++){
    f[i]->~forma();
    //cout << f[i]->getArea() << endl;
};
}