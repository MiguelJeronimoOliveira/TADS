Questão 5
#include <iostream>
using namespace std;

int main() {
// Leia o tempo de duração de um evento expresso em segundos, converta-o e mostre-o expresso em horas, minutos e segundo. 
int segundos, minutos, horas;

cout << "converta segundos em horas, minutos e segundos " << endl << "digite o tempo em segundos: ";
  cin >> segundos;

minutos = segundos / 60;
segundos %= 60;
horas = minutos / 60;
minutos %= 60;
cout << horas << " horas " << minutos << " minutos e " << segundos << " segundos";
}