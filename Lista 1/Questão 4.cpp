Questão 4
#include <iostream>
using namespace std;

int main() {
  // Leia um número inteiro N e um percentual qualquer e escreva       qual o valor do percentual aplicado ao número
  double num, porcentagem;
  double percentual;
  
  cout << "descubra a porcentagem" << endl << "escreve um numero inteiro: ";
  cin >> num;

  cout << "escreva a procentagem";
  cin >> porcentagem;
  if(porcentagem < 0)
    cout << "numero invalido";
  percentual = porcentagem / 100;
  cout << num * percentual;
}