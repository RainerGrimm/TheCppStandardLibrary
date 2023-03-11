#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

bool isLessAbs(int a, int b){
  return std::abs(a) < std::abs(b);
}

int main(){

  std::cout << std::boolalpha << '\n';

  std::vector<int> vec{-3, 0, -3, 2, -3, 5, -3, 7, -0, 6, -3, 5, -6, 8, 9, 0, 8, 7, -7, 8, 9, -6, 3, -3, 2};

  for ( auto v: vec ) std::cout << v << " ";

  std::sort(vec.begin(), vec.end(), isLessAbs);
  std::cout << '\n';
  for ( auto v: vec ) std::cout << v << " ";
  
  std::cout << '\n';
  
  std::cout << '\n';
  std::cout << "std::binary_search(vec.begin(), vec.end(), -5, isLessAbs): " << std::binary_search(vec.begin(), vec.end(), -5, isLessAbs) << '\n';
  std::cout << "std::binary_search(vec.begin(), vec.end(), 5, isLessAbs): " << std::binary_search(vec.begin(), vec.end(), 5, isLessAbs) << '\n';
  
  auto pair= std::equal_range(vec.begin(), vec.end(), 3, isLessAbs);
  
  std::cout << '\n';
  
  std::cout << "Position of first 3: " << std::distance(vec.begin(), pair.first) << '\n';
  std::cout << "Position of last 3: " << std::distance(vec.begin(), pair.second)-1 << '\n';
  for ( auto threeIt= pair.first; threeIt != pair.second ; ++threeIt ) std::cout << *threeIt << " ";
  
  std::cout << "\n\n";

}