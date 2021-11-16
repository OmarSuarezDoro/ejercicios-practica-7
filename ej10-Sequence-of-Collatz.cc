#include <iostream>

void MensajeInicial() {
  std::cout << "Este programa muestra el número de iteraciones que hace falta para llegar desde un número digitado por el usuario hasta el 1 empleando la secuencia de Collatz." << std::endl << std::endl;
}

int CalculateTheNumberOfItinerations(int number_introduced) {
  int contador{0};
  while (number_introduced > 1) {
    if (number_introduced % 2 == 0) {
      number_introduced /= 2;
    } else {
      number_introduced = 3 * number_introduced + 1;
    }
    contador += 1;
  }
  return contador;
}

int main() {
  MensajeInicial();
  int number_introduced;
  while (std::cin >> number_introduced) {
    std::cout << CalculateTheNumberOfItinerations(number_introduced) << std::endl;
  }
  return 0;
}