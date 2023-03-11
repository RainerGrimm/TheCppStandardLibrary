#include <functional>
#include <iostream>

using namespace std;

void foo(){
  std::cout << "Invoked" << '\n';
}

int main(){
  typedef void callableUnit();
  reference_wrapper<callableUnit> refWrap(foo);
  refWrap();
};
