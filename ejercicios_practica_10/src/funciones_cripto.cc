/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief Cada nuevo término de la serie de Fibonacci se genera sumando los dos anteriores. 
 *        Comenzando con 0 y 1, los primeros 10 términos serán: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
 *        Desarrolle en C++ un programa que calcule la suma de todos los términos de valor par 
 *        de la serie que sean menores que 1000.
 * @see https://docs.google.com/document/d/1-3hTIVf8tPrbn9u0vs0Cm2IGyX1XBgv8hReVU0KOSUQ/edit?usp=sharing
 * @see stoi http://www.cplusplus.com/reference/string/stoi/
 * An Object Oriented Version of the program:
 * @see https://stackoverflow.com/questions/21360694/sum-of-even-fibonacci-numbers-under-1000
 *
 */

#include <iostream>
#include <cstdlib>    // exit

#include <stdio.h>
#include <string>
#include <cstring>
#include <string.h>


using namespace std;

#include "funciones_cripto.h"    

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa un único número natural para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << " -- Cifrado de ficheros" << std::endl;
    std::cout <<"Modo de uso: " << argv[0] << " fichero_entrada fichero_salida método password operación" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void Cesar(){
  FILE *dat1,*dat2;
  char nombre_1[50];
  char nombre_2[50];
  char c;
  int trans;

  printf("Seleccione traslacion de encriptacion ");
  scanf("%d", &trans);

  printf("Nombre del archivo a codificar ");
  scanf("%s", &nombre_1);

  printf("Nombre delfichero donde guardar la codificacion ");
  scanf("%s", &nombre_2);
  if(fopen(nombre_1, "r") == NULL)

    cout << "El fichero no existe" << "\n";

  else {

    dat1 = fopen(nombre_1, "r");

    dat2 = fopen(nombre_2, "w");


    fscanf(dat1, "%c",&c);

    while(!feof(dat1))
    {

      if((c>='A')&&(c<='Z'))
      {

        c=((c+trans-'A')%('Z'-'A'+1))+'A';

      }
      else if((c>='a')&&(c<='z'))
      {

       c= ((c+trans-'a')%('z'-'a'+1))+'a';

    }

    fprintf(dat2,"%c",c);

    fscanf(dat1,"%c",&c);

  }
  fclose(dat1);
  
  fclose(dat2);


  
}
}

void Descifrar() {
  FILE *dat1,*dat2;
  char nombre_1[50];
  char nombre_2[50];
  char c;
  int trans;

  printf("Seleccione traslacion de encriptacion ");
  scanf("%d", &trans);

  printf("Nombre del archivo a decodificar ");
  scanf("%s", &nombre_1);

  printf("Nombre delfichero donde guardar la decodificacion ");
  scanf("%s", &nombre_2);
  if(fopen(nombre_1, "r") == NULL)

    cout << "El fichero no existe" << "\n";

  else {

    dat1 = fopen(nombre_1, "r");

    dat2 = fopen(nombre_2, "w");


    fscanf(dat1, "%c",&c);

    while(!feof(dat1))
    {

      if((c>='A')&&(c<='Z'))
      {

        c=((c-trans-'A')%('Z'-'A'+1))+'A';

      }
      else if((c>='a')&&(c<='z'))
      {

       c= ((c-trans-'a')%('z'-'a'+1))+'a';

    }

    fprintf(dat2,"%c",c);

    fscanf(dat1,"%c",&c);

  }
  fclose(dat1);
  
  fclose(dat2);


  
}
}

void CifradoXor() {

  FILE *dat1,*dat2;
  char nombre_1[50];
  char nombre_2[50];
  char c;
  string clave;
  char key;


  printf("Clave a utilizar: ");
  cin >> clave;
  
  printf("Nombre del archivo a decodificar ");
  scanf("%s", &nombre_1);

  printf("Nombre delfichero donde guardar la decodificacion ");
  scanf("%s", &nombre_2);
  if(fopen(nombre_1, "r") == NULL)

    cout << "El fichero no existe" << "\n";

  else {

    dat1 = fopen(nombre_1, "r");

    dat2 = fopen(nombre_2, "w");


    fscanf(dat1, "%c",&c);
    
    while(!feof(dat1))
    {
    for(int i=0; i<50;i++){
      int j = i% clave.length();
      int a= int (clave[j]);
      int b = int(c);
      c = char(b ^ a);
    }
      
      



    fprintf(dat2,"%c",c);

    fscanf(dat1,"%c",&c);

  }
  fclose(dat1);
  
  fclose(dat2);


  
}  

}

void Menu(){
  int exit = 0;

  string option;

  string option_2;

  do 
  
  {

    cout << "Elegimos la opción a mostrar: " << "\n";


    cout << "1 -> CifradoXor" << "\n";

    cout << "2 -> CifradoCesar" << "\n";

    cout << "3 -> Salir" << "\n";

    cin >> option;

    int x = atoi(option.c_str());

    switch (x)

    {

      case 1 : 
      
      {
        cout << "Elegimos la opción a mostrar: " << "\n";


        cout << "1 -> Cifrar" << "\n";

        cout << "2 -> Descifrar" << "\n";

        cin >> option_2;

        int y = atoi(option_2.c_str());

        if(y==1 || y==2){

          cout << "Aplicando algoritmo de cifrado XOR: " << "\n";
          CifradoXor();

        }else{

          cout << "No ha seleccionado una opcion correcta: " << "\n";
          break;
        }
        

      }
      
      case 2 : 
      {
       
      cout << "Elegimos la opción a mostrar: " << "\n";


        cout << "1 -> Cifrar" << "\n";

        cout << "2 -> Descifrar" << "\n";

        cin >> option_2;

        int y = atoi(option_2.c_str());

        if(y==1){
          cout << "Ha seleccionado la opcion de Cifrar por Cesar: " << "\n";
          Cesar();

        }else if(y==2){
          cout << "Ha seleccionado la opcion de Descifrar por Cesar: " << "\n";
          Descifrar();
        }else{
          cout << "No ha seleccionado una opcion correcta: " << "\n";
          break;
        }
          
          
        }
        

      case 3 : 
      {
      exit=1;
       cout << "Saliendo...... " << "\n";
  
        break;
      }

      default : 

      {

        cout << "Opcion incorrecta" << "\n";

        break;

      }  
    }
   

}
while (exit==0); 
}


