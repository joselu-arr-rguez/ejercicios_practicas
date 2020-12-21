//Ejercicio 3: Práctica 6

/*Declaramos un std::vector de tamaño kVectorSize y lo inicializamos con valores aleatorios en el rango [0.0, 10.0]*/


#include <iostream>

#include <stdio.h>

#include <vector>


int main () {


    double media = 0.0;


    int higher, lower;


    const int KVectorSize = 10;


    int vector [KVectorSize];


    std:: srand (time (NULL));


    for (int i = 0; i < KVectorSize; i++)

    {

        vector [i] = rand () % 10;

    }

    for (int j = 0; j < KVectorSize; j++)

    {

        media += vector [j];
        
        printf ("%d", vector [j]);

        std:: cout << " ";

    }

    higher = lower = vector [0];

    for (int i = 0; i < KVectorSize; ++i)

    {


        if (vector [i] > higher) higher = vector [i];

        if (vector [i] < lower) lower = vector [i];

    }


    

    std:: cout << "The higher number is: " << higher << "\n";

    std:: cout << "The smallest number is: " << lower << "\n";


    std:: cout << "The average of the vector is: " << media / KVectorSize << "\n";


    return 0;


}