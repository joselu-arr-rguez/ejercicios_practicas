

#include <iostream>

#include "vector_statistics.h"


using namespace std;


int main ()

{
          
  int N;
  
  int M;
  
  int P;
  
  
  cout << "Enter the number of vector elements: ";
  
  cin >> N;
  
  
  cout << "Enter the minimum range of the vector: ";
  
  cin >> M;
  
  
  cout << "Enter the maximum range of the vector: ";
  
  cin >> P;
  
  
  double vector [N];
  
  double value;
  
  
  for (int i = 0; i < N; i++)
  
  {
    
    value = M + rand () % P;
    
    
    vector [i] = value;
    
    
    cout << vector [i] << " ";
    
  }
  
  
  cout << "The result of the average is: " << Average (N, vector) << "\n";
  
  cout << "The biggest number in the vector is: " << FindHigher (N, vector) << "\n";
  
  cout << "The smallest number in the vector is: " << FindMinimum (N, vector) << "\n";
  
  cout << "The result of the sum is: " << Sum (N, vector) << "\n";

  cout << "The result of the product is: " << Product (N, vector) << "\n";
  
  
  return 0;
  
}