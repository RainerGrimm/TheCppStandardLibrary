#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

int main(){

  std::cout << '\n';

  std::string str{"abcdabAAAaefaBqeaBCQEaadsfdewAAQAaafbd"};
  std::cout << "count(str.begin(), std.end(), a): " << std::count(str.begin(), str.end(), 'a') << '\n';
  std::cout << "count_if(str.begin(), std.end(), [](char a){ return std::isupper(a);}): " << std::count_if(str.begin(), str.end(), [](char a){ return std::isupper(a);}) << '\n';

  std::cout << '\n';

}