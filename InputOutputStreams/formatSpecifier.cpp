#include <iostream>

int main(){

  std::cout << '\n';

  int num{2011};

  std::cout << num << "\n\n";

  std::cout.setf(std::ios::hex, std::ios::basefield);
  std::cout << num << '\n';
  std::cout.setf(std::ios::dec, std::ios::basefield);
  std::cout << num << '\n';

  std::cout << '\n';

  std::cout << std::hex << num << '\n';
  std::cout << std::dec << num << '\n';

  std::cout << '\n';

}
