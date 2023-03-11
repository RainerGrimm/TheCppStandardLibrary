// shiftRange.cpp

#include <algorithm>
#include <iostream>
#include <vector>
 
int main() {
    
    std::cout << '\n';
 
    std::vector<int> myVec{1, 2, 3, 4, 5, 6, 7};
    for (auto v: myVec) std::cout << v << " ";
    std::cout << '\n';
   

   auto newEnd = std::shift_left(myVec.begin(), myVec.end(), 2);
   myVec.erase(newEnd, myVec.end());
   for (auto v: myVec) std::cout << v << " ";
   std::cout << '\n';

   auto newBegin = std::shift_right(myVec.begin(), myVec.end(), 2);
   myVec.erase(myVec.begin(), newBegin);
   for (auto v: myVec) std::cout << v << " ";

   std::cout << '\n';

}