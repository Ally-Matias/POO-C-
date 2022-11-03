#pragma once
#include "Laurasiatheria.cpp"

class Artiodactyla:public Laurasiatheria{
    public:
    Artiodactyla():Laurasiatheria(){};
    void som(){
        cout << "artio" << endl;
    }
};