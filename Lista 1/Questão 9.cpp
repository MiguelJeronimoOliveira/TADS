Questão 9
#include <iostream>
using namespace std;
int main() {

  int valor1, valor2, valor3;

  cout << "Escreve 2 valores inteiros: ";
 cin >> valor1 >> valor2;

  valor3 = valor1; //valor 3 vale 1
  valor1 = valor2; //valor 1 vale 2
  valor2 = valor3;
  
  cout << valor1 << " e " << valor2; 
}
