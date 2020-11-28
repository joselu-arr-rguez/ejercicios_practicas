//Ejercicio 4: Práctica 4

/*Calculamos y mostramos la nota media de tres calificaciones de alumnos de la asignatura de Informática Básica*/

#include <iostream>

int main() {

    double first_student_mark;

    double second_student_mark;

    double third_student_mark;

    double average_mark;


    std::cout<<"Enter the mark of the first student: ";

    std::cin>>first_student_mark;

    if (first_student_mark<=10){


        std::cout<<"Enter the mark of the second student: ";

        std::cin>>second_student_mark;

        if (second_student_mark<=10){

            
            std::cout<<"Enter the mark of the third student: ";

            std::cin>>third_student_mark;

            if (third_student_mark<=10){
                
                
                average_mark=(first_student_mark+second_student_mark+third_student_mark)/3;

                std::cout<<"The average mark is: "<<average_mark<<"\n";


            }else{
                std::cout<<"ERROR. The mark must be between 0.0 and 10.0"<<"\n";
            }
        
        }else {
            std::cout<<"ERROR. The mark must be between 0.0 and 10.0"<<"\n";
        }

    }else {
        std::cout <<"ERROR. The mark must be between 0.0 and 10.0"<<"\n";
    }
    
    
    return 0;
}