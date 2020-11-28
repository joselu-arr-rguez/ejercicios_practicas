//Ejercicio 2: Práctica 4

/*Calculamos el número de yenes equivalente a una cierta cantidad de euros*/

#include <iostream>

int main() {

    const double kYenValue=0.0081;
    
    std::cout<<"Enter the amount of euros you have: ";

    double euros;

    std::cin>>euros;

    double conversionResult;

    conversionResult=euros*kYenValue;

    std::cout<<"The cost is: "<<conversionResult<<"¥"<<"\n";
    
    return 0;
}