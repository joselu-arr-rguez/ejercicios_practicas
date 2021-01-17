/**
  
  
  * Universidad de La Laguna.
  
  * Escuela Superior de Ingeniería y Tecnología.
  
  * Grado en Ingeniería Informática.
  
  * Informática Básica.
  
  
  * @title Práctica 5: La "Guía de Estilo de Google", para (C++).
  
  *                    La herramienta "make", para automatizar, el proceso de recompilación, de los programas necesarios (makefile).
  
  *                    Las referencias.
  
  *                    Los tipos de datos.
  
  
  * @file arithmetic_operators.cc
  
  * @author José Luis Arribas Rodríguez (alu0101416700@ull.es).
  
  * @copyright José Luis Arribas Rodríguez (2021).
  
  * @date 17 de enero de 2021.
  
  * @brief Escribir un programa en (C++), llamado "arithmetic_operators.cc", que declare e inicialice, variables de tipos aritméticos, e imprima en
  
  *        pantalla, el resultado de operar esas variables, con todos los operadores que pueda utilizar con ellas. 
  
  *        Utilice, operadores aritméticos y de comparación. 
  
  
  *        El programa imprimirá en pantalla, líneas como la siguiente:
  
  *        El resultado de operar (7 % 3), es (1).
  
  
  *        Para cada uno, de los operadores considerados.
  
  
  *        Revise asimismo el artículo "https://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/",
  
  *        particularmente la sección, "Epsilon comparisons".

  *        Trate de incorporar, en el programa, lo que haya aprendido, leyendo las referencias anteriores.
  
  
  * @bug No hay "bugs" conocidos.
  
  * @see https://github.com/joselu-arr-rguez/ejercicios_practicas/blob/main/ejercicios_practica_05/arithmetic_operators.cc
  
  
*/ 




#include <cmath>

#include <float.h>

#include <iostream>

#include <stdio.h>


using namespace std;




// We declare the "AlmostEqualRelative" function, to which, we pass as an input parameter, three variables, of the type "float", called "A", "B" and
  
// "maxRelDiff", being these equal to "FLT_EPSILON" (which is the value, true of epsilon).


bool AlmostEqualRelative(float A, float B, float maxRelDiff = FLT_EPSILON) {
  
  
  
  // We declare the variables of the type "float", called "A" and "B", which are matched, to their values, with a greater number of decimal places, using the function, called "fabs".
  
  
  A = fabs(A);
  
  B = fabs(B);
  
  
  
  // We declare a variable, of the type "float", which, we call "diff", being equal, to the subtraction of the absolute value, between the variables,
  
  // of the type "float, called" A "and" B "(previously declared ).
  
  
  float diff = fabs(A - B);
  
  float largest = (B > A) ? B : A;
  
  
  if (diff <= largest * maxRelDiff) 
  
  {
          
    
    return true;
    
    return false;
    
    
  }
  
  
}




int main() {
      
  
  int first_arithmetic_variable = 0.0;
  
  int second_arithmetic_variable = 0.0;
  
  
  float first_floating_point_number = 0.33333;
  
  float second_floating_point_number = 1.0 / 3.0;
  
  
  
  printf("first_floating_point_number: %.20f\n", first_floating_point_number);
  
  printf("second_floating_point_number: %.20f\n", second_floating_point_number);
  
  
  
  cout << "Enter the first variable, of type arithmetic: " << "\n";
  
  cin >> first_arithmetic_variable;
  
  
  cout << "Enter the second variable, of type arithmetic: " << "\n";
  
  cin >> second_arithmetic_variable;
  
  
  
  cout << "The result, of adding, both variables of arithmetic type, is: " << first_arithmetic_variable + second_arithmetic_variable << "\n";
  
  cout << "The result, of subtracting, both variables of arithmetic type, is: " << first_arithmetic_variable - second_arithmetic_variable << "\n";
  
  cout << "The result, of multiplying, both variables of arithmetic type, is: " << first_arithmetic_variable * second_arithmetic_variable << "\n";
  
  cout << "The result, of dividing, both variables of arithmetic type, is: " << first_arithmetic_variable / second_arithmetic_variable << "\n";
  
  cout << "The result, of the rest of the division, of both variables of arithmetic type, is: " << first_arithmetic_variable %
  
  second_arithmetic_variable << "\n";
  
  
  
  bool flag;
  
  
  
  // We call the function "AlmostEqualRelative", which returns a variable, of the type "bool". This variable, of type "bool", is stored in another
  
  // variable, of type bool, called "flag" (already created previously). Which, in turn, contains two other variables (already created previously),
  
  // then we check, through the two conditions, if the value of epsilon is true or false.
  
  
  flag = AlmostEqualRelative(first_floating_point_number, second_floating_point_number);
  
  
  
  if (flag == true)
  
  {
      
    
    cout << "The result, from the epsilon comparison, is: true" << "\n";
    
    
  }
  
  
  else
  
  {
          
    cout << "The result, from the epsilon comparison, is: false" << "\n";
      
  }
  
  
  
  return 0;
  
  
}