#include <functional>
#include <iostream>
#include <map>
#include <set>
#include <string>

int main(){

  std::cout << '\n';
  
  std::multiset<int> mySet{3, 1, 5, 3, 4, 5, 1, 4, 4, 3, 2, 2, 7, 6, 4, 3, 6};
  for ( auto s: mySet ) std::cout << s << " ";
  
  std::cout << "\n\n";
  
  mySet.erase(mySet.lower_bound(4), mySet.upper_bound(4));
  for ( auto s: mySet ) std::cout << s << " ";
  
  std::cout << "\n\n";
  
  std::cout << "mySet.count(3): " << mySet.count(3) << '\n';
  std::cout << "*mySet.find(3): " << *mySet.find(3) << '\n';
  std::cout << "*mySet.lower_bound(3): " << *mySet.lower_bound(3) << '\n';
  std::cout << "*mySet.upper_bound(3): " << *mySet.upper_bound(3) << '\n';
  auto pair= mySet.equal_range(3);
  std::cout << "mySet.equal_range(3): (" << *pair.first << ", " << *pair.second << ")" << '\n';
  
  std::cout << "\n\n";
  
  std::map<int, std::string> int2Str{ {5, "five"}, {1, "one"}, {4, "four"}, {2, "two"}, {7, "seven"} };
  for ( auto p: int2Str ) std::cout << p.first << ", " << p.second << '\n';
  
  std::cout << '\n';
  
  std::cout << "int2Str.count(3): " << int2Str.count(3) << '\n';
  std::map<int,  std::string>::iterator myInt2StrIt= int2Str.find(3);
  std::cout << "int2Str.find(3): " << int2Str.find(3)->first << '\n';
  std::cout << "int2Str.lower_bound(3): " << int2Str.lower_bound(3)->first << '\n';
  std::cout << "int2Str.upper_bound(3): " << int2Str.upper_bound(3)->first << '\n';
  std::pair< std::map<int, std::string>::iterator, std::map<int, std::string>::iterator > myRangePair= int2Str.equal_range(3);
  auto pair2= int2Str.equal_range(3);
  std::cout << "int2Str.equal_range(3): (" << pair2.first->first << ", " << pair2.second->first << ")" << '\n';
  
  std::cout << '\n';

}