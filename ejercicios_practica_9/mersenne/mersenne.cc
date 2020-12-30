/* Escriba un programa llamado "funciones.cc", que contenga el código (definiciones), de las funciones declaradas en el fichero de cabecera.

* Universidad de La Laguna

* Escuela Superior de Ingeniería y Tecnología

* Grado en Ingeniería Informática

* Asignatura: Informática Básica

* Curso: Primero

* @title Práctica 8: Funciones (2). GitHub

* @file funciones.cc

* @author José Luis Arribas Rodríguez <alu0101416700@ull.edu.es>

* @copyright José Luis Arribas Rodríguez (2020)

* @version 1.0

* @see https://github.com/joselu-arr-rguez/IB-2020-2021-Practica8-Funciones/blob/main/funciones.cc

*/

#include <algorithm>

#include <iostream>

using namespace std;

void GeneratePrimes(bool* primes, int kValue){

fill(primes, primes + kValue + 1, true);

for (int p = 2; p * p <= kValue; ++p)
{
  if (primes[p] == true)
  {
    for (int i = p * 2; i <= kValue; i+=p)
    {
      primes[i] = false;
    }
    
  }
  
}


}

void MersennePrimes(int kValue){

bool primes[kValue + 1];

GeneratePrimes(primes, kValue);

for (int i = 2; ((1<<i)-1) <= kValue; ++i)
{
  int num = (1<<i)-1;

  if (primes [num])
  {
    cout << num << " ";
  }
  

}



}