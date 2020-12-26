/**


* Universidad de La Laguna

* Escuela Superior de Ingeniería y Tecnología

* Grado en Ingeniería Informática

* Informática Básica


* @title Práctica 4: Fundamentos de Programación Básica

* @file ejercicio_2_práctica_4.cc

* @author José Luis Arribas Rodríguez <alu0101416700@ull.es>

* @copyright José Luis Arribas Rodríguez (2020)

* @date 26 de Diciembre de 2020

* @brief Escribir un programa en (C++), que permita determinar el número de yenes equivalente a una cierta cantidad de euros. 

*        Para ello, el programa solicitará al usuario que indique de cuántos euros dispone.

*        Una vez introducido la cantidad de euros, el programa imprimirá en pantalla los yuanes equivalentes sabiendo que, un yen es equivalente a (0.0081 €) de acuerdo a "Morningstar for Currency and Coinbase for Cryptocurrency".



* @bug No hay bugs conocidos

* @see 


*/




#include <iostream>


using namespace std;




int main() {
    
  
   const double kYenValue = 0.0081;
   
  
   cout << "Enter the amount of euros you have: ";
  
  
   double euros;
  
  
   cin >> euros;
  
  
   double ConversionResult;
  
  
   ConversionResult = euros * kYenValue;
  
  
   cout << "The yuan cost, equivalent to the amount of euros you entered, is: " << "¥" << ConversionResult << "\n";
    
  
   return 0;
  
  
}