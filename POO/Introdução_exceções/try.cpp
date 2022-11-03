#include <iostream>
#include <exception> // somente para o exception, ultimo catch
using namespace std;

// divisao por zero

// posso tbm criar uma classe da exceção
class DividePorZero : public runtime_error{
    public:
        DividePorZero() : runtime_error("Tentativa de divisao por zero!"){
        }
};


int quociente(int n, int m){
    if(m == 0 || n == 0){
       // throw runtime_error("Tentativa de divisao por zero!");
        throw DividePorZero();
    }
    return  n/m;
}

int main() {
    int x = 0, y = 0;
    cout << "Entre com os valores de x e y: ";
    cin >> x >> y;
    try{
        cout << "Resultado: " << quociente(x, y) << endl;
    } catch (/*runtime_error &erro*/ DividePorZero &erro){
        cout << "Ocorreu um erro: " << erro.what() << endl;
    } catch (exception &erro){  // exceção pai de tds, ele sozinho já resolveria, mas sempre cai no primeiro catch mais especifico
        cout << "Capturei uma exceção qualquer!" << endl;
    }
    cout << "Programa finalizado!!" << endl;

// posso fazer várias coisas dentro do catch, como um código para resolver o problema ou pedir para colocar outro valor e etc.

    return 0;
};