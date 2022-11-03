#include <iostream>
#include "Recuperacao.cpp"

using namespace std;

int Recuperacao::n=0;

int main(){
    Recuperacao r1, r2, r3;
    cout << r1.getRec() << endl;

    {
        Recuperacao r4, r5, r6;
        cout << r1.getRec() << endl;
    }

    cout << r1.getRec();
    return 0;
}