//Ejercicio 2: Práctica 5

/*Declaramos cuatro variables de diferentes tipos y las inicializamos utilizando los diferentes mecanismos de inicialización de variables que suministra el lenguaje*/

#include <iostream>

int main() {

    std::string char_variable;

    float float_variable;

    int int_variable;

    short short_variable;


    char_variable="hola";

    float_variable=0.1;

    int_variable=1;

    short_variable=1;


    std::string &c=char_variable;

    float &f=float_variable;

    int &i=int_variable;

    short &s=short_variable;


    std::cout <<"La variable referenciada a nuestra variable char: "<<c<<"\n";  

    std::cout <<"La variable referenciada a nuestra variable float: "<<f<<"\n";

    std::cout <<"La variable referenciada a nuestra variable int: "<<i<<"\n";

    std::cout <<"La variable referenciada a nuestra variable short: "<<s<<"\n";   
  
   
    return 0;

}