#include <iostream>
#include <limits>
#include <string>

int main(){

  std::cout << '\n';
  
  std::cout << "to_string, to_wstring" << '\n';
  
  std::string maxLongLongString=std::to_string(std::numeric_limits<long long>::max());
  std::wstring maxLongLongWstring=std::to_wstring(std::numeric_limits<long long>::max());
  
  std::cout << std::numeric_limits<long long>::max() << '\n';
  std::cout << maxLongLongString << '\n';
  std::wcout <<  maxLongLongWstring <<  '\n';
  
  std::cout << '\n';
  
  std::cout << "ato* " << '\n';
  
  std::string str("10010101");
  
  std::cout << std::stoi(str) << '\n';
  std::cout << std::stoi(str, nullptr, 16) << '\n';
  std::cout << std::stoi(str, nullptr, 8) << '\n';
  std::cout << std::stoi(str, nullptr, 2) << '\n';
  
  std::cout << '\n';
  
  std::size_t idx;
  std::cout << std::stod("   3.5 km", &idx) << '\n';
  std::cout << "Not numeric char at position " << idx << "." << '\n';
  
  std::cout << '\n';
  
  try{
    std::cout << std::stoi("   3.5 km") << '\n';
    std::cout << std::stoi("   3.5 km", nullptr, 2) << '\n';
    
  }
  catch (const std::exception& e){
    std::cerr <<  e.what() << '\n';
  }
  
  std::cout << '\n';

}