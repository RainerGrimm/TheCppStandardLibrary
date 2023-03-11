#include <iostream>
#include <queue>

int main(){

  std::cout << std::boolalpha << '\n';

  std::queue<int> myQueue;

  std::cout << "myQueue.empty(): " << myQueue.empty() << '\n';
  std::cout << "myQueue.size(): " << myQueue.size() << '\n';
  
  
  std::cout << '\n';

  myQueue.push(1);
  myQueue.push(2);
  myQueue.push(3);

  std::cout << "myQueue.back(): " << myQueue.back() <<  '\n';
  std::cout << "myQueue.front(): " << myQueue.front() <<  '\n';
  
  std::cout << '\n';

  while (!myQueue.empty()){
    std::cout << "myQueue.back(): " << myQueue.back() <<  '\n';
    std::cout << "myQueue.front(): " << myQueue.front() <<  '\n';
    myQueue.pop();
  }
  
  std::cout << '\n';

  std::cout << "myQueue.empty(): " << myQueue.empty() << '\n';
  std::cout << "myQueue.size(): " << myQueue.size() << '\n';
  
  std::cout << '\n';
  
}