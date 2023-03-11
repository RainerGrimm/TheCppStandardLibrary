#include <algorithm>
#include <iostream>
#include <vector>

int main(){

  std::cout << '\n';
  
  std::vector<int> myVec{0, 0, 1, 1, 2, 2, 3, 4, 4, 5, 3, 6, 7, 8, 1, 3, 3, 8, 8, 9};
  
  for (auto v: myVec) std::cout << v << " ";
  std::cout << '\n';
  //auto newIt= std::unique(myVec.begin(), myVec.end(), [](int a){ return a%2; });
  myVec.erase( std::unique(myVec.begin(), myVec.end()), myVec.end());
  for (auto v: myVec) std::cout << v << " ";
  
  std::cout << "\n\n";
  
  std::vector<int> myVec2{1, 4, 3, 3, 3, 5, 7, 9, 2, 4, 1, 6, 8, 0, 3, 5, 7, 8, 7, 3, 9, 2, 4, 2, 5, 7, 3};
  std::vector<int> resVec;
  resVec.reserve(myVec2.size());
  std::unique_copy(myVec2.begin(), myVec2.end(), std::back_inserter(resVec), 
		   [](int a, int b){return (a % 2) == (b % 2); });
  
  for(auto v: myVec2) std::cout << v << " ";
  std::cout << '\n';
  for(auto v: resVec) std::cout << v << " ";
  
  std::cout << "\n\n";

}