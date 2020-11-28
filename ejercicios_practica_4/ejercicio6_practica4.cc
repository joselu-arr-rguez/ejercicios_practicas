//Ejercicio 6: Práctica 4

/*Calculamos la distancia entre 2 puntos (A y B) en el espacio cartesiano de 3 dimensiones*/

#include <iostream>

#include <math.h>

int main() {

    int x_1;

    int y_1;

    int z_1;

    int x_2;

    int y_2;

    int z_2;

    
    std::cout<<"Enter the coordinate (x_1) of the point (A): ";

    std::cin>>x_1;


    std::cout<<"Enter the coordinate (y_1) of the point (A): ";

    std::cin>>y_1;


    std::cout<<"Enter the coordinate (z_1) of the point (A): ";

    std::cin>>z_1;


    std::cout<<"Enter the coordinate (x_2) of the point (A): ";

    std::cin>>x_2;


    std::cout<<"Enter the coordinate (y_2) of the point (A): ";
    
    std::cin>>y_2;


    std::cout<<"Enter the coordinate (z_2) of the point (A): ";

    std::cin>>z_2;


    int distance_x=0;

    int distance_y=0;

    int distance_z=0;


    int distance_squared_x=0;

    int distance_squared_y=0;

    int distance_squared_z=0;

    int distance_between_A_B;


    distance_squared_x=distance_x^2;

    distance_squared_y=distance_y^2;

    distance_squared_z=distance_z^2;

    distance_between_A_B=sqrt(distance_squared_x+distance_squared_y+distance_squared_z);

    std::cout<<"The distance between the two points is: "<<distance_between_A_B<<" m."<<"\n";

    return 0;
}