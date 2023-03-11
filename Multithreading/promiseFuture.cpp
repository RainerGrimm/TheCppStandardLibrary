#include <future>
#include <iostream>
#include <thread>
#include <utility>

void product(std::promise<int>&& intPromise, int a, int b){
  intPromise.set_value(a * b);
}

struct Div{

  void operator() (std::promise<int>&& intPromise, int a, int b) const {
    intPromise.set_value(a / b);
  }

};

int main(){

  int a= 20;
  int b= 10;

  std::cout << '\n';

  // define the promises
  std::promise<int> prodPromise;
  std::promise<int> divPromise;

  // get the futures
  std::future<int> prodResult= prodPromise.get_future();
  std::future<int> divResult= divPromise.get_future();

  // calculate the result in a separat thread
  std::thread prodThread(product, std::move(prodPromise), a, b);
  Div div;
  std::thread divThread(div, std::move(divPromise), a, b);

  // get the result
  std::cout << "20 * 10= " << prodResult.get() << '\n';
  std::cout << "20 / 10= " << divResult.get() << '\n';

  prodThread.join();
  
  divThread.join();

  std::cout << '\n';

}

