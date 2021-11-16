#include <iostream>


void MensajeInicial() {
  std::cout << "Este programa muestra que elemento gana, a partir de dos caracteres introducidos por el usuario" << std::endl << std::endl;
}

int DeclararGanador(char objeto_introducido, char objeto_introducido_2) {
  int resultado{0};
  if (objeto_introducido == 'V' && objeto_introducido_2 == 'P') {
    resultado = 2;
  } 
  else if (objeto_introducido == 'P' && objeto_introducido_2 == 'V') {
    resultado = 1;
  }
  else if (objeto_introducido == 'V' && objeto_introducido_2 == 'A') {
    resultado = 1;
  }
  else if (objeto_introducido == 'A' && objeto_introducido_2 == 'V') {
    resultado = 2;
  }
  else if (objeto_introducido == 'A' && objeto_introducido_2 == 'P') {
    resultado = 1;
  }
  else if (objeto_introducido == 'P' && objeto_introducido_2 == 'A') {
    resultado = 2;
  }
  else if (objeto_introducido == objeto_introducido_2) {
    resultado = 0;
  }
  return resultado;
}

int main() {
  MensajeInicial();
  char objeto_introducido, objeto_introducido_2;
  std::cin >> objeto_introducido >> objeto_introducido_2;
  int resultado_final{0};
  resultado_final = DeclararGanador(objeto_introducido, objeto_introducido_2); 
  if (resultado_final == 0) {
    std::cout << "-" << std::endl;
  }
  else {
    std::cout << resultado_final << std::endl;
  }
  return 0;
} 