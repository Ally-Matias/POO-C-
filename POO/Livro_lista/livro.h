#include <iostream>

using namespace std;

class Livro{
    public:
        Livro(string name, string pname);

        void setCourseName(string name);
        string getCourseName();

        void setProfName(string pname);
        string getProfName();

        void displayMessage();

    private:
        string courseName;
        string profName;

};
