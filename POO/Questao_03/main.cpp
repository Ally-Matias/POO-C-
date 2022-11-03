#include <iostream>
#include <iterator> // ostream_iterator e istream_iterator
using namespace std;

int main(){
    cout << "Informe dois inteiros: ";

// cria istream_iterator para ler valores de int a partir de cin
    istream_iterator< int > inputInt( cin );
    int number1 = *inputInt; // lê int a partir da entrada padrão
    ++inputInt; // move iterador para o próximo valor de entrada
    int number2 = *inputInt; // lê int a partir da entrada padrão
// cria ostream_iterator para gravar valores int em cout
    ostream_iterator< int > outputInt( cout );
    cout << "A soma é: ";
    *outputInt = number1 + number2; // gera saída do resultado para cout
    cout << endl;
    
    return 0;

}