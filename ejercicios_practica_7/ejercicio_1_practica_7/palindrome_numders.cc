//Ejercicio 5: Práctica 7

/*Imprimimos por pantalla la cantidad de memoria que utiliza su compilador, para almacenar cada uno de los tipos de básicos del lenguaje*/

#include <iostream>

#include "funciones.h"

#include "funciones.cc"

int main() {

  int number;
  std:: cout << "Enter the number to check if it is palindrome: ";

  std:: cin >> number;


  bool flag;

  flag = IsPalindromeNumber (number);

  if (flag)

  {
   std:: cout << "The number is a palindrome" << "\n"; 
  }

  else

  {
   std:: cout << "The number is not a palindrome" << "\n";
  }
  
  return 0;

}
