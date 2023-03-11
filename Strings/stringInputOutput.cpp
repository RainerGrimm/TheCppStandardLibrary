#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> readFromFile(const char* fileName){

  std::ifstream file(fileName);

  if ( !file ){
    std::cerr << "Could not open the file " << fileName << ".";
    exit(EXIT_FAILURE);
  }

  std::vector<std::string> lines;
  std::string line;
  while ( getline(file , line) ) lines.push_back(line);
	 
  return lines;

}

int main(){
  
  std::cout << '\n';
  
  std::string fileName;
  std::cout << "Your filename: ";
  std::cin >> fileName; 

  std::vector<std::string> lines=readFromFile(fileName.c_str());
  
  int num{0};
  for ( auto line: lines ) std::cout << ++num << ": " <<  line <<  '\n';

  std::cout << '\n';

}

