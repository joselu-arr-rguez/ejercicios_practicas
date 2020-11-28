//Ejercicio 3: Práctica 5

/*Imprimimos por pantalla la tabla de verdad de los operadores lógicos (and, or, not)*/

#include <iostream>

int main() {

    bool p;

    bool q;


         std::cout <<"  p         q          p & q   "<<"\n";
        
         std::cout <<"-----     -----     -----------"<<"\n";

        std::cout <<true<<" "<<true<<" "<<(true && true)<<"\n";

        std::cout <<false<<" "<<false<<" "<<(false && false)<<"\n";

        std::cout <<true<<" "<<false<< " " <<(true && false)<<"\n";

        std::cout <<false<< " " <<true<< " " <<(false && true)<<"\n";


         std::cout <<"  p         q          p || q  "<<"\n";
        
         std::cout <<"-----     -----     -----------"<<"\n";

        std::cout <<true<< " "<<true<< " "<<(true || true)<<"\n";

        std::cout <<false<< " " <<false<< " " <<(false || false)<<"\n";

        std::cout <<true<< " " <<false<< " " <<(true || false)<<"\n";

        std::cout <<false<< " " <<true<< " " <<(false || true)<<"\n";


        std::cout <<"  p        !p  "<<"\n";  

            std::cout <<"-----     -----"<<"\n";

         std::cout <<true<<"         "<<!true<<"\n";

        std::cout <<false<<"         "<<!false<<"\n";


  
   
    return 0;

}