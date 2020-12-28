/* Escriba un programa llamado "funciones.cc", que contenga el código (definiciones), de las funciones declaradas en el fichero de cabecera.

* Universidad de La Laguna

* Escuela Superior de Ingeniería y Tecnología

* Grado en Ingeniería Informática

* Asignatura: Informática Básica

* Curso: Primero

* @title Práctica 8: Funciones (2). GitHub

* @file funciones.cc

* @author José Luis Arribas Rodríguez <alu0101416700@ull.edu.es>

* @copyright José Luis Arribas Rodríguez (2020)

* @version 1.0

* @see https://github.com/joselu-arr-rguez/IB-2020-2021-Practica8-Funciones/blob/main/funciones.cc

*/


using namespace std;


int FindLetter (string vector, char letter) {

  int position = - 1;

  int len = vector.length();

  for (int i = 0; i < len; i++){

    if (vector[i] == letter)
    {

     position = i;

     return position;

    } 
  
  }
  return position;

}