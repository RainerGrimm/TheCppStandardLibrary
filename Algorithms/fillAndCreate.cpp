#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

int getNext(){
  static int next{0};
  return ++next;
}

int main(){

  std::cout << '\n';

  std::vector<int> vec(20);
  std::fill(vec.begin(), vec.end(), 2011);
  for ( auto v: vec ) std::cout << v << " ";
  
  std::cout << '\n';
  
  std::generate_n(vec.begin(), 15, getNext);
  for ( auto v: vec ) std::cout << v << " ";
  

  std::cout << "\n\n";

}