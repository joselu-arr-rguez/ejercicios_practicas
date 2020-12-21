//Ejercicio 2: Práctica 6
/*En primer lugar, solicitamos que introduzca un número entero, (n) que indicará cuántas palabras introducirá a continuación. A continuación el usuario introducirá (n) palabras*/
/*Después, la salida del programa debe imprimir en pantalla la palabra más larga y la más corta introducidas*/

#include <iostream>

int main() {

    int number;
    std::string word;
    std::string long_word;
    std::string short_word;
    std::cout<<"Enter a number of words: ";
    std::cin>>number;
    std::string vector[number];
    std::cout<<"You will have to enter: "<<number<<" words"<<"\n";

    for (int i = 0; i < number; i++) {
        std::cin>>vector[i];
        std::cout<<"The word "<<i+1<<": "<<vector[i]<<"\n";
    }
    long_word=short_word=word=  vector[0];
    for (int j = 1; j < number; j++){
       
        if(vector[j].length()>long_word.length()){
            
            long_word=vector[j];
        }        
        if(vector[j].length()<short_word.length()) short_word=vector[j];
            
    }
    std::cout<<"The longest word is: "<<long_word<<"\n";
    std::cout<<"The shortest word is: "<<short_word<<"\n";
        
        
        
        
        
    
    
    std::cout<<"\n";
    
    return 0;
}