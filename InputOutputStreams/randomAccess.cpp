#include <fstream>
#include <iostream>
#include <string>

void writeFile(const std::string name){

  std::ofstream outFile(name);

  if (!outFile){
    std::cerr << "Could not open file " << name << '\n';
    exit(1);
  }

  for ( unsigned int i=0; i < 10; ++i){
    outFile << i << "        0123456789" << '\n';
  }
}



int main(){
  
  std::cout << '\n';
  
  std::string random{"random.txt"};
  
  writeFile(random);
  
  std::ifstream inFile(random);

  if (!inFile){
    std::cerr << "Could not open file " << random << '\n';
    exit(1);
  }
  
  std::string line;
  
  std::cout << "The whole file : " << '\n';
  std::cout << inFile.rdbuf();
  std::cout <<  "inFile.tellg(): " << inFile.tellg()  << '\n';
  
  std::cout <<  '\n';
  
  inFile.seekg(0); 
  inFile.seekg(0, std::ios::beg);   // redundant
  getline(inFile, line); 
  std::cout << line << '\n';
  
  inFile.seekg(20, std::ios::cur);
  getline(inFile, line);
  std::cout << line << '\n';
  
  inFile.seekg(-20, std::ios::end);
  getline(inFile, line);
  std::cout << line << '\n';

  std::cout << '\n';
  
}