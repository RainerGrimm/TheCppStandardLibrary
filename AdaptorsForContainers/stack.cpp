#include <iostream>
#include <stack>

int main(){

  std::cout << std::boolalpha << '\n';

  std::stack<int> myStack;

  std::cout << "myStack.empty(): " << myStack.empty() << '\n';
  std::cout << "myStack.size(): " << myStack.size() << '\n';
  
  
  std::cout << '\n';

  myStack.push(1);
  myStack.push(2);
  myStack.push(3);

  std::cout << "myStack.top(): " << myStack.top() <<  '\n';
  
  std::cout << '\n';

  while (!myStack.empty()){
    std::cout << "myStack.top(): " << myStack.top() <<  '\n';
    myStack.pop();
  }
  
  std::cout << '\n';

  std::cout << "myStack.empty(): " << myStack.empty() << '\n';
  std::cout << "myStack.size(): " << myStack.size() << '\n';
  
  std::cout << '\n';
  
}