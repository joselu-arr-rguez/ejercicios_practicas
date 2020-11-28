//Ejercicio 1: Práctica 5

/*Imprimimos por pantalla la cantidad de memoria que utiliza su compilador, para almacenar cada uno de los tipos de básicos del lenguaje*/

#include <iostream>

int main() {

    int spaces_char=sizeof(char);

    int spaces_short=sizeof(short);

    int spaces_float=sizeof(float);
    
    int spaces_int=sizeof(int);
    
    int spaces_double=sizeof(double);

    int spaces_long=sizeof(long);
     
    
    std::cout <<"El tipo de datos char se representa utilizando: "<<spaces_char<<" bytes "<<"\n";  

    std::cout <<"El tipo de datos short se representa utilizando: "<<spaces_short<<" bytes "<<"\n";   

    std::cout <<"El tipo de datos float se representa utilizando: "<<spaces_float<<" bytes "<<"\n";  
    
    std::cout <<"El tipo de datos int se representa utilizando: "<<spaces_int<<" bytes "<<"\n";     

    std::cout <<"El tipo de datos double se representa utilizando: "<<spaces_double<<" bytes "<<"\n";
    
    std::cout <<"El tipo de datos long se representa utilizando: "<<spaces_long<<" bytes "<<"\n";   

    
    return 0;

}