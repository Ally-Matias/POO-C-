// Funções genericas ou sobrecarregadas
// para entender melhor oq é uma programção genérica
// https://pt.stackoverflow.com/questions/131890/o-que-%C3%A9-programa%C3%A7%C3%A3o-gen%C3%A9rica

#include <iostream>
using namespace std;

// Uma deﬁnição de função genérica começa com a	palavra template
// Definição da template de função printArray
template < typename T >
void printArray( const T *array, int count){
    for(int i = 0; i < count; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}; // fim do template de função printArray 

int main() {
 const int ACOUNT = 6; // tamanho do array a
 const int BCOUNT = 7; // tamanho do array b 
 const int CCOUNT = 8; // tamanho do array c

 int a[ACOUNT] = {1,2,3,4,5 }; 
 double b[BCOUNT] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
 char c[CCOUNT] = "HELLO"; // posição 6 para null

 cout << "O vetor a contém: " << endl; 
 // chama a especialização da template de função do tipo inteiro 
 printArray( a, ACOUNT );

 cout << " O vetor b contém:" << endl; 
 // chama a especialização da template de função do tipo double 
 printArray( b, BCOUNT );

 cout << "O vetor c contém:" << endl; 
 // chama a especialização da template de função do tipo caractere 
 printArray( c, CCOUNT );

 return 0;
}