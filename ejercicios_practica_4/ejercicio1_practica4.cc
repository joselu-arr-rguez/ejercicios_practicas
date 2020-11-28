//Ejercicio 1: Práctica 4

/*Calculamos y mostramos el coste de una carretera, en función de su longitud y coste (por metro)*/

#include <iostream>

int main() {

    const double kValuePerMeter=1624;  

    std::cout<<"Enter number of meters of road: ";

    double meters;

    std::cin>>meters;

    double result;

    result=meters*kValuePerMeter;

    std::cout<<"The cost is: "<<result<<"€"<<"\n";   
    
    return 0;
}