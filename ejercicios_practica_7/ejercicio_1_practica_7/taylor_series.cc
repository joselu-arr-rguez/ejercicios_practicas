//Ejercicio 3: Práctica 7

/*Imprimimos por pantalla la cantidad de memoria que utiliza su compilador, para almacenar cada uno de los tipos de básicos del lenguaje*/

#include <iostream>

#include "funciones.h"

#include "funciones.cc"

#include <math.h>


int main() {

    double exponent;

    unsigned num_terms;

    int number;

    std::cout << "Enter a number to calculate the factorial: ";

    std:: cin >> number;

    factorial(number);

    std::cout << "Enter the exponent value: ";

    std:: cin >> exponent;

    std::cout << "Enter the number of terms for the Taylor series: ";

    std:: cin >> num_terms;

    printf ("The Taylor series result for n = %d, exponent = %d is: %f\n", num_terms, exponent, MyExp (exponent, num_terms));

    system ("pause");
    
    return 0;

}


