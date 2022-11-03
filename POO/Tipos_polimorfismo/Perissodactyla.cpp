#pragma once
#include "Laurasiatheria.cpp"

class Perissodactyla:public Laurasiatheria{
    public:
    Perissodactyla():Laurasiatheria(){}
    void som(){
        cout << "perisso" << endl;
    }
};