



#include <iostream>

#include <stdio.h>

using namespace std;

bool IsArmstrong(int number){

int temp, sum = 0;

int remainder;

temp = number;

bool status;

if (temp < 10)
{
  status = true;
}
else
{
  


while (temp != 0)
{
  remainder = temp % 10;

  sum = sum + (remainder * remainder * remainder);

  temp = temp / 10;
  
}

if (sum == number)
{
  status = true;
}

else
{
  status = false;
}

return status;
}
}