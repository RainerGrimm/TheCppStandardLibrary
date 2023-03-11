
#include <algorithm>
#include <iostream>
#include <vector>


template <typename T>
void swap(T& a, T& b) noexcept {
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}

struct MyData{
  std::vector<int> myData;

  MyData():myData({1, 2, 3, 4, 5}){}

  // copy semantic
  MyData(const MyData& m):myData(m.myData){
    std::cout << "copy constructor"  << '\n';
  }

  MyData& operator=(const MyData& m){
    myData= m.myData;
    std::cout << "copy assignment operator"  << '\n';
    return *this;
  }

};

int main(){

  std::cout << '\n';

  MyData a, b;
  swap(a, b);

  std::cout << '\n';

};

