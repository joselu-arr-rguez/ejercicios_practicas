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
  
  
  // Declaramos un bucle "for", que recogerá los números que sean menores que la variable "int" (llamada "número") hasta llegar a este, el cuál sumará los cuadrados de los números.
  
  for (int i = 1; i <= number; i++) 
  
  {
  
  square = i * i;
  
  
  // We put a (+=) and equal (sum = sum + square).
  
  sum += square;
    
  }
  
  
  // We return the "sum" variable since the function returns an integer.
  
  return sum;
  
  
}

 
// We declare the variables that we are going to use, both variables (int).

int SquareSum (int number) 

{
  
  
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


// We declare the average function, to which we pass the size of the vector (N) as an input parameter, using a variable (int) and the vector (N) itself. This function will return a variable (double), which will be the result of the average.

double Average (int N, double vector []) 

{
  
  
  // We declare a variable (double), which we call "average".
  
  double average;
  
  
  // We declare a variable (double), which we call "sum".
  
  double sum;
  

  // We declare a loop (for), to go through the vector position by position, inside it, we save in the variable (int) called "sum", the result of adding all the elements of the vector.
  
  for (int i = 0; i < N; i++)
  
  {
  
  sum += vector [i]; 
  
  }
  
  
  // Outside the (for) loop we carry out the average operation, and store it in the variable (double) which we had called "average" (with the same name).
  
  average = sum / N;
  
  
  // We declare a statement (return), which returns the result of the previously made average.
  
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