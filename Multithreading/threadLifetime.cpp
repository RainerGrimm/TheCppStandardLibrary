#include <iostream>
#include <thread>

void helloFunction(){
  std::cout << "Hello C++11 from a function." << '\n';
}

class HelloFunctionObject  {
  public:
    void operator()() const {
      std::cout << "Hello C++11 from a function object." << '\n';
    }
};

int main(){

  std::cout << '\n';

  // thread executing helloFunction
  std::thread t1(helloFunction);

  // thread executing helloFunctionObject
  HelloFunctionObject helloFunctionObject;
  std::thread t2(helloFunctionObject);

  // thread executing lambda function
  std::thread t3([]{std::cout << "Hello C++11 from lambda function." << '\n';});

  // ensure that t1, t2 and t3 have finished before main thread terminates
  t1.join();
  t2.detach();
  t3.join();

  std::cout << '\n';

};

