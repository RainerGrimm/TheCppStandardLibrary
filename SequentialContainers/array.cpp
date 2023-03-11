#include <algorithm>
#include <numeric>
#include <array>
#include <iostream>
#include <iterator>

const int NUM= 10;

int main(){

  std::cout << std::boolalpha << '\n';

  // no value initialized
  std::array<int, NUM> arr1;
  std::cout << "arr1: ";
  std::copy(arr1.begin(), arr1.end(), std::ostream_iterator<int>(std::cout, " "));

  // value-initialization
  std::array<int, NUM> arr2= {};
  std::cout << '\n' << "arr2:  ";
  std::array<int, NUM>::const_iterator arrIt;
  for( arrIt= arr2.begin(); arrIt != arr2.end(); ++arrIt) std::cout << *arrIt << " ";

  std::array<int, NUM> arr3{1, 2, 3, 4};
  std::cout << '\n' << "arr3: ";
  for ( auto a: arr3 ) std::cout << a << " " ;

  // initializer list
  std::array<int, NUM> arr4{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::cout << '\n' << "arr4: ";
  std::copy(arr4.rbegin(), arr4.rend(), std::ostream_iterator<int>(std::cout, " "));

  std::cout << "\n\n";

  // get the size of arr4
  double sum= std::accumulate(arr4.begin(), arr4.end(), 0);
  double mean= sum / arr4.size();
  std::cout << "mean of a4: " << mean << '\n';
  
  std::cout << '\n';
  
  // read and write
  std::cout << "arr4[5]: " << arr4[5] << '\n';
  std::cout << "arr4.at(5): " << arr4.at(5) << '\n';
  arr4[5]= 2011;
  std::cout << "arr4[5]: " << arr4[5] << '\n';

  // swap arrays
  std::swap(arr1, arr4);
  std::cout << '\n' << "arr4: ";
  for ( auto a: arr4 ) std::cout << a << " " ;

  std::cout << "\n\n";

  // comparison
  std::cout << "(arr1 < arr4): " << (arr1 < arr4 ) << '\n';
  
  std::cout << '\n';

  // tuple like
  std::cout << "(arr4[0] == std::get<0>(arr4)): " << (arr4[0] == std::get<0>(arr4)) << '\n';

  std::cout << '\n';

}
