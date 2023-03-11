#include <iostream>

int main(){

  std::cout << '\n';
  
  std::cout << "Type in your numbers(Quit with an arbitrary character): " << '\n';
  
  int sum{0};
  int val;

  while ( std::cin >> val ) sum += val;

  std::cout << "Sum: " << sum << '\n';
  
  std::cout << '\n';

}
