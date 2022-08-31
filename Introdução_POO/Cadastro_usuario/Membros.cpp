//biblioteca
#include <iostream>

using namespace std;

//classe
class Membros{
    private:
        string nome;
        string ocupacao;
        string email;
        string palavraChave;
        int idade;
        char sexo[2];
    public:
        //construtor
        Membros(string nome, string ocupacao, string email, string palavraChave, int idade, char sx){
            this->nome = nome;
            this->ocupacao = ocupacao;
            this->email = email;
            this->palavraChave = palavraChave;
            this->idade = idade;
            sexo[2] = sx;
        }

        void imprimir();
    
        string getNome();
        void setNome(string n);

        string getOcupacao();
        void setOcupacao(string o);

        string getEmail();
        void setEmail(string e);

        string getPalavraChave();
        void setPalavraChave(string p);

        int getIdade();
        void setIdade(int i);

        char getSexo();
        void setSexo(char sx);
};

void Membros::imprimir(){
    cout << "- Nome: " << getNome() << "\n";
    cout << "- Ocupacao: " << getOcupacao() << "\n";
    cout << "- Email: " << getEmail() << "\n";
    cout << "- Palavra chave: " << getPalavraChave() << "\n";
    cout << "- Idade: " << getIdade() << "\n";
    cout << "- Sexo: " << getSexo() << "\n";
}

//encapsulamento(gets e sets)

string Membros::getNome(){
    return nome;
}
void Membros::setNome(string n){
    nome=n;
}

string Membros::getOcupacao(){
    return ocupacao;
}

void Membros::setOcupacao(string o){
    ocupacao=o;
}

string Membros::getEmail(){
    return email;
}

void Membros::setEmail(string e){
    email=e;
}

string Membros::getPalavraChave(){
    return palavraChave;
}

void Membros::setPalavraChave(string p){
    palavraChave=p;
}
int Membros::getIdade(){
    return idade;
}

void Membros::setIdade(int i){
    palavraChave=i;
}

char Membros::getSexo(){
    return sexo[2];
}

void Membros::setSexo(char sx){
    sexo[2]=sx;
}

//main

int main(){
    Membros *professor = new Membros("Marcelo", "Professor", "marcelo@gmail.com", "casa", 28, 'M');
    Membros *tecnico = new Membros("Carlos", "Tecnico", "carlos@gmail.com", "porta", 23, 'M');
    Membros *aluno = new Membros("Alliquison", "Aluno", "alliquison@gmail.com", "matias", 19, 'M');

    int i = 0;
    cin >> i;
    if(i == 1){
        professor->imprimir();
    }else if(i == 2){
        tecnico->imprimir();
    }else if(i == 3){
        aluno->imprimir();
    };
    
    return 0;
}