//Ejercicio 3: Práctica 4

/*Solicitamos la cantidad de monedas (céntimos) y billetes (euros) que dispones para calcularlo, después determinamos la cantidad de dinero de la que dispones*/

#include <iostream>

int main() {

    //Aquí inicializaremos las variables

    //Moneda de un céntimo

    const double kValueOneCent=0.01;

    double one_cent;


    //Moneda de dos céntimos

    const double kValueTwoCents=0.02;

    double two_cents;


    //Moneda de veinte céntimos

    const double kValueTwentyCents=0.20;

    double twenty_cents;


    //Billete de cinco euros

    const double kValueFiveEuros=5.00;

    double five_euros;


    //Billete de diez euros

    const double kValueTenEuros=10.00;

    double ten_euros;


    //Billete de veinte euros

    const double kValueTwentyEuros=20.00;

    double twenty_euros;


    //Billete de cincuenta euros

    double kValueFiftyEuros=50.00;

    double fifty_euros;


    //Billete de cien euros

    const double kValueOneHundredEuros=100.00;

    double one_hundred_euros;


    //Billete de doscientos euros

    const double kValueTwoHundredEuros=200.00;

    double two_hundred_euros;


    //Billete de quinientos euros

    const double kValueFiveHundredEuros=500.00;

    double five_hundred_euros;


    //Solicitamos que nos ingrese el número de billetes y monedas por separado

    std::cout<<"Enter the number of pennies you have: ";

    std::cin>>one_cent;

    double result_one_cent;

    result_one_cent=kValueOneCent*one_cent;


    //Solicitamos que nos ingrese el número de billetes y monedas por separado

    std::cout<<"Enter the number of two cent coins you have: ";

    std::cin>>two_cents;

    double result_two_cents;

    result_two_cents=kValueTwoCents*two_cents;


    //Solicitamos que nos ingrese el número de billetes y monedas por separado

    std::cout<<"Enter the number of twenty cent coins you have: ";

    std::cin>>twenty_cents;

    double result_twenty_cents;

    result_twenty_cents=kValueTwentyCents*twenty_cents;


    //Solicitamos que nos ingrese el número de billetes y monedas por separado

    std::cout<<"Enter the number of five euro cent bills you have: ";

    std::cin>>five_euros;

    double result_five_euros;

    result_five_euros=kValueFiveEuros*five_euros;


    //Solicitamos que nos ingrese el número de billetes y monedas por separado

    std::cout<<"Enter the number of ten euro cent bills you have: ";

    std::cin>>ten_euros;

    double result_ten_euros;
    
    result_ten_euros=kValueTenEuros*ten_euros;


    //Solicitamos que nos ingrese el número de billetes y monedas por separado

    std::cout<<"Enter the number of twenty euro cent bills you have: ";

    std::cin>>twenty_euros;

    double result_twenty_euros;
    
    result_twenty_euros=kValueTwentyEuros*twenty_euros;


    //Solicitamos que nos ingrese el número de billetes y monedas por separado

    std::cout<<"Enter the number of fifty euro cent bills you have: ";

    std::cin>>fifty_euros;

    double result_fifty_euros;

    result_fifty_euros=kValueFiftyEuros*fifty_euros;


    //Solicitamos que nos ingrese el número de billetes y monedas por separado

    std::cout<<"Enter the number of one hundred euro cent bills you have: ";

    std::cin>>one_hundred_euros;
    
    double result_one_hundred_euros;

    result_one_hundred_euros=kValueOneHundredEuros*one_hundred_euros;


    //Solicitamos que nos ingrese el número de billetes y monedas por separado

    std::cout<<"Enter the number of two hundred cent bills you have: ";
    
    std::cin>>two_hundred_euros;

    double result_two_hundred_euros;

    result_two_hundred_euros=kValueTwoHundredEuros*two_hundred_euros;


    //Solicitamos que nos ingrese el número de billetes y monedas por separado

    std::cout<<"Enter the number of five hundred euro cent bills you have: ";

    std::cin>>five_hundred_euros;

    double result_five_hundred_euros;

    result_five_hundred_euros=kValueFiveHundredEuros*five_hundred_euros;


    double total_result;

    total_result=result_one_cent+result_two_cents+result_twenty_cents+result_five_euros+result_ten_euros+result_twenty_euros+result_fifty_euros+result_one_hundred_euros+result_two_hundred_euros+result_five_hundred_euros;

    std::cout<<"The cost is: "<<total_result<<"€"<<"\n";

    return 0;
}