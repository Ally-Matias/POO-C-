#pragma once
#include "Laurasiatheria.cpp"

class Carnivora: public Laurasiatheria{
    public:
    Carnivora():Laurasiatheria(){};
    void som(){
        cout << "carnivora" << endl;
    }
};