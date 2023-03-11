#include <initializer_list>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

struct MyData{
  MyData(){};
  MyData(int, double, char){};
};

template <typename T,  typename ... Args>
T createT(Args&&...args){
  return T(std::forward<Args>(args)...);
}

int main(){

  int a= createT<int>();
  int b= createT<int>(1);

  std::string s= createT<std::string>("Only for testing purpose.");

  MyData myData= createT<MyData>();
  MyData myData2= createT<MyData>(1, 3.19, 'a');

  typedef std::vector<int> IntVec;
  IntVec intVec= createT<IntVec>(std::initializer_list<int>({1, 2, 3, 4, 5}));

}

