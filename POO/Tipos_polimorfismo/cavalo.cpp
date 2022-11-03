#include "Perissodactyla.cpp"

class cavalo:public Perissodactyla{
    public:
    cavalo():Perissodactyla(){};
    void som(){
        cout << "cavalo" << endl;
    };
};