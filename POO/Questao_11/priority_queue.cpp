// QUEUE

// Os operadores <,	<=,	>, >=,== e != não fornecidos para o conteiner priority_queue

#include <iostream>
#include <queue> // definição do adaptador priority_queue

using namespace std;

int main(){

priority_queue< double > priorities; // cria priority_queue

// insere elementos em prioridades
priorities.push( 3.2 );
priorities.push( 9.8 );
priorities.push( 5.4 );

// remove elemento de priority_queue
while ( !priorities.empty() ){
    cout << priorities.top() << ' '; // visualiza elemento superior
    priorities.pop(); // remove elemento superior
}
cout << endl;
return 0;
}	
