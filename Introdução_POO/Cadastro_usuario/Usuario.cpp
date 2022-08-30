#include <iostream>

using namespace std;

class Usuario{
    private:
        string nome;
        string ocupacao;
        string email;
        string palavraChave;
        int idade;
        string sexo;  // coloquei string temporaria, o certo é char
    public:
        Usuario(string nome, string ocupacao, string email, string palavraChave, int idade, string sx){
            this->nome = nome;
            this->ocupacao = ocupacao;
            this->email = email;
            this->palavraChave = palavraChave;
            this->idade = idade;
            sexo = sx;
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

        string getSexo();
        void setSexo(string sx);
};

void Usuario::imprimir(){
    cout << "- Nome: " << getNome() << "\n";
    cout << "- Ocupacao: " << getOcupacao() << "\n";
    cout << "- Email: " << getEmail() << "\n";
    cout << "- Palavra chave: " << getPalavraChave() << "\n";
    cout << "- Idade: " << getIdade() << "\n";
    cout << "- Sexo: " << getSexo() << "\n";
}

string Usuario::getNome(){
    return nome;
}
void Usuario::setNome(string n){
    nome=n;
}

string Usuario::getOcupacao(){
    return ocupacao;
}

void Usuario::setOcupacao(string o){
    ocupacao=o;
}

string Usuario::getEmail(){
    return email;
}

void Usuario::setEmail(string e){
    email=e;
}

string Usuario::getPalavraChave(){
    return palavraChave;
}

void Usuario::setPalavraChave(string p){
    palavraChave=p;
}
int Usuario::getIdade(){
    return idade;
}

void Usuario::setIdade(int i){
    palavraChave=i;
}

string Usuario::getSexo(){
    return sexo;
}

void Usuario::setSexo(string sx){
    sexo=sx;
}

int main(){
    Usuario *pessoa = new Usuario("teste", "teste", "teste", "teste", 19, "M");
    pessoa->imprimir();
    
    return 0;
}
