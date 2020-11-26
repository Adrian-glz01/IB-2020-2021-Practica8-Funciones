#include "vector_statistics.h"
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <time.h>
#include <cstring>


//This function shows us a help message in case of not putting the necessary parameters for the correct execution of the program.
void usage (int argc, char *argv[]){
  if (argc == 2 && strcmp(argv[1], "--help") == 0){
    std::cout << "You must write three numbers, write it after the execution command separating them with a space." << std::endl;
  exit (EXIT_SUCCESS);
  }  
}
double frand(double fMin, double fMax) {
  double f = (double)rand() / RAND_MAX;
  return fMin + f * (fMax - fMin);
}
std::vector <double> RandomNumbersGen(double components, double lower_limit, double upper_limit){
  std::vector <double> RandomsNumbers;
  srand(time(NULL));
  for(int i= 1; i<=components;i++){
    double random_number = frand (lower_limit, upper_limit);
    RandomsNumbers.push_back(random_number);
  }
  return RandomsNumbers;
}
double Media(std::vector <double> total,double components){
  double sum = 0;
  for (int i =0; i<components; i++){
    sum +=total[i];
  }
  double media = sum / components;
  return media;
}
double MaximumValue (std::vector <double> total){
  double maximum_value = 0; 
  for (int i=0; i<total.size(); i++){
    if (total[i] > maximum_value){
     maximum_value = total[i];
    }
  }
  return maximum_value;
}
double MinimumValue (std::vector <double> total, double upper_limit){
  double minimum_value = upper_limit; 
  for (int i=0; i<total.size(); i++){
    if (total[i] < minimum_value){
      minimum_value = total[i];
    }
  }
  return minimum_value;
}
double StandardDeviation (std::vector <double> total, double components, double  Media){
   double sum = 0;
  for (int i = 0; i<= total.size(); i++){
    sum +=  pow (total[i] - Media, 2);
  }
  double standard_deviation = 0;
  standard_deviation = sqrt (sum / components);
  return standard_deviation ;
}