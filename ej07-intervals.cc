#include <iostream>
#include <array>
#include <algorithm>

void MensajeInicial() {
  std::cout << "Este programa muestra la intersección resultante de dos intervalos" << std::endl << std::endl;
}

void BuscarInterseccion(std::array<int, 2> intervalo_1, std::array<int, 2> intervalo_2) {
  if (intervalo_1.at(1) < intervalo_2.at(0) || intervalo_2.at(1) < intervalo_1.at(0)) {
    std::cout << "[]" << std::endl;
  } else {
    std::cout << "[" << std::max(intervalo_1.at(0), intervalo_2.at(0)) << ",  " << std::min(intervalo_1.at(1), intervalo_2.at(1)) << "]" << std::endl;
  }
  return;
} 

int main() {
  MensajeInicial();
  int extremo_menor_intervalo_1, extremo_mayor_intervalo_1, extremo_menor_intervalo_2, extremo_mayor_intervalo_2;
  std::cin >> extremo_menor_intervalo_1 >> extremo_mayor_intervalo_1 >> extremo_menor_intervalo_2 >> extremo_mayor_intervalo_2;
  std::array<int,2> intervalo_1 {extremo_menor_intervalo_1, extremo_mayor_intervalo_1};
  std::array<int,2> intervalo_2 {extremo_menor_intervalo_2, extremo_mayor_intervalo_2};
  BuscarInterseccion(intervalo_1, intervalo_2);
  return 0;
}