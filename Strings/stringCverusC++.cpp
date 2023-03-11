#include <iostream>
#include <string>

int main(){

  std::cout << '\n';

  std::string str{"C++-String"};
  std::cout << str << '\n';
  str += " C-String";
  std::cout << str << '\n';

  const char* cString= str.c_str();
 
  char buffer[10];
  str.copy(buffer, 10);

  str+= "works";
  // const char* cString2= cString;  // ERROR

  std::string str2(buffer, buffer+10);
  std::cout << str2 << '\n';

  std::cout << '\n';

}