/**


* Universidad de La Laguna.

* Escuela Superior de Ingeniería y Tecnología.

* Grado en Ingeniería Informática.

* Informática Básica.


* @title Práctica 4: Fundamentos de Programación Básica.

* @file ejercicio_3_practica_4.cc

* @author José Luis Arribas Rodríguez <alu0101416700@ull.es>.

* @copyright José Luis Arribas Rodríguez (2021).

* @date 3 de enero de 2021.

* @brief Escribir un programa en (C++), que solicite al usuario la cantidad de monedas de (1, 5, 10, 20 y 50) céntimos que tiene, así también como 

*        los billetes de (5, 10, 20, 50, 100, 200 y 500) euros.

*        Una vez, introducidas las cantidades de dinero, el programa calculará e imprimirá en pantalla, la cantidad total de dinero de la que

*        dispone.



* @bug No hay "bugs" conocidos.

* @see https://github.com/joselu-arr-rguez/ejercicios_practicas/blob/main/ejercicios_practica_4/ejercicio_3_practica_4.cc


*/




#include <iostream>


using namespace std;




int main() {
    
  
  // Here we will initialize the variables.
  
  
  
  
  // One cent coin:
  
  
  const double kValueOneCent = 0.01;
  
  double one_cent;
  
  
  
  // Two cent coin:
  
  
  const double kValueTwoCents = 0.02;
  
  double two_cents;
  
  
  
  // Five cent coin:
  
  
  const double kValueFiveCents = 0.05;
  
  double five_cents;
  
  
  
  // Ten cent coin:
  
  
  const double kValueTenCents = 0.10;
  
  double ten_cents;
  
  
  
  // Twenty cent coin:
  
  
  const double kValueTwentyCents = 0.20;
  
  double twenty_cents;
  
  
  
  // Fifty cent coin:
  
  
  const double kValueFiftyCents = 0.50;
  
  double fifty_cents;
  
  
  
  
  // Five euro bill:
  
  
  const double kValueFiveEuros = 5.00;
  
  double five_euros;
  
  
  
  // Ten euro bill:
  
  
  const double kValueTenEuros = 10.00;
  
  double ten_euros;
  
  
  
  // Twenty euro bill:
  
  
  const double kValueTwentyEuros = 20.00;
  
  double twenty_euros;
  
  
  
  // Fifty euro bill:
  
  
  double kValueFiftyEuros = 50.00;
  
  double fifty_euros;
  
  
  
  // One hundred euro bill:
   
  
  const double kValueOneHundredEuros = 100.00;
  
  double one_hundred_euros;
  
  
  
  // Two hundred euro bill:
  
  
  const double kValueTwoHundredEuros = 200.00;
  
  double two_hundred_euros;
  
  
  
  // Five hundred euro bill
  
  
  const double kValueFiveHundredEuros = 500.00;
  
  double five_hundred_euros;
  
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of pennies you have: ";
  
  cin >> one_cent;
  
  
  double result_one_cent;
  
  
  result_one_cent = kValueOneCent * one_cent;
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of two cent coins you have: ";
  
  cin >> two_cents;
  
  
  double result_two_cents;
  
  
  result_two_cents = kValueTwoCents * two_cents;
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of five cent coins you have: ";
  
  cin >> five_cents;
  
  
  double result_five_cents;
  
  
  result_five_cents = kValueFiveCents * five_cents;
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of ten cent coins you have: ";
  
  cin >> ten_cents;
  
  
  double result_ten_cents;
  
  
  result_ten_cents = kValueTenCents * ten_cents;
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of twenty cent coins you have: ";
  
  cin >> twenty_cents;
  
  
  double result_twenty_cents;
  
  
  result_twenty_cents = kValueTwentyCents * twenty_cents;
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of fifty cent coins you have: ";
  
  cin >> fifty_cents;
  
  
  double result_fifty_cents;
  
  
  result_fifty_cents = kValueFiftyCents * fifty_cents;
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of five euro bills you have: ";
  
  cin >> five_euros;
  
  
  double result_five_euros;
  
  
  result_five_euros = kValueFiveEuros * five_euros;
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of ten euro bills you have: ";
  
  cin >> ten_euros;
  
  
  double result_ten_euros;
  
  
  result_ten_euros = kValueTenEuros * ten_euros;
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of twenty euro bills you have: ";
  
  cin >> twenty_euros;
  
  
  double result_twenty_euros;
  
    
  result_twenty_euros = kValueTwentyEuros * twenty_euros;
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of fifty euro bills you have: ";
  
  cin >> fifty_euros;
  
  
  double result_fifty_euros;
  
  
  result_fifty_euros = kValueFiftyEuros * fifty_euros;
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of one hundred euro bills you have: ";
  
  cin >> one_hundred_euros;
    
  
  double result_one_hundred_euros;
  
  
  result_one_hundred_euros = kValueOneHundredEuros * one_hundred_euros;
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of two hundred bills you have: ";
    
  cin >> two_hundred_euros;
  
  
  double result_two_hundred_euros;
  
  
  result_two_hundred_euros = kValueTwoHundredEuros * two_hundred_euros;
  
  
  
  // We request that you enter the amounts of bills and coins, separately.
  
  
  cout << "Enter the number of five hundred euro bills you have: ";
  
  cin >> five_hundred_euros;
  
  
  double result_five_hundred_euros;
  
  
  result_five_hundred_euros = kValueFiveHundredEuros * five_hundred_euros;
  
  
  
  
  // Here we calculate the total result.
  
  
  double total_result;
  
  
  total_result = result_one_cent + result_two_cents + result_five_cents + result_ten_cents + result_twenty_cents + result_fifty_cents + 
  
  result_five_euros + result_ten_euros + result_twenty_euros + result_fifty_euros + result_one_hundred_euros + result_two_hundred_euros + 
  
  result_five_hundred_euros;
  
  
  cout << "The total amount of money you have, according to the amounts of money entered, is: " << total_result << " €" << "\n";
  
  
  
  return 0;
  
  
}