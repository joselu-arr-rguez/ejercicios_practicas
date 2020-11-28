//Ejercicio 4: Práctica 7

/*Imprimimos por pantalla la cantidad de memoria que utiliza su compilador, para almacenar cada uno de los tipos de básicos del lenguaje*/

#include <iostream>

#include "funciones.h"

#include "funciones.cc"

int main() {

    int year;
    int number;

    std:: cout << "Enter the year to calculate the number of days: ";

    std:: cin >> year;

    std:: cout << "Enter the month to calculate the number of days: ";

    std:: cin >> number;

    std:: cout << "The number of days of the number month " << number << " is " << DayMonth (number, year);



    
    return 0;

}
