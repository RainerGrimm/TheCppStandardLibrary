#include <iostream>
#include <string>

int main(){

  std::cout << '\n';

  std::cout << "ASSIGN: " << '\n';

  std::string str{"New String"};
  std::string str2{"Other String"};
  std::cout << "str: " << str << '\n';
  
  str.assign(str2, 4, std::string::npos);
  std::cout << str << '\n';

  str.assign(5, '-');
  std::cout << str << '\n';
  std::cout << '\n';

  std::cout << "DELETE" << '\n';
  
  str={"0123456789"};
  std::cout << "str: " << str << '\n';
  str.erase(7, 2);
  std::cout << str << '\n';
  
  str.erase(str.begin()+2, str.end()-2);
  std::cout << str << '\n';
  
  str.erase(str.begin()+2, str.end());
  std::cout << str << '\n';
  
  str.pop_back();
  std::cout << str << '\n';
  
  str.erase();
  std::cout << str << '\n';
  
  std::cout << "APPEND" << '\n';
  
  str="01234";
  std::cout << "str: " << str << '\n';
  
  str+="56";
  std::cout << str << '\n';
  
  str+='7';
  std::cout << str << '\n';
  
  str+={'8', '9'};
  std::cout << str << '\n';
  
  str.append(str);
  std::cout << str << '\n';
  
  str.append(str, 2, 4);
  std::cout << str << '\n';
  
  str.append(10, '0');
  std::cout << str << '\n';
  
  str.append(str, 10, 10);
  std::cout << str << '\n';
  
  str.push_back('9');
  std::cout << str << '\n';
  
  std::cout << '\n';
  
  std::cout << "INSERT" << '\n';
  str={"345"};
  std::cout << "str: " << str << '\n';
  
  str.insert(3, "6789");
  std::cout << str << '\n';
  
  str.insert(0, "012");
  std::cout << str << '\n';
  
  std::cout << '\n';
  
  std::cout <<  "REPLACE" << '\n';
  str={"only for testing purpose."};
  std::cout << "str: " << str << '\n';
  
  str.replace(0, 0, "O");
  std::cout <<  str << '\n';
  
  str.replace(0, 5, "Only", 0, 4);
  std::cout << str << '\n';
  
  str.replace(16, 8, "");
  std::cout << str << '\n';
  
  str.replace(4, 0, 5, 'y');
  std::cout << str << '\n';
  
  str.replace(str.begin(), str.end(), "Only for testing purpose.");
  std::cout << str << '\n';
  
  str.replace(str.begin()+4, str.end()-8, 10, '#');
  std::cout << str << '\n';
  
  std::cout << '\n';

}
