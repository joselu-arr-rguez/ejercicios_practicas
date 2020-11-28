//Ejercicio 1: Práctica 7 (primes.cc)


/*Escriba un programa (primes.cc) que solicite al usuario un número, e imprima en pantalla todos los números primos menores que el introducido por el usuario.*/

/*El programa ha de contener una función booleana (IsPrime) que tome como parámetro un número natural y devuelva (true o false), dependiendo de si el número es primo o no.*/


#include <iostream>


#include "funciones.h"

#include "funciones.cc"


int main() {


    std:: cout << "Enter the number to get its lower primes number: ";


    int number;


    std:: cin >> number;

    std:: cout << "Check if the number is prime: ";


    bool flag;


    flag = IsPrime (number);


    if (flag == true) {


        std:: cout << "The " << number << " is a prime number" << "\n";


    } 
    

    else {


        std:: cout << "The " << number << " is a not prime number" << "\n";


    }


    PrimeLower (number);


    return 0;

    
}