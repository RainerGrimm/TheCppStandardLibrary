#include <algorithm>
#include <functional>
#include <iostream>
#include <iterator>
#include <vector>

double divMe(double a, double b){
  return double(a/b);
}

using namespace std::placeholders;

int main(){

  std::cout << '\n';

  // invoking the function object directly
  std::cout << "1/2.0= " << std::bind(divMe, 1, 2.0)() << '\n';

  // placeholders for both arguments
  std::function<double(double, double)> myDivBindPlaceholder = std::bind(divMe, _1, _2);
  std::cout << "1/2.0= " << myDivBindPlaceholder(1, 2.0) << '\n';

  // placeholders for both arguments, swap the arguments
  std::function<double(double, double)> myDivBindPlaceholderSwap = std::bind(divMe, _2, _1);
  std::cout << "1/2.0= " << myDivBindPlaceholderSwap(2.0, 1) << '\n';

  // placeholder for the first argument
  std::function<double(double)> myDivBind1St = std::bind(divMe, _1, 2.0);
  std::cout<< "1/2.0= " << myDivBind1St(1) << '\n';

  // placeholder for the second argument
  std::function<double(double)> myDivBind2Nd = std::bind(divMe, 1.0, _1);
  std::cout << "1/2.0= " << myDivBind2Nd(2.0) << '\n';
  
  std::function<double(double)> myBindFront = std::bind_front(divMe, 1.0);
  std::cout << "1/2.0= " << myBindFront(2.0) << '\n';

  std::function<double(double)> myBindBack = std::bind_back(divMe, 2.0);
  std::cout << "1/2.0= " << myBindBack(1.0) << '\n';

  std::cout << '\n';

}
