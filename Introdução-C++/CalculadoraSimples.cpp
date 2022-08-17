#include <iostream>

using namespace std;

// CALCULADORA SIMPLES

// inserção (cout(<<) = c output) e extração (cin(>>) = c input)

int main(){
    int num, num2 = 0;
    string exp = "";

    cout << "Informe a expressao que deseja (+, -, *, /): ";
    cin >> exp;

    cout << "Informe dois numeros: ";
    cin >> num;
    cin >> num2;  

    if(exp == "+"){
        cout << "A soma dos numeros e: " << num + num2 << endl;
    }else if(exp == "-"){
        cout << "A subtracao dos numeros e: " << num - num2 << endl;
    }else if(exp == "*"){
        cout << "A multiplicacao dos numeros e: " << num * num2 << endl;
    }else if(exp == "/"){
        cout << "A divisao dos numeros e: " << num - num2 << endl;
    }

    return 0;
}
