#include <functional>
#include <iostream>
#include <string>
#include <tuple>
#include <utility>


void invokeMe(const std::string& s){
  std::cout << s << ": const " << '\n';
}


template <typename T>
void doubleMe(T t){
  t *= 2;
}

int main(){

  std::cout << '\n';

  std::string s{"string"};

  invokeMe(std::cref(s));

  std::cout << '\n';

  int i=1;
  std::cout << "i: " << i << '\n';

  doubleMe(i);
  std::cout << "doubleMe(i): " << i << '\n';

  doubleMe(std::ref(i));
  std::cout << "doubleMe(std::ref(i)): " << i << '\n';

  std::cout << '\n';

  int a{2011};
  auto tup= std::make_pair(a, std::ref(a));
  std::cout << "(tup.first, tup.second): (" << tup.first << ", " << tup.second << ")" << '\n';
  a=2014;
  std::cout << "(tup.first, tup.second): (" << tup.first << ", " << tup.second << ")" << '\n';

  std::cout << '\n';

}

