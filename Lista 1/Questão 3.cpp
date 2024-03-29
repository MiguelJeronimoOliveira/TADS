Questão 3
#include <iostream>
using namespace std;

int main() {
//Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos a vista ou parcelado em até 10 vezes sem juros.

  int parcelas;
  double precoProduto;
  char resposta;

  cout << "Quanto custou seu produto? ";
  cin >> precoProduto;

  cout << "Gostaria de parcelar? Digite s/n ";
  cin >> resposta;
  if(resposta == 's' || resposta == 'S'){
    cout << "Gostaria de parcelas em quantas vezes? (max: 10): ";
    cin >> parcelas;
    cout << "O preço das parcelas ficou: " << precoProduto / parcelas << " Reais" << " em " << parcelas << " vezes";
  }  
    else if(resposta == 'n' || resposta == 'N')
      cout << "O produto ficou : " << precoProduto << " reais a vista";
      else
        cout << "Resposta invalida";  
}