#include <iostream>
#include <string>

void MensajeInicial() {
  std::cout << "Este mensaje suma un segundo a un reloj compuesto por horas, minutos y segundos, que introduce el usuario" << std::endl << std::endl;
}

void SumarSegundoReloj(int& horas_introducidas_funcion, int& minutos_introducidos_funcion, int& segundos_introducidos_funcion) {
  segundos_introducidos_funcion = segundos_introducidos_funcion + 1;
  if (segundos_introducidos_funcion == 60) {
    segundos_introducidos_funcion = 0;
    minutos_introducidos_funcion = minutos_introducidos_funcion + 1;
  } 
  if (minutos_introducidos_funcion == 60) {
    minutos_introducidos_funcion = 0;
    horas_introducidas_funcion = horas_introducidas_funcion + 1;   
  }   
  if (horas_introducidas_funcion == 24) {
    segundos_introducidos_funcion = 0;
    minutos_introducidos_funcion = 0;
    horas_introducidas_funcion = 0;
  }
}

void ImprimirRelojNuevo(int horas_introducidas, int minutos_introducidos, int segundos_introducidos) {
  std::string horas_introducidas_string;
  horas_introducidas_string = std::to_string(horas_introducidas);  
  std::string minutos_introducidos_string;
  minutos_introducidos_string = std::to_string(minutos_introducidos);  
  std::string segundos_introducidos_string;
  segundos_introducidos_string = std::to_string(segundos_introducidos);  
  if (horas_introducidas < 10) {
    horas_introducidas_string = {"0" + horas_introducidas_string};  
  }
  if (minutos_introducidos < 10) {
    minutos_introducidos_string = {"0" + minutos_introducidos_string};
  }
  if (segundos_introducidos < 10) {
    segundos_introducidos_string = {"0" + segundos_introducidos_string};
  }
  std::cout << horas_introducidas_string << ":" << minutos_introducidos_string << ":" << segundos_introducidos_string << std::endl;
  return;
}

int main() {
  MensajeInicial();
  int horas_introducidas, minutos_introducidos, segundos_introducidos;
  std::cin >> horas_introducidas >> minutos_introducidos >> segundos_introducidos;
  SumarSegundoReloj(horas_introducidas, minutos_introducidos, segundos_introducidos);
  ImprimirRelojNuevo(horas_introducidas, minutos_introducidos, segundos_introducidos);
  return 0;
}