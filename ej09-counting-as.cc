#include <iostream>
#include <string>
#include <vector>

void MensajeInicial() {
  std::cout << "Este programa cuenta el número de a que tiene una frase digitada por el usuario." << std::endl << std::endl;
}

int ContarAs(std::vector<char> caracteres_frase_introducida, std::string frase_introducida, int longitud_frase) {
  int contador_de_a{0};
  std::copy(frase_introducida.begin(), frase_introducida.end(), std::back_inserter(caracteres_frase_introducida));
  for (int contador = 0; contador < longitud_frase; ++contador) {
    if (caracteres_frase_introducida.at(contador) == 'a') {
      contador_de_a += 1; 
    }
  }
  return contador_de_a;
}

int main() {
  MensajeInicial();
  int longitud_frase;
  std::string frase_introducida;
  std::getline(std::cin, frase_introducida);
  longitud_frase = frase_introducida.length();
  std::vector<char> caracteres_frase_introducida;
  std::cout << ContarAs(caracteres_frase_introducida, frase_introducida, longitud_frase) << std::endl;
  return 0;
}

