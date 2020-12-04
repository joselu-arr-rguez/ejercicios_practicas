/* Escriba un programa (difference_of_squares.cc) que tome como parámetro pasado por línea de comandos un número natural (N), e imprima en pantalla la diferencia entre el cuadrado de la suma de los primeros (N) números naturales, y la suma de los cuadrados de esos mismos números. *

* Universidad de La Laguna

* Escuela Superior de Ingeniería y Tecnología

* Grado en Ingeniería Informática

* Asignatura: Informática Básica

* Curso: Primero

* @title Práctica 8: Funciones (2). GitHub

* @file difference_of_squares.cc

* @author José Luis Arribas Rodríguez <alu0101416700@ull.edu.es>

* @copyright José Luis Arribas Rodríguez (2020)

* @version 1.0

* @see https://github.com/joselu-arr-rguez/IB-2020-2021-Practica8-Funciones/blob/main/difference_of_squares

*/


#include <iostream>

#include "funciones.h"

#include "funciones.cc"


using namespace std;


int main () 

{
      
  int number;
  
  int sum_squares;
  
  int square_sum;
  
  int result;
  
  
  cout << "Enter a number for calculations: ";
  
  cin >> number;
  
  
  if (cin.get () != '\n')
  
  {
    
    cout << "Please enter a validated number: " << "\n";
    
  }
  
  
  sum_squares = SumSquares (number);
  
  square_sum = SquareSum (number);
  
  result = square_sum - sum_squares;
  
  
  cout << "The result of the sum of the squares is: " << sum_squares << "\n";
  
  cout << "The result of the square of the sum is: " << SquareSum (number) << "\n";
  
  cout << "The difference between the square of the sum and the sum of the squares is: " << result << "\n";
  
  
  return 0;
  
}