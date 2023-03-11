#include <algorithm>
#include <iostream>
#include <vector>

int main(){

  std::cout << '\n';

  std::vector<int> myInts{1, 2, 3};

  std::cout << "All 3! permutions" << "\n\n";
  std::cout << "forwards" << '\n';  
  do{
    for (auto i: myInts) std::cout << i << " ";
    std::cout << '\n';
  } while(std::next_permutation(myInts.begin(), myInts.end()));
  
  std::cout << '\n';
  
  std::reverse(myInts.begin(), myInts.end());
  
  std::cout << "backwards" << '\n';
  
  do{
    for (auto i: myInts) std::cout << i << " ";
    std::cout << '\n';
  } while(std::prev_permutation(myInts.begin(), myInts.end()));
  
  std::cout << '\n';

}