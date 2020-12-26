//

#include <iostream>

#include <math.h>
// La funcion "IsPrime" recibe como parametro de entrada un numero entero "int" y nos devoolvera un booleano (true o false)
bool IsPrime (int number) {
// Hacemos un bucle for que comienza desde el 2 y que llegua hasta la mitad del numero introducido y en cada iteracion se suma 1, se pòne number/2 para comprobar que el numero es primo o no.
    for (int i = 2; i <= number / 2 ; i++) {
// Por tanto la condicion para que el numero sea primo es que al ser dividido entre 2 su rsto sea distinto de 0. En este if se comprueba la condicion de que sea par (recordar que para comprobar el resto se utiliza el simbolo de %).
        if (number % i == 0) {
// Por tanto si es par devuelve un false de que es primo.
            return false;


        }

    }
// En caso contrario de no entrar al for se comprueba que es primo.
    return true;
}
// La funcion "IsPalindrome" recibe como parametro de entrada un "string" y nos devoolvera un booleano (true o false)
bool IsPalindrome (std:: string text) {
// Con la funcion .length obtendremos el tamaño de la cadena y lo guardaremos en un variable del tipo entero que es length
    int len = text.length();
// Utilizamos un bucle for que empieza en 0 y ue llegua hasta la mitad de la longitud del string ya que para comprobar que es palindrome se hay que ver si es igual de una direccion a la otra.
    for (int i = 0; i < len/2; i++){
// En el if comprobamos que desde la posicion 0 hasta la mitad del tamaño es distinto a leerlo desde el final hasta el inicio (recordar que para hacer una comparacion negada utilizamos el simbolo de !)
        if (text[i] != text[len-1-i]){
            // Como poenmos que la condicion es que sea distinto, para que sea palindrome a de ser igual por tanto dentro de este if ponemos un false.
            return false;

        } 

       
    }
    // En caso de ser palindrome sera true
    return true;

}

