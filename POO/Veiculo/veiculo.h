using namespace std;

class Veiculo{
    public:
        int rodas;
        int vel;
        string marca;
        string tipo;
        int getVelMax();
        bool getLigado();
        void setLigado(int l);
        void imprimir();
    //private:
        void setVelMax(int vm);
        int velMax;
        bool ligado;

};

void Veiculo::imprimir(){
    cout << "Tipo do veiculo: " << tipo << "\n";
    cout << "Marca: " << marca << "\n";
    cout << "Este veiculo tem : " << rodas << " rodas\n";
    cout << "Velocidade Maxima: " << getVelMax() << "\n";
    cout << "Velocidade Atual:" << vel << "\n";
    if(getLigado()){
        cout << "O veiculo esta ligado!" << "\n";
    }else{
        cout << "O veiculo esta desligado!" << "\n";
    }
}

int Veiculo::getVelMax(){
    return velMax;
}

void Veiculo::setVelMax(int vm){
    velMax=vm;
}

bool Veiculo::getLigado(){
    return ligado;
}

void Veiculo::setLigado(int l){
    if(l==1){
        ligado=true;
    }else if(l==0){
        ligado=false;
    }
}


class Moto:public Veiculo{
    public:
        Moto();
};

Moto::Moto(){
    tipo="Moto";
    vel=0;
    rodas=2;
    marca="Honda";
    setVelMax(200);
    setLigado(false);

}

class Carro:public Veiculo{
    public:
        Carro();
};
Carro::Carro(){
    tipo="Carro";
    rodas=4;
    marca="BMW";
    setVelMax(400);
    setLigado(false);
    vel=0;
}

class Aviao:public Veiculo{
    public:
        Aviao();
};

Aviao::Aviao(){
    tipo="Aviao";
    rodas=3;
    marca="Latam";
    setVelMax(1000);
    setLigado(false);
    vel=0;
}
