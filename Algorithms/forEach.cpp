#include <array>
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
class ContainerInfo{
public:

  void operator()(T t){
    num++;
    sum+= t;
  }

  int getSum() const{
    return sum;
  }
  
  int getSize() const{ return num; }

  double getMean() const{
      return static_cast<double>(sum) / static_cast<double>(num);
  }
private:
  T sum{0};
  int num{0};
};

int main(){
  
  std::cout << '\n';
  
  std::vector<double> myVec{1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
  
  auto vecInfo= std::for_each(myVec.begin(), myVec.end(), ContainerInfo<double>());
  std::cout << "vecInfo.getSum(): " << vecInfo.getSum() << '\n';
  std::cout << "vecInfo.getSize(): " << vecInfo.getSize() << '\n';
  std::cout << "vecInfo.getMean(): " << vecInfo.getMean() << '\n';
  
  std::cout << '\n';
  
  std::array<int, 100> myArr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  
  auto arrInfo= std::for_each(myArr.begin(), myArr.end(), ContainerInfo<int>());
  std::cout << "arrInfo.getSum(): " << arrInfo.getSum() << '\n';
  std::cout << "arrInfo.getSize(): " << arrInfo.getSize() << '\n';
  std::cout << "arrInfo.getMean(): " << arrInfo.getMean() << '\n';
  
  std::cout << '\n';
  
}
