#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include "difference_of_squares.h"

/* This program analyzes the subtraction between the square of the sum of the whole number inserted by 
command line and the sum of the squares of said number inserted, and displays its result on the 
screen. An example could be ./difference_of_squares 5, whose subtraction would be 
225 - 55 and its result 170 */

int main(int argc , char*argv[]){
    usage (argc, argv);
    int number = atoi (argv[1]);
    std::cout << Suma_De_Cuadrados(number) - Suma_De_Cuadrados_2(number) << std::endl;

}