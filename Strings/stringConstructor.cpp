#include <iostream>
#include <string>
#include <utility>

int main(){

  std::cout << '\n';

  std::string defaultString;
  
  std::cout << "From C-String" << '\n';

  std::string other{"123456789"};
  std::cout << "other: " << other << '\n';
  
  std::cout << '\n';

  std::cout << "From C++-string" << '\n';

  std::string str1(other);
  std::string tmp(other);
  std::string str2(std::move(tmp));
  std::string str3(other.begin(), other.end());
  std::string str4(other, 2);
  std::string str5(other, 2, 5);
  
  std::cout << "str1: " << str1 << '\n';
  std::cout << "str2: " << str2 << '\n';
  std::cout << "str3: " << str3 << '\n';
  std::cout << "str4: " << str4 << '\n';
  std::cout << "str5: " << str5 << '\n';
  
  std::cout << '\n';
  
  std::cout << "From C-String" << '\n';

  std::string str6("123456789", 5);
  std::string str7(5, '1');
  std::string str8({'1', '2', '3', '4', '5', '6', '7', '8', '9'});
  
  std::cout << "str6: " << str6 << '\n';
  std::cout << "str7: " << str7 << '\n';
  std::cout << "str8: " << str8 << '\n';
  
  std::cout << '\n';
  
  std::cout << "As Part of a C++-String" << '\n';
  std::cout << "str6.substr(): "  << str6.substr() << '\n';
  std::cout << "str6.substr(1): "  << str6.substr(1) << '\n';
  std::cout << "str6.substr(1, 2): "  << str6.substr(1, 2) << '\n';
  
  
  
  
  std::cout << '\n';

}
