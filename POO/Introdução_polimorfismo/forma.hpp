#pragma once

class Forma{ // abstrata
    protected:
        double x,y;
    public:
        Forma(double=0, double=0);
        virtual ~Forma(){} // destrutor virtual para ele saber quem destruir msm os outros detrutores sendo nomes diferentes

        // virtual permite o polimorfismo 
        virtual void imprimir();
        virtual double area() = 0; // função virtual pura

// para se tornar abstrata, basta colocar uma função virtual pura
};

