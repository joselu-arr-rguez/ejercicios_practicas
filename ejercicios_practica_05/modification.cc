/**
  
  
  * Universidad de La Laguna.
  
  * Escuela Superior de Ingeniería y Tecnología.
  
  * Grado en Ingeniería Informática.
  
  * Informática Básica.
  
  
  * @title Práctica 5: La "Guía de Estilo de Google", para (C++).
  
  *                    La herramienta "make", para automatizar, el proceso de recompilación, de los programas necesarios (makefile).
  
  *                    Las referencias.
  
  *                    Los tipos de datos.
  
  
  * @file modification.cc
  
  * @author José Luis Arribas Rodríguez (alu0101416700@ull.es).
  
  * @copyright José Luis Arribas Rodríguez (2021).
  
  * @date 17 de enero de 2021.
  
  * @brief Escribir un programa en (C++), llamado "modification", en el que se calcule, el "size", de los tipos básicos del lenguaje y las
  
  *        referencias a estas. 
  
  *        Luego, con los operadores, de comparación, indicar, si son iguales.
  
  
  * @bug No hay "bugs" conocidos.
  
  * @see https://github.com/joselu-arr-rguez/ejercicios_practicas/blob/main/ejercicios_practica_05/modification.cc
  
  
*/ 




#include <iostream>


using namespace std;




int main() {
        
  
  string char_variable;
  
  
  float float_variable;
  
  int int_variable;
  
  short short_variable;
  
  
  
  char_variable = "Hello";
  
  float_variable = 0.1;
  
  int_variable = 1;
  
  short_variable = 1;
  
  
  string & c = char_variable;
  
  
  
  float & f = float_variable;
  
  int & i = int_variable;
  
  short & s = short_variable;
  
  
  
  cout << "The variable, referenced to our variable (char), is: " << char_variable << "." << "\n";  
  
  cout << "The variable, referenced to our variable (float), is: " << float_variable << "\n";
  
  cout << "The variable, referenced to our variable (int), is: " << int_variable << "\n";
  
  cout << "The variable, referenced to our variable (short), is: " << short_variable << "\n";   
  
  
  cout << "------------------------------------------------------------" << "\n";
  
  
  cout << "The reference, referenced to our variable (char), is: " << c << "." << "\n";  
  
  cout << "The reference, referenced to our variable (float), is: " << f << "\n";
  
  cout << "The reference, referenced to our variable (int), is: " << i << "\n";
  
  cout << "The reference, referenced to our variable (short), is: " << s << "\n";
  
  
  cout << "------------------------------------------------------------" << "\n";
  
  
  
  if (char_variable == c) 
  
  {
      
    cout << "Both variables are the same." << "\n";
    
  }
  
  
  else 
  
  {
      
    cout << "Error. Both variables are not the same." << "\n";
     
  }
  
  
  
  if (float_variable == f) 
  
  {
      
    cout << "Both variables are the same." << "\n";
    
  }
  
  
  else 
  
  {
      
    cout << "Error. Both variables are not the same." << "\n";
     
  }
  
  
  
  if (int_variable == i) 
  
  {
      
    cout << "Both variables are the same." << "\n";
    
  }
  
  
  else 
  
  {
      
    cout << "Error. Both variables are not the same." << "\n";
     
  }
  
  
  
  if (short_variable == s) 
  
  {
      
    cout << "Both variables are the same." << "\n";
    
  }
  
  
  else 
  
  {
      
    cout << "Error. Both variables are not the same." << "\n";
     
  }
  
  
  
  return 0;
  
  
}