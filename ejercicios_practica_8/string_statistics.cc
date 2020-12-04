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

using namespace std;




int main () 

{
  
  string first;

  string last; 
  
  const int kComponents = 10;

 

  cout << "Write something ..." << "\n";

  string word;

  getline(cin, word);

  int lon = word.length ();

  char vector [kComponents];


  
  for (int i = 0; i <= kComponents; i++)
  {
    vector[i]=word[i];

    cout<<vector[i];
  }
  
  
  cout << "The size of vector is:  " << lon;

  
  return 0;
    
}
