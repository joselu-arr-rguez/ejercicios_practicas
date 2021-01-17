/**
  
  
  * Universidad de La Laguna.
  
  * Escuela Superior de Ingeniería y Tecnología.
  
  * Grado en Ingeniería Informática.
  
  * Informática Básica.
  
  
  * @title Práctica 5: La "Guía de Estilo de Google", para (C++).
  
  *                    La herramienta "make", para automatizar, el proceso de recompilación, de los programas necesarios (makefile).
  
  *                    Las referencias.
  
  *                    Los tipos de datos.
  
  
  * @file boolean_operators.cc
  
  * @author José Luis Arribas Rodríguez (alu0101416700@ull.es).
  
  * @copyright José Luis Arribas Rodríguez (2021).
  
  * @date 17 de enero de 2021.
  
  * @brief Escribir un programa en (C++), llamado "boolean_operators.cc", que imprima en pantalla, la tabla de verdad de los operadores lógicos (and,
  
  *        or, not).
  
  *        El programa, deberá utilizar, un par de variables "booleanas" y mostrar el resultado, de operar ambas variables, con todos sus posibles
  
  *        valores y con cada uno, de los operadores lógicos.
  
  
  * @bug No hay "bugs" conocidos.
  
  * @see https://github.com/joselu-arr-rguez/ejercicios_practicas/blob/main/ejercicios_practica_05/boolean_operators.cc
  
  
*/ 




#include <iostream>


using namespace std;




int main() {
      
  
  bool p;
  
  bool q;
  
  
  {  
           
    
    cout << "\n";
        
    cout << "\n";
        
    cout << "  p      q       p & q   " << "\n";
        
    cout << "-----  -----  -----------" << "\n";
    
    cout << "  " << true << "      " << true << "         " << (true && true) << "\n";
    
    cout << "  " << false << "      " << false << "         " << (false && false) << "\n";
    
    cout << "  " << true << "      " << false << "         " << (true && false) << "\n";
    
    cout << "  " << false << "      " << true << "         " << (false && true) << "\n";
    
    
    cout << "\n";
        
    cout << "\n";
    
    cout << "  p      q      p || q  " << "\n";
        
    cout << "-----  -----  ----------" << "\n";
    
    cout << "  " << true << "      " << true << "        " << (true || true) << "\n";
    
    cout << "  " << false << "      " << false << "        " << (false || false) << "\n";
    
    cout << "  " << true << "      " << false << "        " << (true || false) << "\n";
    
    cout << "  " << false << "      " << true << "        " << (false || true) << "\n";
    
        
    cout << "\n";
    
    cout << "\n";
    
    cout << "  p       !p      " << "\n";
        
    cout << "-----  --------" << "\n";
    
    cout << "  " << true << "       " << ! true << "\n";
    
    cout << "  " << false << "       " << ! false << "\n";
    
    cout << "\n";
        
    cout << "\n";
    
    
  }
  
    
  return 0;
  
  
}