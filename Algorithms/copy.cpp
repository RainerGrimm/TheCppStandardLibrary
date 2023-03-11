#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main(){

  std::cout << '\n';
  
  std::vector<int> myVec{0, 1, 2, 3, 4, 5, 6, 7, 9};
  std::vector<int> myVec2(10);

  std::copy_if(myVec.begin(), myVec.end(), myVec2.begin()+3, [](int a){ return a%2; });
  for ( auto v: myVec2 ) std::cout << v << " ";

  std::cout << "\n\n";
  
  std::string str{"abcdefghijklmnop"};
  std::string str2{"---------------------"};
  
  std::cout << str2 << '\n';
  std::copy_backward(str.begin(), str.end(), str2.end());
  std::cout << str2 << '\n';
  
  std::cout << '\n';
  
  std::cout << str << '\n';
  std::copy_backward(str.begin(), str.begin() + 5,  str.end());
  std::cout << str << '\n';
  
  std::cout << '\n';

}