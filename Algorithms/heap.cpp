#include <algorithm>
#include <iostream>
#include <vector>

int main(){

  std::cout << std::boolalpha << '\n';

  std::vector<int> vec{4, 3, 2, 1, 5, 6, 7, 9, 10};
  for (auto v: vec) std::cout << v << " ";
  std::cout << '\n';

  std::make_heap(vec.begin(), vec.end());
  for (auto v: vec) std::cout << v << " ";
  std::cout << '\n';
  
  std::cout << "std::is_heap(vec.begin(), vec.end()): " << std::is_heap(vec.begin(), vec.end()) << '\n';
  
  std::cout << '\n';
 
  vec.push_back(100);
  std::cout << "std::is_heap(vec.begin(), vec.end()): " << std::is_heap(vec.begin(), vec.end()) << '\n';
  std::cout << "*std::is_heap_until(vec.begin(), vec.end()): " << *std::is_heap_until(vec.begin(), vec.end()) << '\n';
  for (auto v: vec) std::cout << v << " ";
  std::push_heap(vec.begin(), vec.end());
  std::cout << "std::is_heap(vec.begin(), vec.end()): " << std::is_heap(vec.begin(), vec.end()) << '\n';
  std::cout << '\n';
  for (auto v: vec) std::cout << v << " ";
  
  std::cout << "\n\n";
  
  std::pop_heap(vec.begin(), vec.end());
  for (auto v: vec) std::cout << v << " ";
  std::cout << '\n';
  std::cout << "*std::is_heap_until(vec.begin(), vec.end()): " << *std::is_heap_until(vec.begin(), vec.end()) << '\n';
  vec.resize(vec.size() - 1);
  std::cout << "std::is_heap(vec.begin(), vec.end()): " << std::is_heap(vec.begin(), vec.end()) << '\n';
  
  std::cout << '\n';
  
  std::cout << "vec.front(): " << vec.front() << '\n';
   
  std::cout << '\n';

}