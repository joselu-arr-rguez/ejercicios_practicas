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
  
  
  // We declare a statement of type "return", to return the variable of type "int", which we had denoted by "sum", since the function returns an integer.
  
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


// We declare the "Average" function, to which we pass the size of the vector (N) as an input parameter, using a variable of type "int" and the vector (N) itself. This function will return a variable of the type "double", which will be the result of the average.

double Average (int N, double vector []) 

{
  
  // We declare a variable of type "double", which we call "average".
  
  double average;
  
  
  // We declare a variable of type "double", which we call "sum".
  
  double sum;
  
  
  // We declare a loop "for", which will go through the vector, position by position. Inside this it will save in the variable of the type "int" called "sum", the result of adding all the elements of the vector.
  
  for (int i = 0; i < N; i++)
  
  {
      
    sum += vector [i]; 
    
  }
  
  
  // We declare the average operation, which will be stored in the variable of type "double", which we had called "average".
  
  average = sum / N;
  
  
  // We declare a statement (return), which will return the result of the average.
  
  return average;
  
}


// We declare the "FindHigher" function, to which we pass the size of the vector as well as the vector itself, and it will search among those elements for the largest element of the vector, and it will return it to us with a "return" statement.

double FindHigher (int N, double vector []) 

{
  
  // The program will save the first element of the vector in the "Find Higher" function, so that later it can make comparisons with it.
  
  double higher = vector [0];
  
  
  // We declare a "for" loop, which will go through the vector but this time from position (1), since in position (0) it will be stored in the variable of type "double" called "higher".
  
  for (int i = 1; i < N; i++)
  
  {
    
    // We declare a statement of the "if" type, which will compare the elements of the vector until it finds the element with the largest size in it, and when it finds it, it will save it in the variable of the "double" type called "higher".
    
    if (higher < vector [i])
    
    {
      
      higher = vector [i];
      
    }
    
  }
  
  
  // We declare a statement of type "return", which will return the largest element of the vector, which is found in the variable of type "double" called "higher".
  
  return higher;
  
}


// We declare the "FindMinimum" function, to which we pass the size of the vector as well as the vector itself, and it will search among those elements for the largest element of the vector, and it will return it to us with a "return" declaration.

double FindMinimum (int N, double vector [])

{
  
  // The program will save the first element of the vector in the "Find Minimum" function, so that later it can make comparisons with it.
  
  double minimum = vector [0];
  
  
  // We declare a "for" loop, which will go through the vector but this time from position (1), since in position (0) it will be stored in the variable of type "double" called "minimum".
  
  for (int i = 1; i < N; i++)
   
  {
    
    // We declare a statement of the "if" type, which will compare the elements of the vector until it finds the element with the largest size in it, and when it finds it, it will save it in the variable of the "double" type called "minimum".  
    
    if (minimum > vector [i])
    
    {
        
      minimum = vector [i];
      
    }
    
  }
  
  
  // We declare a statement of type "return", which will return the largest element of the vector, which is found in the variable of type "double" called "minimum".

  return minimum;
  
}


// We declare the "StandardDeviation" function, which will take care of the standard deviation of the content of the vector, passing the size (N) and the vector itself as parameters.

double StandardDeviation (int N, double vector [])

{
    
  
  // We declare a variable of type "double", which we call "deviation".
  
  double deviation;
  
  
  // We declare a variable of type "double", which we call "variance".
  
  double variance;
  
  
  // We declare again the "Average" function that we had used before, because now we will need it.
  
  double average = Average (N, vector);
  
  
  // We declare a "for" loop, to traverse the vector.
  
  for (int i = 0; i < N; i++)
  
  {
    
    // We declare again a "double" type variable called "variance", which is the result of the sum of the "variance" itself plus the exponential of the vector content minus the mean and squared (to make this calculation, we have had to declare the function of type "pow").
    
    variance = variance + pow ((vector [i] - average), 2);
    
  }
  
  
  // We declare again the variable of type "double" called "deviation", which will calculate this by means of a calculation, in which the square root of the variable of type "double" called "variance" is added, between the number of vector elements, minus (1).
  
  deviation = sqrt (variance / N - 1);
  
  
  // We declare a statement of type "return", which will return the result made previously of the variable of type "double" called "deviation".
  
  return deviation;

}