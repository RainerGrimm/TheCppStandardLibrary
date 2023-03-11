#include <iostream>
#include <chrono>
#include <mutex>
#include <thread>

struct CriticalData{
  std::mutex mut;
};

void deadLockResolved(CriticalData& a, CriticalData& b){

  std::unique_lock<std::mutex>guard1(a.mut, std::defer_lock);
  std::cout << "Thread: " << std::this_thread::get_id() << " defer the locking of the first mutex" <<  '\n';

  std::this_thread::sleep_for(std::chrono::milliseconds(1));

  std::unique_lock<std::mutex>guard2(b.mut, std::defer_lock);
  std::cout << "Thread: " << std::this_thread::get_id() << " defer the locking of the second mutex" <<  '\n';

  std::cout << "Thread: " << std::this_thread::get_id() << " locking them both atomically" << '\n';
  std::lock(guard1, guard2);
  // do something with a and b
}

int main(){

  std::cout << '\n';

  CriticalData c1;
  CriticalData c2;

  std::thread t1([&]{deadLockResolved(c1, c2);});
  std::thread t2([&]{deadLockResolved(c2, c1);});

  t1.join();
  t2.join();

  std::cout << '\n';

}

