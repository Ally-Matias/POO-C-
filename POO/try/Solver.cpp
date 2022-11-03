#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

double divide(double, double);

int main(){

    vector<int>num(5); // 5 posições: 0,1,2,3,4

    // um caso de sucesso, onde coloca um dado em um indice válido e depois imprime
    // se fosse em um indice > 5, erro, mas ainda n esta no try catch
    // para tratar, basta colocar dentro do try
    num.at(0)=10;
    cout << num[0] << endl;

    // agr com try...
    try{
        num.at(5)=10;
        cout << num[0] << endl;
    }catch(exception& erro){
        cout << "-> ERRO: " << erro.what() << endl;
    };

///////////////////////////////////////////////////////////////////////////////////////

// outro exemplo usando divisao por zero e throw 

    double n1,n2;
    cin >> n1 >> n2;

    try{  // dessa vez ele pega a mensagem de erro do throw
        cout << divide(n1,n2);
    }catch(const char* msgDeErro){
        cout << msgDeErro << endl;
    }

    return 0;
}

// uma função para verificar os inputs e usar o throw
double divide(double n3, double n4){
    if(n3==0 || n4==0){ // Um erro comum
        throw "-> ERRO: Divisao por ZERO!!!";
    }
    if(n3 >= 10 || n4 >= 10){ // outro exemplo: um caso especifico do meu código que não quero que aconteca
        throw "As entradas precisam ser menor que 10!!!";
    }
    return n3/n4;
}