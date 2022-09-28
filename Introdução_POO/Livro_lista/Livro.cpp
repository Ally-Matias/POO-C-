#include "livro.h"

Livro::Livro(string name, string pname){
    setCourseName(name);
    setProfName(pname);

}

void Livro::setCourseName(string name){
    courseName = name;
}
string Livro::getCourseName(){
    return courseName;
}

void Livro::setProfName(string pname){
    profName = pname;
}
string Livro::getProfName(){
    return profName;
}

void Livro::displayMessage(){
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl; 
    cout << "O nome do Professor é " << getProfName() << endl;

}
