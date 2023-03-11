#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main(){

  std::cout <<  '\n';

  std::unordered_map<std::string, int> unordMap{ {"Rainer", 1966}, {"Beatrix", 1966}, {"Juliette", 1997}, {"Marius", 1999} };
  
  std::unordered_map<std::string, int>::const_iterator endMapIt= unordMap.end();
  std::unordered_map<std::string, int>::iterator mapIt;

  for ( mapIt= unordMap.begin(); mapIt != endMapIt; ++mapIt ) std::cout << "{" << mapIt->first <<  ", " << mapIt->second << "} ";

  std::cout << "\n\n";
  
  std::vector<int> myVec{1, 2, 3, 4, 5, 6, 7, 8, 9};
  
  std::vector<int>::const_iterator vecEndIt= myVec.end();
  std::vector<int>::iterator vecIt;
  for ( vecIt= myVec.begin(); vecIt != vecEndIt; ++vecIt ) std::cout << *vecIt << " ";
  
  std::cout << '\n';

  for ( const auto v: myVec ) std::cout << v  << " ";
  
  std::cout << '\n';
  
  std::vector<int>::const_reverse_iterator vecEndRevIt= myVec.rend();
  std::vector<int>::reverse_iterator vecRevIt;
  for ( vecRevIt= myVec.rbegin(); vecRevIt != vecEndRevIt; ++vecRevIt ) std::cout << *vecRevIt << " ";
  
  std::cout << "\n\n";

}