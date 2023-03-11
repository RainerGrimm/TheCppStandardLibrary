#include <functional>
#include <iostream>
#include <tuple>

int main(){

  std::cout << '\n';

  int first= 1;
  int second= 2;
  int third= 3;
  int fourth= 4;

  std::cout << "global variables: " << first << " " << second << " " << third << " " << fourth << '\n';

  std::cout << '\n';

  auto tup= std::tie(first, second, third, fourth)= std::make_tuple(1001, 1002, 1003, 1004);

  std::cout << "std::tuple tup: (" << std::get<0>(tup) << ", " << std::get<1>(tup) << ", " << std::get<2>(tup) << ", " << std::get<3>(tup) << ")" << '\n';
  std::cout << "global variables: " << first << " " << second << " " << third << " " << fourth << '\n';

  first= 2001;
  std::get<1>(tup)= 2002;

  std::cout << '\n';

  std::cout << "std::tuple tup: (" << std::get<0>(tup) << ", " << std::get<1>(tup) << ", " << std::get<2>(tup) << ", " << std::get<3>(tup) << ")" << '\n';
  std::cout << "global variables: " << first << " " << second << " " << third << " " << fourth << '\n';

  std::cout << '\n';

  int a;
  int b;

  // bind the 2th and 4th argument to a and b
  std::tie(std::ignore, a, std::ignore, b)= tup;

  // print the values
  std::cout << "a: " << a << '\n';
  std::cout << "b: " << b << '\n';

  std::cout << '\n';

  std::tie(a, b)= std::make_pair(3001, 3002);

  std::cout << "a: " << a << '\n';
  std::cout << "b: " << b << '\n';

  std::cout << '\n';

}
