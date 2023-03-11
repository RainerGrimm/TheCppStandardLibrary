#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

int main(){

  std::cout << '\n';
  
  std::string str= {"0123456789"};
  std::cout << "str.front(): " << str.front() << '\n';
  std::cout << "str.back(): " << str.back() << '\n';
  
  std::cout << '\n';
  
  for (int i=0; i <= 10; ++i){
    std::cout << "str[" << i  << "]: " << str[i] << '\n';
  }
  
  std::cout << '\n';

  try{
    str.at(10);
  }
  catch (const std::out_of_range& e){
    std::cerr << "Exception: " <<  e.what() << '\n';
  }
  
  std::cout << '\n';
  
  std::cout << "*(&str[0]+5): " << *(&str[0]+5) << '\n';
  std::cout << "*(&str[5]): " << *(&str[5]) << '\n';
  std::cout << "str[5] : " << str[5] << '\n';

  std::cout << '\n';

}