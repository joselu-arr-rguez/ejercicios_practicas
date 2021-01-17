/**
  
  
  * Universidad de La Laguna.
  
  * Escuela Superior de Ingeniería y Tecnología.
  
  * Grado en Ingeniería Informática.
  
  * Informática Básica.
  
  
  * @title Práctica 5: La "Guía de Estilo de Google", para (C++).
  
  *                    La herramienta "make", para automatizar el proceso de recompilación, de los programas necesarios (makefile).
  
  *                    Las referencias.
  
  *                    Los tipos de datos.
  
  
  * @file data_types.cc
  
  * @author José Luis Arribas Rodríguez (alu0101416700@ull.es).
  
  * @copyright José Luis Arribas Rodríguez (2021).
  
  * @date 17 de enero de 2021.
  
  * @brief Escribir en (C++), un programa llamado "data_types.cc", que imprima en pantalla, la cantidad de memoria, que utiliza su compilador, para
  
  *        almacenar, cada uno, de los tipos básicos, del lenguaje.
  
  *        Investigue, para ello, el operador "sizeof". 
  
  *        El programa, deberá imprimir en pantalla, líneas como la siguiente:
  
  *        El tipo de datos "int", se representa utilizando: 4 bytes.
  
  
  *        Para cada uno, de los tipos, de datos del lenguaje. Haga que las líneas, se muestren, comenzando, con los tipos de lenguaje, que utilizan,
  
  *        menos cantidad, de memoria y finalizando, con los que ocupan, mayor cantidad.
  
  
  * @bug No hay "bugs" conocidos.
  
  * @see https://github.com/joselu-arr-rguez/ejercicios_practicas/blob/main/ejercicios_practica_05/data_types.cc
  
  
*/ 




#include <iostream>


using namespace std;




int main() {
        
  
  int spaces_char = sizeof (char);
  
  int spaces_short = sizeof (short);
  
  int spaces_float = sizeof (float);
    
  int spaces_int = sizeof (int);
    
  int spaces_double = sizeof (double);
  
  int spaces_long = sizeof (long);
     
    
  cout << "The (char) data type is represented using: " << spaces_char << " bytes." << "\n";  
  
  cout << "The (short) data type is represented using: " << spaces_short << " bytes." << "\n";   
  
  cout << "The (float) data type is represented using: " << spaces_float << " bytes." << "\n";  
    
  cout << "The (int) data type is represented using: " << spaces_int << " bytes." << "\n";     
  
  cout << "The (double) data type is represented using: " << spaces_double << " bytes." << "\n";
    
  cout << "The (long) data type is represented using: " << spaces_long << " bytes." << "\n";   
  
    
  return 0;
  
  
}