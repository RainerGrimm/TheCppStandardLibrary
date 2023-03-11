#include <algorithm>
#include <iostream>
#include <list>

int main(){

  std::cout << '\n';

  std::list<int> list1{15, 2, 18, 19, 4, 15, 1, 3, 18, 18, 5, 4, 7, 17, 9, 16, 8, 6, 6, 17, 1, 19, 2, 1};
  for ( auto l: list1 ) std::cout << l << " ";
  
  std::cout << '\n';
  
  list1.sort();
  for ( auto l: list1 ) std::cout << l << " ";
  
  std::cout << '\n';
  
  list1.unique();
  for ( auto l: list1 ) std::cout << l << " ";
  
  std::cout << '\n';
  
  std::list<int> list2{10, 11, 12, 13, 14};
  list1.splice(std::find(list1.begin(), list1.end(), 15), list2);
  for ( auto l: list1 ) std::cout << l << " ";

  std::cout << '\n';

}