#include <iostream>
#include "Livro.cpp"

using namespace std;

int main(){
    Livro gradeBook1("BBC221 - POO", "Matias");
    Livro gradeBook2("BCC202 - AED's I", "Matias");

    gradeBook1.displayMessage();

    cout << "   " << endl;
    
    gradeBook2.displayMessage();
    

    return 0;
}