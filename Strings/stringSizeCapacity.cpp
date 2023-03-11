#include <iostream>
#include <string>

void showStringInfo(const std::string& s){

  std::cout << s << '\n';
  std::cout << "s.size(): " << s.size() << '\n';
  std::cout << "s.capacity(): " << s.capacity() << '\n';
  std::cout << "s.max_size(): " << s.max_size() << '\n';
  std::cout << '\n';

}

int main(){

  std::string str;
  showStringInfo(str);
  
  str +="12345";
  showStringInfo(str);
  
  str.resize(30);
  showStringInfo(str);

  str.reserve(1000);
  showStringInfo(str);
  
  str.shrink_to_fit();
  showStringInfo(str);

}