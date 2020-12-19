//Ejercicio 4: Práctica 5

/*Declaramos cuatro variables de diferentes tipos y las inicializamos utilizando los diferentes mecanismos de inicialización de variables que suministra el lenguaje*/

#include <iostream>

int main() {

    int number=0.0;

    int number_to_operate=0.0;

    std::cout << "Enter the first number: "<< "\n";

    std::cin >> number;

    std::cout << "Enter the second number: "<< "\n";

    std::cin >> number_to_operate;


    std::cout << "The result of the multiplication is: "<< number*number_to_operate << "\n";

    std::cout << "The result of the sum is: "<< number+number_to_operate << "\n";

    std::cout << "The result of the substraction is: "<< number-number_to_operate << "\n";

    std::cout << "The result of the divition is: "<< number/number_to_operate << "\n";

    std::cout << "The result of the rest is: "<< number%number_to_operate << "\n";
    
    return 0;

}