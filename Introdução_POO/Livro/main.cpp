#include <iostream>
#include "Livro.cpp"

using namespace std;

int main(){
    Livro gradeBook1("BBC221 - POO");
    Livro gradeBook2("BCC202 - AED's I");

    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName() << "\ngradeBook2 created for course: " << gradeBook2.getCourseName() << endl;

    return 0;
}