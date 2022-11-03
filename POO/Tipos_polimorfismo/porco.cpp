#include "Artiodactyla.cpp"

class porco:public Artiodactyla{
    public:
    porco():Artiodactyla(){};
    void som(){
        cout << "porco" << endl;
    };
};