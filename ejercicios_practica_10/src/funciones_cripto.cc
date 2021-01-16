/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief Cada nuevo término de la serie de Fibonacci se genera sumando los dos anteriores. 
 *        Comenzando con 0 y 1, los primeros 10 términos serán: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
 *        Desarrolle en C++ un programa que calcule la suma de todos los términos de valor par 
 *        de la serie que sean menores que 1000.
 * @see https://docs.google.com/document/d/1-3hTIVf8tPrbn9u0vs0Cm2IGyX1XBgv8hReVU0KOSUQ/edit?usp=sharing
 * @see stoi http://www.cplusplus.com/reference/string/stoi/
 * An Object Oriented Version of the program:
 * @see https://stackoverflow.com/questions/21360694/sum-of-even-fibonacci-numbers-under-1000
 *
 */

#include <iostream>
#include <cstdlib>    // exit

#include <stdio.h>
#include <string>
#include <cstring>


using namespace std;

#include "funciones_cripto.h"    

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa un único número natural para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << " -- Cifrado de ficheros" << std::endl;
    std::cout <<"Modo de uso: " << argv[0] << " fichero_entrada fichero_salida método password operación" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void Cesar(char texto[], char alfabeto[]){
  int j;
  for(int i=0;i < strlen(texto); i++){
   
   j= 0;

   while (j < 52) {

   if (texto[i] == alfabeto[j] && (j < 23 && j < 49)){

   texto [i] = alfabeto [j + 3];

   }
    if (texto[i] == alfabeto[j] && (j >= 23 && j < 26)){

      if (texto [i] == 'x ') {

        texto [i] == 'a';

      }

      if (texto [i] == 'y' ) {

        texto [i] == 'b';

      }
      if (texto [i] == 'z' ) {

        texto [i] == 'c';

      }
      j = 52;

    }
    j++;
if (texto[i] == alfabeto[j] && (j >= 49 && j < 52)){

      if (texto [i] == 'X' ) {

        texto [i] == 'A';

      }

      if (texto [i] == 'Y' ) {

        texto [i] == 'B';

      }
      if (texto [i] == 'Z' ) {

        texto [i] == 'C';

      }
      j = 52;

    }
    j++;
    
   }
  }

  cout << "El texto cifrado es este" << texto << "\n";
}
