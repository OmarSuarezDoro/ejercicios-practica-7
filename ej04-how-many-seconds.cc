#include <iostream>

void MensajeInicial() {
  std::cout << "Este programa convierte una cantidad de años, días, horas, minutos y segundos introducidos por el usuario, en segundos." << std::endl;
}

int CalcularSegundos(int anyos_introducidos, int dias_introducidos, int horas_introducidas, int minutos_introducidos, int segundos_introducidos) {
  int resultado{0};
  dias_introducidos = dias_introducidos + (anyos_introducidos * 365);
  horas_introducidas = horas_introducidas + (dias_introducidos * 24);
  minutos_introducidos = minutos_introducidos + (horas_introducidas * 60);
  resultado = segundos_introducidos + (minutos_introducidos * 60);
  return resultado;
}

int main() {
  MensajeInicial();
  int anyos_introducidos{0}; 
  int dias_introducidos{0}; 
  int horas_introducidas{0}; 
  int minutos_introducidos{0};
  int segundos_introducidos{0};
  std::cin >> anyos_introducidos >> dias_introducidos >> horas_introducidas >> minutos_introducidos >> segundos_introducidos;
  std::cout << CalcularSegundos(anyos_introducidos, dias_introducidos, horas_introducidas, minutos_introducidos, segundos_introducidos) << std::endl;
  return 0;
}