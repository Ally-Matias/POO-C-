#include <iostream>

using namespace std;

class Empresa{
    private:
        string nome;
        string endereco;
        string cidade;
        string estado;
        string cep;
        string telefone;
    public:
        Empresa(){}
        Empresa(string nome, string endereco, string cidade, string estado, string cep, string telefone); 

        string getNome();
        void setNome(string n);

        string getEndereco();
        void setEndereco(string e);

        string getCidade();
        void setCidade(string c);

        string getEstado();
        void setEstado(string es);

        string getCep();
        void setCep(string ce);

        string getTelefone();
        void setTelefone(string t);

        void print();
};
