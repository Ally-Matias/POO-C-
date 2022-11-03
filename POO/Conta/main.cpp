#include "Conta.cpp"
#include "Poupanca.cpp"
#include "ContaCorrente.cpp"

int main(){
  Conta MinhaConta1{50.00};
  Poupanca MinhaConta2{100.00, 2};
  ContaCorrente MinhaConta3{100.00, 1};

  cout << "Conta 1" << endl;
  MinhaConta1.credito(10.00);
  MinhaConta1.debito(10.00);
  cout << MinhaConta1.getSaldo() << endl;

  cout << "Conta Poupanca" << endl;
  MinhaConta2.CalculaRendimento();

  cout << "Conta corrente" << endl;
  MinhaConta3.credito(10);
  cout << MinhaConta3.getSaldo() << endl;
  MinhaConta3.debito(15);
  cout << MinhaConta3.getSaldo() << endl;

  return 0;
};