#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <time.h>
#include <cstring>


void usage (int argc, char *argv[]);

double frand(double fMin, double fMax);

std::vector <double> RandomNumbersGen(double components, double lower_limit, double upper_limit);

double Media(std::vector <double> total,double components);

double MaximumValue (std::vector <double> total);

double MinimumValue (std::vector <double> total, double upper_limit);

double StandardDeviation (std::vector <double> total, double components, double  Media);