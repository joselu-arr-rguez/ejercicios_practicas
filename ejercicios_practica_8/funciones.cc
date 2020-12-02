/* Escriba un programa (funciones.cc) que contenga el código (definiciones) de las funciones declaradas en el fichero de cabecera.

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


// We have included the library "math.h" to be able to use the function "pow".

#include <math.h>


// We declare the variables that we are going to use, both variables of the type "int".

// The function will return a value of the variable of type "int", then we pass it as an input parameter to a value of the variable of type "int" that we call "number".

int SumSquares (int number) 

{
      
  
  // We declare a variable of type "int", which we call "sum" and we declare it to (0).
  
  int sum = 0;
  
  
  // We declare a variable of type "int", which we call "square".
  
  int square;
  
  
  // We declare a "for" loop, which will collect the numbers that are less than the variable of the "int" type previously called "number", until it reaches it. This will then add the squares of the numbers.
  
  for (int i = 1; i <= number; i++) 
  
  {
  
  square = i * i;
  
  
  // We put a (+ =) and say that (sum = sum + square).
  
  sum += square;
    
  }
  
  
  // We declare a "return" statement, to return the variable of type "int", which we had denoted by "sum", since the function returns an integer.
  
  return sum;
  
  
}


// We declare the variables that we are going to use, both variables of type "int".

int SquareSum (int number) 

{
  
  
  // We declare a variable of type "int", which we call "sum" and we declare it to (0).
  
  int sum = 0;
  
  
  // We declare a variable of type "int", which we call "square".
  
  int square;
  
  
  // We declare a "for" loop, which will add all the numbers, and then square the result. Returning this to us as the last result.
  
  for (int i = 1; i <= number; i++)
  
  {
  
  sum += i;
  
    
  // We declare the function "pow", which tells us that the first element of the parentheses (in this case it is the result of the sum, made earlier) is the base of the exponent. And the second number in the parentheses (in this case the (2)), is the exponent.
  
  square = pow (sum, 2);
  
  }
  
  
  // We declare a "return" statement, which will return the variable of the type "int", which we had called "square", since the function returns an integer.
  
  return square;
  
  
}


// We declare the average function, to which we pass the size of the vector (N) as an input parameter, using a variable of type "int" and the vector (N) itself. This function will return a variable of the type "double", which will be the result of the average.

double Average (int N, double vector []) 

{
  
  
  // We declare a variable of type "double", which we call "average".
  
  double average;
  
  
  // We declare a variable of type "double", which we call "sum".
  
  double sum;
  

  // We declare a loop (for), which will go through the vector, position by position. Inside this it will save in the variable of the type "int" called "sum", the result of adding all the elements of the vector.
  
  for (int i = 0; i < N; i++)
  
  {
  
  sum += vector [i]; 
  
  }
  
  
  // We declare the average operation, which will be stored in the variable of type "double", which we had called "average".
  
  average = sum / N;
  
  
  // We declare a statement (return), which will return the result of the average.
  
  return average;
  
  
}


// En la funcion Find Higher le pasamos el tamaño del vector asi como el propio vector y buscaremos entre esos elementos el elemento mayor devolviendolo como mreturn

double FindHigher (int N, double vector []) {
// Guardamos en Highre el primer elemento del vector para mas adelante poder hacer comporaraciones
double higher = vector [0];
// Utilixzaremos el for para recorrer el vector pero estavez dede la posicion 1 ya que la posicion 0 se encuentra guardada en la variable higher
for (int i = 1; i < N; i++)
{
  // En el if vamos comparando hasta encontara el elemento de mayor tamaño y guaradndolo en la variable higher
  if (higher < vector [i])
  {
    higher = vector [i];
  }
  
}

// DEvolvemos el elemento mas grande del vector que se encuentra en higher
return higher;


}

double FindMinimum (int N, double vector [])

{
double minimum = vector [0];

for (int i = 1; i < N; i++)
{
  if (minimum > vector [i])
  {
    minimum = vector [i];
  }
  
}
return minimum;


}

// Essta funcion se encaragar la desviacion estandar del contendio del vector pasandole por parametros el tamaño N y el propio vector
double StandardDeviation (int N, double vector []){

// Declaramos la variable varianza y descvaicion y llamamos a la funcion media que usamos antes porque la necesitarewmos
  double variance, deviation;

  double average = Average (N, vector);


// Usamos un for ara recorer el vector
for (int i = 0; i < N; i++)
{
 // Calculamo sla varianza que es el resultado de la suma de la propia varianza mas la exponencial del contendo del vecor menos la media y elevao a l cuadardo
variance = variance + pow ((vector [i] - average), 2);
  
}
// Calculamso la desvaicion en el que se sua la raiz cuadrada de la varianzaq entre el numero de elementos del vector menos 1
deviation = sqrt (variance / N - 1);
// devolvemos el resultadop de la desvaicion
return deviation;

}