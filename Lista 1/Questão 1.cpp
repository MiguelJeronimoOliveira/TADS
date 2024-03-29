Questão 1
#include <iostream>
using namespace std;

int main() {
// Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias. mes = 30 dias, ano = 365 dias.

  int anos, meses, dias;
  int anosPraDias, mesesPraDias, resultado;

  cout << "quantos anos você tem?";
  cin >> anos;

  cout << "quantos meses você tem?";
  cin >> meses;

  cout << "quantos dias você tem?";
  cin >> dias;

  anosPraDias = anos * 365;
  mesesPraDias = meses * 30;
  resultado = mesesPraDias + anosPraDias + dias;

  cout << "você tem: " << resultado << " dias de vida";
 
}