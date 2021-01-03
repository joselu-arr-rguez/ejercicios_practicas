/**


* Universidad de La Laguna.

* Escuela Superior de Ingeniería y Tecnología.

* Grado en Ingeniería Informática.

* Informática Básica.


* @title Práctica 4: Fundamentos de Programación Básica.

* @file ejercicio_4_practica_4.cc

* @author José Luis Arribas Rodríguez <alu0101416700@ull.es>.

* @copyright José Luis Arribas Rodríguez (2021).

* @date 3 de enero de 2021.

* @brief Escribir un programa en (C++), que calcule y muestre la media de tres calificaciones, de alumnos de la asignatura de "Informática Básica". 

*        El programa solicitará al usuario, la calificación de cada uno de los tres alumnos, donde cada calificación, será un valor comprendido en el

*        intervalo numérico entre (0.0) y (10.0).



* @bug No hay "bugs" conocidos.

* @see https://github.com/joselu-arr-rguez/ejercicios_practicas/blob/main/ejercicios_practica_4/ejercicio_4_practica_4.cc


*/




#include <iostream>


using namespace std;




int main() {
  
  
  double first_student_mark;
  
  double second_student_mark;
  
  double third_student_mark;
  
  
  double average_mark;
  
  
  
  cout << "Enter the mark of the first student, for the (Basic Computer Science) course: ";
  
  cin >> first_student_mark;
  
  
  
  if (first_student_mark <= 10)
  
  {
    
    
    cout << "Enter the mark of the second student, for the (Basic Computer Science) course: ";
    
    cin >> second_student_mark;
    
    
    if (second_student_mark <= 10) 
    
    {
      
            
      cout << "Enter the mark of the third student, for the (Basic Computer Science) course: ";
      
      cin >> third_student_mark;
      
      
      if (third_student_mark <= 10)
      
      {
                  
                
        average_mark = (first_student_mark + second_student_mark + third_student_mark) / 3;
        
        
        cout << "The average mark of the three students, in the (Basic Computer Science) course, is: " << average_mark << "\n";
        
        
      }
      
      
      else
      
      {
        
        
        cout << "Error. The mark must be within the numerical range (0.0) and (10.0)." << "\n";
        
        
      }
      
    } 
     
    
    else 
      
    {
      
      
      cout << "Error. The mark must be within the numerical range (0.0) and (10.0)." << "\n";
      
      
    }
   
  }
  
  
  else 
  
  {
    
    
    cout << "Error. The mark must be within the numerical range (0.0) and (10.0)." << "\n";
    
    
  }
  
  
    
  return 0;
  
   
}