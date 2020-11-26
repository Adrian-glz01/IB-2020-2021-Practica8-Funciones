#include <iostream>
#include <vector>
#include <cstring>
#include <math.h>
#include "difference_of_squares.h"

//This function shows us a help message in case of not putting the necessary parameters for the correct execution of the program.
void usage (int argc, char *argv[]){
  if (argc == 2 && strcmp(argv[1], "--help") == 0){
    std::cout << "You must indicate the position N, writting a number after the execution command separating it with a space." << std::endl;
    exit (EXIT_SUCCESS);
  }
  if (argc == 1){
    std::cout << "Try to write ./difference_of_squares --help " << std::endl;
    exit(EXIT_SUCCESS);
  }
  }
//This function shows the square of the sum of the first N natural numbers --> (1 + 2 + ... + N)^2.
int Suma_De_Cuadrados (int number){
  int suma = 0;
  for (int i = 0; i<= number; i++){
    suma = suma + i;
  }
  int total = pow(suma,2);
  return total;
}
//This function shows the sum of the squares of the N natural numbers --> (1^2 + 2^2 + ... + N^2)
int Suma_De_Cuadrados_2 (int number){
  int suma  = 0;
  int square = 0;
  for (int i = 0; i<= number; i++){
    square = pow(i,2);
    suma = suma + square;
  }
  return suma;
}