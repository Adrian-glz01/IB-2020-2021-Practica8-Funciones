#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "string_statistics.h"
using namespace std;


/* This program analyzes and displays both the length and the first and last character of the 10 text 
strings found in the constant vector of the same, and identifies if it contains the word abracadabra */


int main (){
  vector <string> RandomWords = {"abracadabra", "calculo", "fundamentos_fisicos", "organizaciones_empresariales", "informatica_basica", "álgebra", "computador", "inteligencia_artificial", "UHC", "continuidad", "c_mas_mas"};
  String_statistics_funtion (RandomWords);
}
