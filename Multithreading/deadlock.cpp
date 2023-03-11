#include <iostream>
#include <chrono>
#include <mutex>
#include <thread>

struct CriticalData{
  std::mutex mut;
};

void deadLock(CriticalData& a, CriticalData& b){

  std::lock_guard<std::mutex>guard1(a.mut);
  std::cout << "get the first mutex" << '\n';
  std::this_thread::sleep_for(std::chrono::milliseconds(1));
  std::lock_guard<std::mutex>guard2(b.mut);
  std::cout << "get the second mutex" << '\n';
  // do something with a and b
}

int main(){

  CriticalData c1;
  CriticalData c2;

  std::thread t1([&]{deadLock(c1, c2);});
  std::thread t2([&]{deadLock(c2, c1);});

  t1.join();
  t2.join();

}
