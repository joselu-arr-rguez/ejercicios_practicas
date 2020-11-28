//Ejercicio 1: Práctica 7

/*Imprimimos por pantalla la cantidad de memoria que utiliza su compilador, para almacenar cada uno de los tipos de básicos del lenguaje*/

#include <iostream>

#include "funciones.h"

#include "funciones.cc"

int main() {

    
    std:: cout << "Enter the word to check if it is palindrome: ";

    std:: string text;

    std:: cin >> text;


    bool flag;

    flag = IsPalindrome (text);
    if (flag)
    {
        std:: cout << "The text is a palindrome" << "\n"; 
    }
    else
    {
        std:: cout << "The text is not a palindrome" << "\n";
    }
    return 0;

}


