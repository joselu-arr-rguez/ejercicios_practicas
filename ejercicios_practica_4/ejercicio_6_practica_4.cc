/**


* Universidad de La Laguna.

* Escuela Superior de Ingeniería y Tecnología.

* Grado en Ingeniería Informática.

* Informática Básica.


* @title Práctica 4: Fundamentos de Programación Básica.

* @file ejercicio_6_practica_4.cc

* @author José Luis Arribas Rodríguez <alu0101416700@ull.es>.

* @copyright José Luis Arribas Rodríguez (2021).

* @date 1 de enero de 2021.

* @brief  Escriba un programa en (C++), que calcule la distancia entre 2 puntos (A) y (B), en el espacio cartesiano de 3 dimensiones.

*         Los puntos (A) y (B), tienen tres coordenadas cada uno. 


*         Es decir:

*         A = (x_1, y_1, z_1)

*         B = (x_2, y_2, z_2)


*         El usuario, introducirá los valores de (x_1, y_1, z_1, x_2, y_2, z_2) respectivamente.

*         Una vez, introducidos los valores, el programa calculará e imprimirá en pantalla, la distancia entre los puntos, donde la distancia entre

*         los puntos (A) y (B), viene definida por la siguiente fórmula:

*         distance (A, B) = sqrt ((x_2 - x_1) ^ 2 + (y_2 - y_1) ^ 2 + (z_2 - z_1) ^ 2)



* @bug No hay "bugs" conocidos.

* @see https://github.com/joselu-arr-rguez/ejercicios_practicas/blob/main/ejercicios_practica_4/ejercicio_6_practica_4.cc


*/




#include <iostream>

#include <math.h>


using namespace std;




int main() {
  
  
  int x_1;
  
  int y_1;
  
  int z_1;
  
  
  int x_2;
  
  int y_2;
  
  int z_2;
  
  
  
  cout << "Enter the coordinate (x_1) of point (A): ";
  
  cin >> x_1;
  
  
  cout << "Enter the coordinate (y_1) of point (A): ";
  
  cin >> y_1;
  
  
  cout << "Enter the coordinate (z_1) of point (A): ";
  
  cin >> z_1;
  
  
  
  cout << "Enter the coordinate (x_2) of point (B): ";
  
  cin >> x_2;
  
  
  cout << "Enter the coordinate (y_2) of point (B): ";
    
  cin >> y_2;
  
  
  cout << "Enter the coordinate (z_2) of point (B): ";
  
  cin >> z_2;
  
  
  
  int distance_x = 0;
  
  int distance_y = 0;
  
  int distance_z = 0;
  
  
  int distance_squared_x = 0;
  
  int distance_squared_y = 0;
  
  int distance_squared_z = 0;
  
  
  int distance_between_A_B;
  
  
  
  distance_squared_x = distance_x ^ 2;
  
  distance_squared_y = distance_y ^ 2;
  
  distance_squared_z = distance_z ^ 2;
  
  
  distance_between_A_B = sqrt (distance_squared_x + distance_squared_y + distance_squared_z);
  
  
  
  cout << "The distance between the two points (A) and (B), is: " << distance_between_A_B << " m." << "\n";
  
  

  return 0;
  
  
}