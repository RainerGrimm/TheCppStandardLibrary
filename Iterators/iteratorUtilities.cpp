#include <array>
#include <iostream>
#include <iterator>
#include <string>
#include <unordered_map>

int main(){

  std::cout << '\n';
  
  std::unordered_map<std::string, int> myMap{ {"Rainer", 1966}, {"Beatrix", 1966}, {"Juliette", 1997}, {"Marius", 1999} };

  for ( auto m: myMap) std::cout << "{" << m.first <<  ", " << m.second << "} ";
  
  std::cout << '\n';
  
  auto mapItBegin= std::begin(myMap);
  std::cout << "{" << mapItBegin->first <<  ", " << mapItBegin->second << "}" << '\n';
  auto mapIt= std::next(mapItBegin);
  std::cout << "{" << mapIt->first <<  ", " << mapIt->second << "}" << '\n';
  
  auto dist= std::distance(mapItBegin, mapIt);
  std::cout << "std::distance(mapItBegin, mapIt): " << dist << '\n';
  
  std::cout << '\n';
  
  std::array<int, 10> myArr{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  
  for ( auto a: myArr ) std::cout << a << " "; 
  
  std::cout << '\n';
  
  auto arrItEnd= std::end(myArr);
  auto arrIt= std::prev(arrItEnd);
  std::cout << *arrIt << '\n';
  
  std::advance(arrIt, -5);
  std::cout << *arrIt << '\n';
  
  std::cout << '\n';

}