// La funcion PrimeLower recibe como parametro de entrada un numero del tipo entero y no devuelve nada por tanto es del tipo void
void PrimeLower (int number) {
// Declaramos dos variables, ambas del tipo int que se llaman prime counter
int prime, counter;
// Se establece un for que empieza en 1 (el 0 no se ha de tener en cuenta para mostrar los numeros primos), que el for llega hasta el numero introducido como parametro, y cada iteración suma 1.
for (int i = 1; i <= number; i++)

{
    prime= 1;

    counter = 2;
    // La variable prime se inicializa a 1 y la counter a 2, en el while se establece la condicion de que counter tiene que ser menor o igual a i/2 y que prime tenga un valor, se tiene que cumplir esas dos condiciones para entara al while.
    while (counter <= i / 2 && prime)
    {
        // Cuando counter es menor que el numero entre 2 significa que el numero puede ser par, en if se compueba que dividir i/counter da un resto 0, por tanto counter se incrementa a 1
        if (i % counter == 0){
        prime = 0;

        counter ++;

        }

        

    }
    // En este if se comprueba que prime es primo y se va sacando por pantalla el numero que es primo con el std::cout    
    if (prime){

    std::cout << i << " ";
    }


}
}
// Declaramos la funcion factorial que devuelve un entero del tipo int, y recibe como parametro de entrada un numero del tipo int.
int factorial (int number) {
// Declaramos la variable factorial del tipo int que la inicializamos a 1
int factorial = 1;
// declaramos un for que comienza en 2 y que se encargara de realizar el factorial de un numero por ejemplo el de: 3!=1*2*3, empezamos en 2 porque multiplicar por 1 cualquier numero te dara como resultado el numero al que le multilplicaste el 1
for (int i = 2; i <= number; i++)
{
    
factorial = factorial * i;



}
// Devolvemos el valor del factorial que es el reusltado de calcular el factorial de un numero, que es del tipo int que es lo que nos pide devolver un valor del tipo int
return factorial;
}
// Declaramos la funcion MyExp que recibe como parametro de entrada dos variables: la primera exponent del tipo double y la segunda num_terms que es del tipo int y es unsigned porque solo recibe valores positivos, ademas la funcion devuelve un valor del tipo double
double MyExp (double exponent, unsigned num_terms) {
// declaramos las variables llamadas (t y s) del tipo double y la inicializamos a 0
double t, s = 0;
// Declaramos un for que empieza en 0 y llega hasta num_terms (num_terms no incluido)
for (int i = 0; i < num_terms; i++)
{
    // Igualamos la variable t al resultado de la operacion: elevar i al exponente introducido como parametro de entrada entre el factorial de dicho numero (el numero i). Todo esto equivale a realizar el desarollo en serie de Taylor
    t = pow(exponent, i) / factorial (i);
    // En s vamos guardando el resultado de sumar todas las t
    s += t;

}
    // Devolvemos poque tenemos que devolver un valor del tipo double
    return s;

}
// Declaramos la funcion LeapYear y le pasamos como parametro de entrada un año positivo y nos devolvera un true o false (booleano)
bool LeapYear (unsigned int year) {
// Declaramos la vraiable is_leap del tipo bool y la inicializamos a false
bool is_leap = false;
// En el if comprobamos que el año es bisiesto o no, cada año bisiesto se repite cada 4 años por tanto para comprobar que un año es bisiesto se tiene que dividir entre 4 y su resto nos tiene que dar 0.
if ((year % 4)==0)
{
    // Entramos dentro del if por tanto el año es bisiesto y cambiamos el valor de la variable a true.
    is_leap = true;
}
// En caso contrario al entrar al if devolvemos la variable con su valor false 
return is_leap; 

}
// Declaramos la funcion DatMonth del tipo int, y le psamos como parametro de entrada dos variables del tipo int llamadas number y year
int DayMonth (int number, int year) {

// Declaramos la variable number_days del tipo int
int number_days;
// Declaramos un if, que decimos que si number es menor que 1 o mayor que 12 mostrara un error por pantalla ya que los meses van del 1 al 12.
if (number < 1|| number > 12) {

std:: cout << "error, incorrect month";

}
// Utilizamos un switch, que equivale a realizar muchos if seguidos con number dentro del switch pondremos case y el numero que le sigue es el caso de estudio
switch (number) {

// prmero estudiamos el mes febrero ya que el año bisiesto es el que cambia, llamamos al metodo anterior para comprobar que es o no bisiesto, en caso de que si, number_days es igual a 29 y en caso contrario es igual a 28
case 2: if (LeapYear(year))

number_days = 29;

else 

number_days = 28;
// Cuando se sale de un caso, se utiliza un break para salir.
break;
// Para los siguientes casos el numero de días es igual a 31, y para el resto de casos que no estan especificados utilizaremos por defecto el de default que es igual a 30 dias
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
// Finalmente devolvemos el numero de dias porque la funcion quiere que devolvamos un int
return number_days;

}
//Declaramos la funcion IsPalindromeNumber del tipo bool y le pasamos como parametro de entrada una variable number del tipo int.
bool IsPalindromeNumber (int number){
// Declaramos las variables (rest, aux, num_inv) del tipo int y las inicializamos a 0
int aux = 0;

int rest = 0;

int num_inv = 0;
// Decimos que la variable aux es igual a la variable number
aux = number;
// Declaramos un while y decimos aux > 0, y vamos a comprobar que es palindrome
while (aux > 0)
{
    // Lo que hacemos es diferentes operaciones para comprobar que el numero es palindrome 
    rest = aux % 10;

    aux = aux / 10;

    num_inv = num_inv * 10 + rest;
}
// Si el num_inv es igual al numero introducido, estamos ante un numero palindrome, devolvemos true y sino devolvemos false
if (num_inv == number)
{
    return true;
}

else
{
    return false;
}

}




    
    



