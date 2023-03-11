#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>

int main(){

  std::cout << '\n';

  std::array<int, 10> arr1{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::array<int, 5> arr2{3, 4, -5, 6, 7};

  auto fwdIt= std::search(arr1.begin(), arr1.end(), arr2.begin(), arr2.end());

  if (fwdIt == arr1.end()) std::cout << "arr2 not in arr1." << '\n';
  else{
    std::cout << "arr2 at position " << std::distance(arr1.begin(), fwdIt)   << " in arr1." << '\n'; 
  }
  
  auto fwdIt2= std::search(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), [](int a, int b){ return std::abs(a) == std::abs(b); });

  if (fwdIt2 == arr1.end()) std::cout << "arr2 not in arr1." << '\n';
  else{
    std::cout << "arr2 at position " << std::distance(arr1.begin(), fwdIt2)  << " in arr1." << '\n'; 
  }

  std::cout << '\n';

}
