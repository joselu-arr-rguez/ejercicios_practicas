//Ejercicio 1: Práctica 6

/*Escriba un programa (dividers.cc) que solicite al usuario un número e imprima en pantalla todos los divisores del número introducido.*/


#include <iostream>


int main () {


    int number;
    
    int remainder;


    std:: cout << "Enter any number: ";

    std:: cin >> number;

    std:: cout << "Its dividers are: ";


    for (int i = 1; i <= number; i = i + 1) {
        
        remainder = number % i;


        if (remainder == 0)

        {

            std:: cout << i << " ";
            
        }
    

    }
    

    std:: cout << "\n";


    return 0;


}