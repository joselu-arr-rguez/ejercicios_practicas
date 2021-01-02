using namespace std;


#include "string"


// We have included the library "math.h" to be able to use the function "pow".

#include <math.h>

#include "vector_statistics.h"


double Average (int N, double vector []) 

{
  
  // We declare a variable of type "double", which we call "average".
  
  double average;
  
  
  // We declare a variable of type "double", which we call "sum".
  
  double sum;
  
  
  // We declare a loop "for", which will go through the vector, position by position. Inside this it will save in the variable of the type "int" called "sum", the result of adding all the elements of the vector.
  
  for (int i = 0; i < N; i++)
  
  {
      
    sum += vector [i]; 
    
  }
  
  
  // We declare the average operation, which will be stored in the variable of type "double", which we had called "average".
  
  average = sum / N;
  
  
  // We declare a statement (return), which will return the result of the average.
  
  return average;
  
}

double FindHigher (int N, double vector []) 

{
  
  // The program will save the first element of the vector in the "Find Higher" function, so that later it can make comparisons with it.
  
  double higher = vector [0];
  
  
  // We declare a "for" loop, which will go through the vector but this time from position (1), since in position (0) it will be stored in the variable of type "double" called "higher".
  
  for (int i = 1; i < N; i++)
  
  {
    
    // We declare a statement of the "if" type, which will compare the elements of the vector until it finds the element with the largest size in it, and when it finds it, it will save it in the variable of the "double" type called "higher".
    
    if (higher < vector [i])
    
    {
      
      higher = vector [i];
      
    }
    
  }
  
  
  // We declare a statement of type "return", which will return the largest element of the vector, which is found in the variable of type "double" called "higher".
  
  return higher;
  
}

// We declare the "FindMinimum" function, to which we pass the size of the vector as well as the vector itself, and it will search among those elements for the largest element of the vector, and it will return it to us with a "return" declaration.

double FindMinimum (int N, double vector [])

{
  
  // The program will save the first element of the vector in the "Find Minimum" function, so that later it can make comparisons with it.
  
  double minimum = vector [0];
  
  
  // We declare a "for" loop, which will go through the vector but this time from position (1), since in position (0) it will be stored in the variable of type "double" called "minimum".
  
  for (int i = 1; i < N; i++)
   
  {
    
    // We declare a statement of the "if" type, which will compare the elements of the vector until it finds the element with the largest size in it, and when it finds it, it will save it in the variable of the "double" type called "minimum".  
    
    if (minimum > vector [i])
    
    {
        
      minimum = vector [i];
      
    }
    
  }
  
  
  // We declare a statement of type "return", which will return the largest element of the vector, which is found in the variable of type "double" called "minimum".

  return minimum;
  
}

double Sum(int N, double vector[]) {

// We declare a variable of type "double", which we call "sum".
  
  double sum = 0;
  
  
  // We declare a loop "for", which will go through the vector, position by position. Inside this it will save in the variable of the type "int" called "sum", the result of adding all the elements of the vector.
  
  for (int i = 0; i < N; i++)
  
  {
      
    sum += vector [i]; 
    
  }

  return sum;

}

double Product(int N, double vector[]) {

// We declare a variable of type "double", which we call "sum".
  
  double product = 1;
  
  
  // We declare a loop "for", which will go through the vector, position by position. Inside this it will save in the variable of the type "int" called "sum", the result of adding all the elements of the vector.
  
  for (int i = 0; i < N; i++)
  
  {
      
    product *= vector [i]; 
    
  }

  return product;

}
