//

#include <math.h>

bool IsPrime (int number) {

    for (int i = 2; i <= number / 2 ; i++) {

        if (number % i == 0) {

            return false;


        }

    }

    return true;
}

bool IsPalindrome (std:: string text) {
    
    int len = text.length();

    for (int i = 0; i < len/2; i++){

        if (text[i] != text[len-1-i]){

            return false;

        } 

       
    }

    return true;

}


void PrimeLower (int number) {

int prime, counter;

for (int i = 1; i <= number; i++)

{
    prime= 1;

    counter = 2;

    while (counter <= i / 2 && prime)
    {
        if (i % counter == 0){
        prime = 0;

        counter ++;

        }

        

    }
    
    if (prime){

    std::cout << i << " ";
    }


}
}

int factorial (int number) {

int factorial = 1;

for (int i = 1; i <= number; i++)
{
    
factorial = factorial * i;



}
#include <math.h>

for (int i = 0; i < num_terms; i++)
{
    t = pow(exponent, i) / factorial (i);

    s += t;

}

    return s;

}

bool LeapYear (unsigned int year) {

bool is_leap = false;

if ((year % 4)==0)
{
    is_leap = true;
}

return is_leap; 

}

int DayMonth (int number, int year) {


int number_days;

if (number < 1|| number > 12) {

std:: cout << "error, incorrect month";

}

switch (number) {


case 2: if (LeapYear(year))

number_days = 29;

else 

number_days = 28;

break;

case 1:

case 3:

case 5:

case 7:

case 8:

case 10:

case 12: number_days = 31;

break;

default: number_days=30;

}
return number_days;

}



    
    



