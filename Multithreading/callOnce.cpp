#include <iostream>
#include <thread>
#include <mutex>
 
std::once_flag onceFlag;
 
void do_once(){
  std::call_once(onceFlag, [](){ std::cout << "Only once." << '\n'; });
}
 
int main(){
  
  std::cout << '\n';
  
  std::thread t1(do_once);
  std::thread t2(do_once);
  std::thread t3(do_once);
  std::thread t4(do_once);
 
  t1.join();
  t2.join();
  t3.join();
  t4.join();
  
  std::cout << '\n';
}
