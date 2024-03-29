Questão 8
#include <iostream>
using namespace std;

int main() {
//Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter. 

float valor, cotacao, dolar, real, saque;

  cout << "quantos reais você tem em sua conta?";
  cin >> valor;

  cout << "quantos dolares você deseja? ";
  cin >> dolar;

  cout << "qual a atual cotação do dolar? ";
  cin >> cotacao;

  saque = dolar * cotacao;
  real = valor - saque;

  cout << "na sua conta tem: " << real << " reais e " << dolar << " dolares";  
}