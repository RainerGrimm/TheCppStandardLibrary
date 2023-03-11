#include <iostream>
#include <string>
#include <tuple>
#include <utility>

int main(){

  std::cout << std::boolalpha << '\n';

  // create two tuples
  std::tuple<std::string, int, float> tup1("first", 3, 4.17f);
  auto tup2= std::make_tuple("second", 4, 1.1);

  // read the values
  std::cout << "tup1: "  << std::get<0>(tup1) << ", " << std::get<1>(tup1) << ", " << std::get<2>(tup1) << '\n';
  std::cout << "tup2: "  << std::get<0>(tup2) << ", " << std::get<1>(tup2) << ", " << std::get<2>(tup2) << '\n';

  // compare them
  std::cout << "tup1 < tup2: " << (tup1 < tup2) << '\n';

  std::cout << '\n';

  // modify a tuple value
  std::get<0>(tup2)= "Second";

  // read the values
  std::cout << "tup1: "  << std::get<0>(tup1) << ", " << std::get<1>(tup1) << ", " << std::get<2>(tup1) << '\n';
  std::cout << "tup2: "  << std::get<0>(tup2) << ", " << std::get<1>(tup2) << ", " << std::get<2>(tup2) << '\n';

  // compare them
  std::cout << "tup1 < tup2: " << (tup1 < tup2) << '\n';

  std::cout << '\n';

  auto pair= std::make_pair(1, true);
  std::tuple<int, bool> tup= pair;

}
