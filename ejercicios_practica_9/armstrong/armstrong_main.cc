

#include <iostream>

#include "armstrong.cc"

#include "armstrong.h"



using namespace std;

int main() {

   int number;

   cout << "input an integer";

 cin >> number;

 if (IsArmstrong(number))
  {
   cout << "True, this is an Armstrong number";
  }

  else
  {
   cout << "False, this is not an Armstrong number";
  }

  return 0;

}