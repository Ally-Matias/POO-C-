#include <iostream>

using namespace std;

class Recuperacao{
    private:
        static int n;

    public:
        Recuperacao(){
            n++;
        }
        int getRec(){
            return n;
        }
        ~Recuperacao(){
            n--;
        }
};