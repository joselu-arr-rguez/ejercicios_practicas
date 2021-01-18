/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief This file declares the "Help Text" constant and two functions
 *
 */

#include <iostream>
#include <cstdlib>    // exit

#include <stdio.h>
#include <string.h>


using namespace std;

const std::string kHelpText = "fichero_entrada: Fichero a codificar \
fichero_salida:  Fichero codificado \
método:  Indica el método de encriptado \
1: Cifrado xor \
2: Cifrado de César \
password: Palabra secreta en el caso de método 1, Valor de K en el método 2 \
operación:  Operación a realizar en el fichero \
+: encriptar el fichero \
-: desencriptar el fichero";

void Usage(int argc, char *argv[]);
void Cesar();




