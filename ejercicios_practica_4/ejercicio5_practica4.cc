//Ejercicio 5: Práctica 4

/*Calculamos el área y el perímetro de un cuadrado*/

#include <iostream>

int main() {

    double square_size_length;


    std::cout<<"Enter the length of the side of the square: ";

    std::cin>>square_size_length;

    
    double area;

    double perimeter;


    area=square_size_length*square_size_length;

    perimeter=square_size_length*4;


    std::cout<<"The area of the square is: "<<area<<" m^²."<<"\n";

    std::cout<<"The perimeter of the square is: "<<perimeter<<" m."<<"\n";


    return 0;
}