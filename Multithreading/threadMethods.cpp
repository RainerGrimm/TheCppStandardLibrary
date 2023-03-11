#include <iostream>
#include <thread>


int main(){

  std::cout << '\n';

  std::cout << "std::thread::hardware_concurrency()= "<< std::thread::hardware_concurrency() << '\n';

  std::cout << '\n';

  std::thread t1([]{std::cout << "hello from t1 with id= " << std::this_thread::get_id() << '\n';});
  std::thread t2([]{std::cout << "hello from t2 with id= " << std::this_thread::get_id() << '\n';});

  std::cout << '\n';

  std::cout << "FROM MAIN: id of t1 " << t1.get_id() << '\n';
  std::cout << "FROM MAIN: id of t2 " << t2.get_id() << '\n';

  std::cout << '\n';
  t1.swap(t2);

  std::cout << "FROM MAIN: id of t1 " << t1.get_id() << '\n';
  std::cout << "FROM MAIN: id of t2 " << t2.get_id() << '\n';

  std::cout << '\n';

  std::cout << "FROM MAIN: id of main= " << std::this_thread::get_id() << '\n';

  t1.join();
  t2.join();

  std::cout << '\n';

}
