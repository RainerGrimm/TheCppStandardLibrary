#include <array>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>
#include <iostream>

int main(){

  std::cout << std::boolalpha << '\n';
  
  std::vector<int> vec1{1, 2, 3, 4};
  std::vector<int> vec2{1, 2, 3, 4};
  std::cout << "vec1 == vec2: " << (vec1 == vec2) << '\n';
  
  std::cout << '\n';
  
  std::array<int, 4> arr1{1, 2, 3, 4};
  std::array<int, 4> arr2{1, 2, 3, 4};
  std::cout << "arr1 == arr2: " << (arr1 == arr2) << '\n';
  
  std::set<int> set1{1, 2, 3, 4};
  std::set<int> set2{4, 3, 2, 1};
  std::cout << "set1 == set2: " << (set1 == set2) << '\n';
  
  std::set<int> set3{1, 2, 3, 4, 5};
  std::cout << "set1 < set3: " << (set1 < set3) << '\n';
  
  std::set<int> set4{1, 2, 3, -3};
  std::cout << "set1 > set4: " << (set1 > set4) << '\n';
  
  std::cout << '\n';
  
  std::unordered_map<int, std::string> unordSet1{ {1, "one"}, {2, "two"} };
  std::unordered_map<int, std::string> unordSet2{ {1, "one"}, {2, "Two"} };
  std::cout << "unordSet1 == unordSet2: " << (unordSet1 == unordSet2) << '\n';

  std::cout << '\n';

}