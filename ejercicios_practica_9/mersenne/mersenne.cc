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

void GeneratePrimes(bool* primes, int number){

fill(primes, primes + number + 1, true);

for (int p = 2; p * p <= number; ++p)
{
  if (primes[p] == true)
  {
    for (int i = p * 2; i <= number; i+=p)
    {
      primes[i] = false;
    }
    
  }
  
}


}

void MersennePrimes(int number){

bool primes[number + 1];

GeneratePrimes(primes, number);

for (int i = 2; ((1<<i)-1) <= number; ++i)
{
  int prime = (1<<i)-1;

  if (primes [prime])
  {
    cout << prime << " " << "\n";
  }
  

}


}