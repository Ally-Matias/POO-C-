#include <iostream>
#include "Conta.cpp"

int main(){
  Conta MinhaConta;
  Poupanca ContaPou;

  ContaPou.IniPoupanca("Pou", 30.00, 2, 2);
  MinhaConta.inicializar("Fulano", 50.00, 1);

  ContaPou.imprimir();

  cout << "--------------------------" << "\n";

  MinhaConta.deposita(10.00);
  MinhaConta.consulta();

  cout << "--------------------------" << "\n";
  ContaPou.saque(10.00);
  ContaPou.imprimir();

  return 0;
};