/* Escriba un programa llamado "prime.cc", que tome por línea de comandos un número natural (N), que imprima en pantalla el n-ésimo número primo. *

* Universidad de La Laguna

* Escuela Superior de Ingeniería y Tecnología

* Grado en Ingeniería Informática

* Asignatura: Informática Básica

* Curso: Primero

* @title Práctica 8: Funciones (2). GitHub

* @file prime.cc
  
* @author José Luis Arribas Rodríguez <alu0101416700@ull.edu.es>
  
* @copyright José Luis Arribas Rodríguez (2020)
  
* @version 1.0
  
* @see https://github.com/joselu-arr-rguez/IB-2020-2021-Practica8-Funciones/blob/main/prime.cc

*/


#include <iostream>

#include "mersenne.cc"

#include "mersenne.h"

#include <algorithm>


using namespace std;


int main ()

{
 
 int number;

 unsigned int kValue = 524288;


  cout << "Enter a number: " << "\n";

  cin >> number;

  if (number < 8)
  {
    cout << "Mersenne primes numbers still: " << kValue << "\n";

    MersennePrimes(kValue);
  }
  
  else
  {
    cout << "El número debe estar entre 1 y 7: " << "\n";
  }
  

  

  return 0;
   
}