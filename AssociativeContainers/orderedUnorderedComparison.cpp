#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

int main(){

  std::cout << '\n';

  std::cout << "C++ map: " << '\n';
  std::map<std::string, int> m { {"Dijkstra", 1972}, {"Scott", 1976} };
  m["Ritchie"] = 1983;
  std::cout << "m[Ritchie]: " <<  m["Ritchie"] << '\n';
  for(auto p : m) std::cout << '{' << p.first << ", "  << p.second << '}';
  m.erase("Scott");
  std::cout << '\n';
  for(auto p : m) std::cout << '{' << p.first << ", "  << p.second << '}';
  m.clear();
  std::cout << '\n';
  std::cout << "m.size(): " << m.size() << '\n';

  std::cout << '\n';

  std::cout << "C++11 unordered_map: " << '\n';
  std::unordered_map<std::string, int> um { {"Dijkstra", 1972}, {"Scott", 1976} };
  um["Ritchie"] = 1983;
  std::cout << "um[Ritchie]: " <<  um["Ritchie"] << '\n';
  for(auto p : um) std::cout << '{' << p.first << ", "  << p.second << '}';
  um.erase("Scott");
  std::cout << '\n';
  for(auto p : um) std::cout << '{' << p.first << ", " << p.second << '}';
  um.clear();
  std::cout << '\n';
  std::cout << "um.size(): " << um.size() << '\n';

  std::cout << '\n';

}
