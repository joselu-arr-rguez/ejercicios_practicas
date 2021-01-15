/**
  
  
  * Universidad de La Laguna.
  
  * Escuela Superior de Ingeniería y Tecnología.
  
  * Grado en Ingeniería Informática.
  
  * Informática Básica.
  
  
  * @title Práctica 4: Fundamentos de Programación Básica.
  
  * @file ejercicio_5_practica_4.cc
  
  * @author José Luis Arribas Rodríguez (alu0101416700@ull.es).
  
  * @copyright José Luis Arribas Rodríguez (2021).
  
  * @date 15 de enero de 2021.
  
  * @brief Escribir un programa en (C++), que calcule el área y el perímetro de un cuadrado.
  
  *        El programa solicitará al usuario, la longitud del lado del cuadrado y luego imprimirá en pantalla, un mensaje con el área y el perímetro,
  
  *        de dicho lado del cuadrado.
  
  
  * @bug No hay "bugs" conocidos.
  
  * @see https://github.com/joselu-arr-rguez/ejercicios_practicas/blob/main/ejercicios_practica_04/ejercicio_5_practica_4.cc
  
  
*/




#include <iostream>


using namespace std;




int main() {
  
  
  double side_length_square;
  
  
  cout << "Enter the length of the side of the square: ";
  
  cin >> side_length_square;
  
    
  double area;
  
  double perimeter;
  
  
  area = side_length_square * side_length_square;
  
  perimeter = side_length_square * 4;
  
  
  cout << "The area of the square, is: " << area << " m²." << "\n";
  
  cout << "The perimeter of the square, is: " << perimeter << " m." << "\n";
  
  
  return 0;
  
  
}