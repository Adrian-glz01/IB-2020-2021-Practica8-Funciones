#include "string_statistics.h"

void String_statistics_funtion (std::vector <string> RandomWords){
  int chain = {1};
  for (auto word: RandomWords){
    std::cout << "Chain " << chain << " The length of the string is: " << word.size() << std::endl;
    std::cout << "First character: " << word.front() << std::endl;
    std::cout << "Last character: " << word.back() << std::endl;
    if (word.find("abracadabra") != std::string::npos){
      std::cout << "The word contains abracadabra." << std::endl;
    }
    else{
      std::cout << "The word does not contain abracadabra." << std::endl;
    }
    chain ++;
  }
}
