//Ejercicio 4: Práctica 6

/*Desarrolle un programa (collatz.cc) que entregue la secuencia de Collatz de un número entero.*/


#include <iostream>

#include <stdio.h>

#include <vector>


void conjecture (int kInitialValue) {


    std:: cout << kInitialValue << " ";


    if (kInitialValue > 1) {


        if (kInitialValue % 2 == 0) {

            conjecture (kInitialValue / 2);



        } else {

            conjecture (kInitialValue + kInitialValue + kInitialValue + 1);


        }


    }


}


int main() {
    

    int kInitialValue = 0;


    std:: cout << "Enter a number to perform the Collatz conjecture: ";


    std:: cin >> kInitialValue;


    conjecture (kInitialValue);


    return 0;

    
}