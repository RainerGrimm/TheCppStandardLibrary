#include <iostream>
#include <string>

int main(){

  std::cout << '\n';

  std::string line;
  std::cout << "Write a line: " << '\n';
  std::getline(std::cin, line);
  std::cout << line << '\n';

  std::cout << '\n';

  std::cout << "Write numbers, separated by;" << '\n';
  while ( std::getline(std::cin, line, ';') ) {
    std::cout << line << '\n';
  }

  std::cout << '\n';

}
