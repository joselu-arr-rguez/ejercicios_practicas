/* Desarrolle un programa llamado "string_statistics.cc", que inicialice un vector constante de (10) componentes del tipo "std:: string", es decir, un vector con (10) cadenas de texto. Elija las cadenas que utilizará para inicializar el vector.

· Haga que el programa imprima en pantalla, para cada una de las cadenas de texto del vector: 

- La longitud de la cadena.

- El primer carácter de la cadena.

- El último carácter de la cadena.

- Sí/No la cadena en cuestión contiene el texto "abracadabra". *


* Universidad de La Laguna

* Escuela Superior de Ingeniería y Tecnología

* Grado en Ingeniería Informática

* Asignatura: Informática Básica

* Curso: Primero

* @title Práctica 8: Funciones (2). GitHub

* @file string_statistics.cc

* @author José Luis Arribas Rodríguez <alu0101416700@ull.edu.es>

* @copyright José Luis Arribas Rodríguez (2020)

* @version 1.0

* @see https://github.com/joselu-arr-rguez/ejercicios_practicas/blob/main/ejercicios_practica_8/string_statistics.cc

*/


#include <iostream>

#include "funciones.h"

#include "funciones.cc"

#include "string"


using namespace std;


int main () 

{
  
  string first;
  
  string last; 
  
  
  bool flag;
  
  const int kComponents = 10;
  
  int size;
  
    
  string vector [kComponents];
  
  
  for (int i = 0; i < kComponents; i++)
  
  {
    
    cout << "Enter the text belonging to the vector string number: " << i + 1 << "\n";
    
    
    getline (cin, vector [i]);
    
    
    size = vector [i]. size ();
    
    
    first = vector [0];
    
    
    last = vector [kComponents - 1];
    
    
    cout << "The size of the vector is: " << size << "\n";
    
  }
  
  
  cout << "The first character of the string is: " << first << "\n";
  
  cout << "The last character of the string is: " << last << "\n";
  
  
  flag = ItIsAbracadabra (vector);
  
  
  if (flag == true)
  
  {
    
    cout << "One of the (10) strings in the vector contains the text (abracadabra)." << "\n";
    
  }
  
  
  else
  
  {
    
    cout << "One of the (10) strings in the vector, does not contain the text (abracadabra)." << "\n";
    
  }
  
  
  return 0;
    
}