#include "primes.h"

//FUNCTION FOR THE HELP MESSAGE IN CASE OF NOT SET THE N POSITION.
void usage (int argc, char *argv[]){
  if (argc == 2 && strcmp(argv[1], "--help") == 0){
    std::cout << "You must indicate the position N, writting a number after the execution command separating it with a space.";
    exit (EXIT_SUCCESS);
  }
}
//FUNCTION USED TO KNOW IF A NUMBER IS A PRIME OR NOT.
bool Prime(int number){
    int d = 2;
    bool primoo;
    primoo = true;
    while (d < number){
        if (number % d == 0){
            primoo = false;
        }
        d++;
    }
    return primoo;
}