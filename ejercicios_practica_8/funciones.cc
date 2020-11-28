/* Escriba un programa (funciones.cc) que contenga el código (definiciones) de las funciones declaradas en el fichero de cabecera.

* Universidad de La Laguna

* Escuela Superior de Ingeniería y Tecnología

* Grado en Ingeniería Informática

* Asignatura: Informática Básica

* Curso: Primero

* @title Práctica 8: Funciones (2). GitHub

* @file funciones.cc

* @author José Luis Arribas Rodríguez <alu0101416700@ull.edu.es>

* @copyright José Luis Arribas Rodríguez 2020

* @version 1.0

* @see https://github.com/joselu-arr-rguez/IB-2020-2021-Practica8-Funciones/blob/main/funciones.cc

*/


// We have included the library (math.h) to be able to use the function (pow).

#include <math.h>


// We initialize the variables that we are going to use, both integers (int).

// The function will return a value of the integer type (int), then we pass it as an input parameter a value of the integer type (int) which we call "number".

int SumSquares (int number) {


  // We declare a variable of the type integer (int), which we call "sum" and we initialize to (0).

  int sum = 0;


  // We declare a variable of the type integer (int), which we call "square".

  int square;


  // We declare a (for) which will collect the numbers that are less than the variable of the integer type (int) called "number" until it reaches this, which will add the squares of the numbers.

  for (int i = 1; i <= number; i++) 
  
  {

  square = i * i;


  // We put a (+=) and equal (sum = sum + square).
  
  sum += square;
    
  }
  

  // We return the "sum" variable since the function returns an integer.

  return sum;


}


// We initialize the variables that we are going to use, both integers (int).

int SquareSum (int number) {


  // We declare a variable of the type integer (int), which we call "sum" and we initialize to (0).

  int sum = 0;


  // We declare a variable of the type integer (int), which we call "square".

  int square;


  // We declare a (for) and add all the numbers, and then square the result. Returning as the last result the result of the square.

  for (int i = 1; i <= number; i++)

  {

  sum += i;

    
  // We declare the function (pow) that says that the first number is the base of the exponent and the second number, in this case (2), is the exponent.

  square = pow (sum, 2);

  }


  // We return the "square" variable since the function returns an integer.

  return square;


}