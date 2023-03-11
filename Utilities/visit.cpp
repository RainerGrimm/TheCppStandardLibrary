#include <iostream>
#include <vector>
#include <typeinfo>
#include <type_traits>

#include <variant>

  
int main(){
  
  std::cout << '\n';
  
  std::vector<std::variant<char, long, float, int, double, long long>>      // 1
             vecVariant = {5, '2', 5.4, 100ll, 2011l, 3.5f, 2017};
  
  // display each value                                                             
  for (auto& v: vecVariant){
    std::visit([](auto&& arg){std::cout << arg << " ";}, v);                // 2
  }
  
  std::cout << '\n';
  
  // display each type
  for (auto& v: vecVariant){
    std::visit([](auto&& arg){std::cout << typeid(arg).name() << " ";}, v); // 3
  }
  
  std::cout << '\n';
  
  // get the sum
  std::common_type<char, long, float, int, double, long long>::type res{};  // 4
 
  std::cout << "typeid(res).name(): "  << typeid(res).name() << '\n';
  
  for (auto& v: vecVariant){
    std::visit([&res](auto&& arg){res+= arg;}, v);                          // 5
  }
  std::cout << "res: " << res << '\n';
  
  // double each value
  for (auto& v: vecVariant){
    std::visit([&res](auto&& arg){arg *= 2;}, v);                           // 6
    std::visit([](auto&& arg){std::cout << arg << " ";}, v);
  }
   
  std::cout << '\n';
  
}
