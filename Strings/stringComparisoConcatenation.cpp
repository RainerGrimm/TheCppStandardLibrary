#include <iostream>
#include <string>

int main(){

  std::cout << std::boolalpha << '\n';

  std::string first{"aaa"};
  std::string second{"aaaa"};
  
  std::cout << "first <  first :" << (first < first) << '\n';
  std::cout << "first <=  first :" << (first <= first) << '\n';
  std::cout << "first <  second :" << (first < second) << '\n';

  std::cout << '\n';
  
  std::string one{"1"};
  std::string oneOneOne= one+ std::string("1") +"1";

  std::cout << "1 + 1 + 1: " << oneOneOne << '\n';
  
  std::cout << '\n';

}