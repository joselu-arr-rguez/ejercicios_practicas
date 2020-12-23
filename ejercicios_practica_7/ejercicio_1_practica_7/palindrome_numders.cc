//Ejercicio 5: Práctica 7

/*Imprimimos por pantalla la cantidad de memoria que utiliza su compilador, para almacenar cada uno de los tipos de básicos del lenguaje*/

#include <iostream>

#include "funciones.h"

#include "funciones.cc"

int main() {

  int number_1;

  int number_2;

  int vector [1000];

  int producto =0;

  int number_choose = 0;

  int z=0;

  std:: cout << "Enter the first number in the range: ";

  std:: cin >> number_1;

  std:: cout << "Enter the second number in the range: ";

  std:: cin >> number_2;

  for (int i = 1; i <= number_2; i++)
  {
    for (int j = 1; j <= number_2; j++)
    {
      producto = i * j;

      vector [z] = producto;

      z++;

      std:: cout << vector [z-1] << " ";
    }
    
  }
   std::cout <<  "\n";
 

  bool flag;

  for (int i = 0; i <=81; i++)
  {

    number_choose = vector [i];

    flag = IsPalindromeNumber (number_choose);

    if (flag){

      std:: cout << "The number palindrome are: "<< " ";

      std:: cout << number_choose<< " ";

      std::cout <<  "\n";
    }

    
  }
  

  
 
  
  return 0;

}
