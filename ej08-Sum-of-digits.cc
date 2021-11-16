#include <iostream>
#include <vector>
#include <cmath>

void MensajeInicial() {
  std::cout << "Este programa suma los digitos de los números introducidos por el usuario." << std::endl << std::endl;
}

int CalcularSuma(int numero_introducido) {
  int resultado{0};
  int numero_introducido_bucle;
  numero_introducido_bucle = numero_introducido;
  while (numero_introducido_bucle != 0) {
    resultado = resultado + (numero_introducido_bucle % 10);
    numero_introducido_bucle = (numero_introducido_bucle / 10); 
  }
  return resultado;
}

int main() {
  MensajeInicial();
  int numero;
  while (std::cin >> numero) {
    std::cout << "The sum of the digits of " << numero << " is " << abs(CalcularSuma(numero)) << "." << std::endl;
  }
  return 0;
}
