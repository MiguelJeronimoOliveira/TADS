Questão 7
#include <iostream>
using namespace std;

int main() {
// Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

int celsius;
double fahrenheit;

  cout << "escreve a temperatura atual: ";
  cin >> celsius;

  fahrenheit = (9 * celsius + 160) / 5;

  cout << fahrenheit;
}