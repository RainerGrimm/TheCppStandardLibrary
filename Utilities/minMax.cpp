#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

int main(){

  std::cout << '\n';

  std::string first{"first"};
  std::string second{"second"};

  auto minInt= std::min({3, 1, 2011, 2014, -5});

  std::cout << "std::min(2011, 2014): " << std::min(2011, 2014) << '\n';
  std::cout << "std::min(first, second): " << std::min(first, second) << '\n';
  std::cout << "std::min({3, 1, 2011, 2014, -5}): " << std::min({3, 1, 2011, 2014, -5}) << '\n';
  std::cout << "std::min(-10, -5, [](int a, int b){return std::abs(a) < std::abs(b);}): "  <<
                std::min(-10, -5, [](int a, int b){return std::abs(a) < std::abs(b);}) << '\n';


  std::cout << '\n';

  std::cout << "std::max(2011, 2014): " << std::max(2011, 2014) << '\n';
  std::cout << "std::max(first, second): " << std::max(first, second) << '\n';
  std::cout << "std::max({3, 1, 2011, 2014, -5}): " << std::max({3, 1, 2011, 2014, -5}) << '\n';
  std::cout << "std::max(-10, -5, [](int a, int b){return std::abs(a) < std::abs(b);}): "  <<
                std::max(-10, -5, [](int a, int b){return std::abs(a) < std::abs(b);}) << '\n';


  std::cout << '\n';

  std::pair<int, int> pairInt= std::minmax(2011, 2014);
  auto pairStr= std::minmax(first, second);
  auto pairSeq= std::minmax({3, 1, 2011, 2014, -5});
  auto pairAbs= std::minmax({3, 1, 2011, 2014, -5}, [](int a, int b){return std::abs(a) < std::abs(b);});

  std::cout << "(pairInt.first, pairInt.second): (" << pairInt.first << ", " << pairInt.second << ")" << '\n';
  std::cout << "(pairStr.first, pairStr.second): (" << pairStr.first << ", " << pairStr.second << ")" << '\n';
  std::cout << "(pairSeq.first, pairSeq.second): (" << pairSeq.first << ", " << pairSeq.second << ")" << '\n';
  std::cout << "(pairAbs.first, pairAbs.second): (" << pairAbs.first << ", " << pairAbs.second << ")" << '\n';

  std::cout << '\n';


}

