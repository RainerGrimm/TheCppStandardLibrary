#include <iostream>
#include <vector>

struct MyInt{
  MyInt(int i): myInt(i){};
  int myInt;
};

int main(){
  
  std::cout << '\n';

  std::vector<MyInt> myIntVec;
  myIntVec.push_back(MyInt(5));
  myIntVec.emplace_back(1);
  std::cout << "myIntVec.size(): " << myIntVec.size() << '\n';
  
  std::cout << '\n';
  
  std::vector<int> intVec;
 
  intVec.assign({1, 2, 3}); 
  for ( auto v: intVec ) std::cout << v << " ";
  
  std::cout << '\n';
  
  intVec.insert(intVec.begin(), 0);
  for ( auto v: intVec ) std::cout << v << " ";
  
  std::cout << '\n';
  
  intVec.insert(intVec.begin()+4, 4);
  for ( auto v: intVec ) std::cout << v << " ";
  
  std::cout << '\n';
  
  intVec.insert(intVec.end(), {5, 6, 7, 8, 9, 10, 11});
  for ( auto v: intVec ) std::cout << v << " ";
  std::cout << '\n';
  for ( auto revIt= intVec.rbegin(); revIt != intVec.rend(); ++revIt) std::cout << *revIt << " ";
  
  std::cout << '\n';
  
  intVec.pop_back();
  for ( auto v: intVec ) std::cout << v << " ";
  
  std::cout << "\n\n";
    
}