Questão 2
#include <iostream>
using namespace std;

int main() {
//Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das informações número de anos que ele fuma, quantidade] de cigarros fumados por dia e preço de uma carteira.

  int anosFumando, cigarrosPorDia;
  double precoCarteira, precoUnidade, gastoTotal;

  cout << "A quantos anos você fuma? ";
  cin >> anosFumando;

  cout << "Quantos cigarros voce fuma pro dias? ";
  cin >> cigarrosPorDia;

  cout << "quanto custa o seu cigarro?";
  cin >> precoCarteira; 

  cigarrosPorDia *= 365; // cigarros fumados por ano
  precoUnidade = precoCarteira / 20;

  gastoTotal = anosFumando * cigarrosPorDia * precoUnidade; 
  
  cout << gastoTotal;
  
}