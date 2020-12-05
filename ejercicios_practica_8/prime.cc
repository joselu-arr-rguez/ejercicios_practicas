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

#include "funciones.cc"

#include "funciones.h"


using namespace std;


int main ()

{
    
  int number;
  
  
  cout << "Enter a number to calculate its primes: ";
  
  cin >> number;
  
  
  int x;
  
  int z;
  
  int i = 0;
  
  int count;
  
  int vector [1000];
  
  
  for (x = 1; x <= 1000; x++)
  
  {
    
    count = 0;
    
    
    for (z = 1; z <= x; z++)
    
    {
      
      if (x % z == 0)
      
      {
        
        count ++;
        
      }
      
    }
    
    if (count == 2 || z == 1 || z == 0)
    
    {
      
      vector [i] = x;
      

      i ++;
     
    }
    
  }
  
  
  cout << "The (n-th) prime number of the natural number (N) entered is: " << vector [number - 1] << "\n";  
  
  
  return 0;
   
}