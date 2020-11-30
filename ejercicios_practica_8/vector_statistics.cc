/* Escriba un programa (difference_of_squares.cc) que tome como parámetro pasado por línea de comandos un número natural (N), e imprima en pantalla la diferencia entre el cuadrado de la suma de los primeros (N) números naturales y la suma de los cuadrados de esos mismos números.*

* Universidad de La Laguna

* Escuela Superior de Ingeniería y Tecnología

* Grado en Ingeniería Informática

* Asignatura: Informática Básica

* Curso: Primero

* @title Práctica 8: Funciones (2). GitHub

* @file difference_of_squares.cc

* @author José Luis Arribas Rodríguez <alu0101416700@ull.edu.es>

* @copyright José Luis Arribas Rodríguez 2020

* @version 1.0

* @see https://github.com/joselu-arr-rguez/IB-2020-2021-Practica8-Funciones/blob/main/difference_of_squares

*/


#include <iostream>

#include "funciones.h"

#include "funciones.cc"


int main () {
      
  
  int N;

  int M;

  int P;

  


  
  
  
  std:: cout << "Enter the number of vector elements: ";
  
  std:: cin >> N;
  
  
  std:: cout << "Enter the minimum range of the vector: ";
  
  std:: cin >> M;
  
  
  std:: cout << "Enter the maximum range of the vector: ";
  
  std:: cin >> P;


  double vector [N];

  double value;


  for (int i = 0; i < N; i++)
  {

    value = M + rand () % P;

    vector [i] = value;

    std:: cout << vector [i] << " ";

    

  }

  std:: cout << "The result of the average is: " << Average (N, vector) << "\n";

  std:: cout << "The biggest number in the vector is: " << FindHigher (N, vector) << "\n";

  std:: cout << "The smallest number in the vector is: " << FindMinimum (N, vector) << "\n";

  std:: cout << "The standard deviation in the vector is: " << StandardDeviation (N, vector) << "\n";



  return 0;
  
    
  }