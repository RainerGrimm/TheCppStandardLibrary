#include <ios>
#include <iostream>

int main(){

  std::cout << std::boolalpha << '\n';

  std::cout <<  "In failbit-state: " << std::cin.fail() << '\n';
  
  std::cout << '\n';
  
  int myInt;
  while (std::cin >> myInt){
    std::cout << "Output: " << myInt << '\n'; 
    std::cout <<  "In failbit-state: " << std::cin.fail() << '\n';
    std::cout << '\n';
  }
  
  std::cout <<  "In failbit-state: " << '\n';
  std::cin.clear();
  std::cout <<  "In failbit-state: " << std::cin.fail() << '\n';

  std::cout << '\n';

}
