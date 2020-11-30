/* Desarrolle un programa (vector_statistics.cc) que tome como parámetro por línea de comandos tres números naturales ((N), (M) y (P)) y cree un vector de (N) componentes del tipo double, cuyos valores hayan sido generados aleatoriamente en el rango [M, P]. 

· El programa dispondrá de funciones que calculen:

- La media

- La desviación estándar

- El máximo

- El mínimo de los valores almacenados en el vector. *


* Universidad de La Laguna

* Escuela Superior de Ingeniería y Tecnología

* Grado en Ingeniería Informática

* Asignatura: Informática Básica

* Curso: Primero

* @title Práctica 8: Funciones (2). GitHub

* @file vector_statistics.cc

* @author José Luis Arribas Rodríguez <alu0101416700@ull.edu.es>

* @copyright José Luis Arribas Rodríguez (2020)

* @version 1.0

* @see https://github.com/joselu-arr-rguez/ejercicios_practicas/blob/main/ejercicios_practica_8/vector_statistics.cc

*/


#include <iostream>

#include "funciones.h"

#include "funciones.cc"


int main () 

{
          
  
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