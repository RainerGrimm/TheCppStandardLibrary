#include <iostream>
#include <deque>

struct MyInt{
  MyInt(int i): myInt(i){};
  int myInt;
};

int main(){
  
  std::cout << '\n';

  std::deque<MyInt> myIntDeq;
  myIntDeq.push_back(MyInt(5));
  myIntDeq.emplace_back(1);
  std::cout << "myIntDeq.size(): " << myIntDeq.size() << '\n';
  
  std::cout << '\n';
  
  std::deque<int> intDeq;
 
  intDeq.assign({1, 2, 3}); 
  for ( auto v: intDeq ) std::cout << v << " ";
  
  std::cout << '\n';
  
  intDeq.insert(intDeq.begin(), 0);
  for ( auto v: intDeq ) std::cout << v << " ";
  
  std::cout << '\n';
  
  intDeq.insert(intDeq.begin()+4, 4);
  for ( auto v: intDeq ) std::cout << v << " ";
  
  std::cout << '\n';
  
  intDeq.insert(intDeq.end(), {5, 6, 7, 8, 9, 10, 11});
  for ( auto v: intDeq ) std::cout << v << " ";
  std::cout << '\n';
  for ( auto revIt= intDeq.rbegin(); revIt != intDeq.rend(); ++revIt) std::cout << *revIt << " ";
  
  std::cout << '\n';
  
  intDeq.pop_back();
  for ( auto v: intDeq ) std::cout << v << " ";
  
  std::cout << '\n';
  
  intDeq.push_front(-1);
  for ( auto v: intDeq ) std::cout << v << " ";
  
  std::cout << "\n\n";
    
}