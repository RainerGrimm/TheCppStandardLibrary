#include <iostream>
#include <set>
#include <utility>

int main(){

  std::cout << '\n';
  
  std::set<int> set1{0, 1, 2, 3, 4, 5};
  std::set<int> set2{6, 7, 8, 9};
  for (auto s: set1) std::cout << s << " ";
  std::cout << " ----- ";
  for (auto s: set2) std::cout << s << " ";
  
  std::cout << '\n';
  
  set1= set2;
  for (auto s: set1) std::cout << s << " ";
  std::cout << " ----- ";
  for (auto s: set2) std::cout << s << " ";
  
  std::cout << '\n';
  
  set1= std::move(set2);
  for (auto s: set1) std::cout << s << " ";
  std::cout << " ----- ";
  for (auto s: set2) std::cout << s << " ";
  
  std::cout <<  '\n';
  
  set2={60, 70, 80, 90};
  for (auto s: set1) std::cout << s << " ";
  std::cout << " ----- ";
  for (auto s: set2) std::cout << s << " ";
  
  std::cout << '\n';
  
  std::swap(set1, set2);
  for (auto s: set1) std::cout << s << " ";
  std::cout << " ----- ";
  for (auto s: set2) std::cout << s << " ";

  std::cout << "\n\n";

}