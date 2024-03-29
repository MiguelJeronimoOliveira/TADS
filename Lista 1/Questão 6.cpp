Questão 6
#include <iostream>
using namespace std;

int main() {
// O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor 

double custoFabrica, custoConsumidor;

  cout << "qual custo de fabrica do carro? ";
  cin >> custoFabrica;

  custoConsumidor = custoFabrica + (custoFabrica * 0.28) + (custoFabrica * 0.45);

  cout << "o custo do consumidor é: " << custoConsumidor;  
}