#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <time.h>
#include <cstring>
#include "vector_statistics.h"


/*This program calculates different functions of vectors which are the mean, the standard deviation,
 the maximum and the minimum of the values ​​stored in the vector. For this, 3 parameters inserted 
 in the command line are used; the first refers to the number of components of the vector and 
 the next two would be the range in which the program randomly chooses the values ​​of the vector, 
 for example ./vector_statistics 3 1 9, where a vector of 3 components would be generated which 
 are chosen randomly in the range [1,9]*/

int main (int argc, char *argv[]){
  usage (argc, argv);
  double components = atoi(argv[1]);
  double lower_limit = atoi(argv[2]);
  double upper_limit = atoi(argv[3]);
  std::vector <double> total = RandomNumbersGen (components, lower_limit, upper_limit);
  std::cout << "The mean is: " << Media (total, components) << std::endl;
  std::cout << "The standard deviation is: " << StandardDeviation (total, components, Media(total, components)) << std::endl;
  std::cout << "The maximum value is: " << MaximumValue(total) << std::endl;
  std::cout << "The minimum value is: " << MinimumValue(total, upper_limit) << std::endl;
  return 0;
}