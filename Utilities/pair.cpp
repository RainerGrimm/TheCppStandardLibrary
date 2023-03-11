#include <iostream>
#include <utility>

int main(){

  std::cout << '\n';

  std::pair<const char*, double> charDoub("string", 3.14);
  std::pair<const char*, double> charDoub2= std::make_pair("string", 3.14);
  auto charDoub3= std::make_pair("string", 3.14);

  std::cout << "charDoub: (" << charDoub.first << ", " << charDoub.second << ")" << '\n';
  charDoub.first="String";
  std::get<1>(charDoub)=4.14;
  std::cout << "charDoub: (" << charDoub.first << ", " << charDoub.second << ")" << '\n';

  std::cout << '\n';

  if (charDoub2 == charDoub3) std::cout << "charDoub2 == charDoub3" << '\n';

  if (charDoub > charDoub3) std::cout << "charDoub > charDoub3" << '\n';

  std::cout << '\n';

}
