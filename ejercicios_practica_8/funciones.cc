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


// We have included the library (math.h) to be able to use the function (pow).

#include <math.h>


// We initialize the variables that we are going to use, both integers (int).

// The function will return a value of the integer type (int), then we pass it as an input parameter a value of the integer type (int) which we call "number".

int SumSquares (int number) 

{
  
  
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


double Average (int N, double vector []) {

// Declaramos la funcion media a la que le pasamos por parametro de entrada el tamaño del vector (N) y el propio vector (N). Esta funcion nos devolvera un double que sera el resultada de la media
double average;

double sum;

// Utilizaremos un for para recorrer el vector posicion por posicion, dentro del for guardaremos en la variable suma el resultado de semar todos los elemntos del vector
for (int i = 0; i < N; i++)
{
  sum += vector [i]; 
}
average = sum / N;
// Fuera del for realizamos la operacion media y la guardamos en la variabl econ el mismo nombre y devolvemos con un return el resultado de la media 
return average;



}
// En la funcion Find Higher le pasamos el tamaño del vector asi como el propio vector y buscaremos entre esos elementos el elemento mayor devolviendolo como mreturn
double FindHigher (int N,double vector []) {
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