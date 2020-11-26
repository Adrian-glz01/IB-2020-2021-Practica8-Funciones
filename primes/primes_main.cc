#include<iostream>
#include "primes.h"

/* This program allows us to identify the prime number that corresponds to the number inserted in the 
command line showing this on the screen, for example for ./primes 8 the number 
19 will be shown on the screen */

int main (int argc, char *argv[]) {
  usage (argc, argv);
  std::string parameter {argv[1]};
  int posicion = stoi(parameter);
  int PrimeNumber;
  int CurrentNumber{0};

  for (int i = 0; i < posicion; i++){
    do { 
      ++CurrentNumber;
    }
    while (!Prime(CurrentNumber));
    if (Prime(CurrentNumber)){
      PrimeNumber = CurrentNumber;+
      ++CurrentNumber;
    }
  }
std::cout << PrimeNumber << std::endl;
return 0;
}