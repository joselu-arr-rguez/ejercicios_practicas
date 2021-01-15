/**
  
  
  * Universidad de La Laguna.
  
  * Escuela Superior de Ingeniería y Tecnología.
  
  * Grado en Ingeniería Informática.
  
  * Informática Básica.
  
  
  * @title Práctica 4: Fundamentos de Programación Básica.
  
  * @file ejercicio_1_practica_4.cc
  
  * @author José Luis Arribas Rodríguez (alu0101416700@ull.es).
  
  * @copyright José Luis Arribas Rodríguez (2021).
  
  * @date 15 de enero de 2021.
  
  * @brief Escribir un programa en (C++), que calcule y muestre el coste de una carretera, en función de su longitud y coste por metro. 
  
  *        El programa solicitará al usuario, únicamente, la cantidad de metros de longitud que tiene la carretera, mientras que el coste por metro,
  
  *        es un valor conocido de (1624 €).
  
  
  * @bug No hay "bugs" conocidos.
  
  * @see https://github.com/joselu-arr-rguez/ejercicios_practicas/blob/main/ejercicios_practica_04/ejercicio_1_practica_4.cc
  
  
*/ 




#include <iostream>


using namespace std;




int main() {
      
  
  const double kValuePerMeter = 1624;  
  
  
  cout << "Enter the number of meters in length, which is the road: ";
  
  
  double meters;
  
  
  cin >> meters;
  
  
  double result;
  
  
  result = meters * kValuePerMeter;
  
  
  cout << "The cost of the road, depending on its length and cost per meter, is: " << "€" << result << "\n";
  
    
  return 0;
  
  
}