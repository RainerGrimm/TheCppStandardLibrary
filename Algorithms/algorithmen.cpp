#include <algorithm>
#include <deque>
#include <iostream>
#include <list>
#include <string>
#include <vector>

template <typename Cont, typename T>
void doTheSame(Cont cont,  T t){
  
  for ( auto c: cont ) std::cout << c << " ";
  std::cout << '\n';
  std::cout << "cont.size(): " << cont.size() << '\n';
  std::reverse(cont.begin(), cont.end());
  for ( auto c: cont ) std::cout << c << " ";
  std::cout << '\n';
  std::reverse(cont.begin(), cont.end()); 
  for ( auto c: cont ) std::cout << c << " ";
  std::cout <<  '\n';
  auto It= std::find(cont.begin(), cont.end(), t);
  std::reverse(It, cont.end());
  for ( auto c: cont ) std::cout << c << " ";
  
}

int main(){
  
  std::cout << '\n';
  
  std::vector<int> myVec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
  std::deque<std::string> myDeque({"A", "B", "C", "D", "E", "F", "G", "H", "I"});
  std::list<char> myList({'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'});
  
  doTheSame(myVec, 5);
  std::cout << "\n\n";
  doTheSame(myDeque, "D");
  std::cout << "\n\n";
  doTheSame(myList, 'd');
  
  std::cout << "\n\n";
  
}