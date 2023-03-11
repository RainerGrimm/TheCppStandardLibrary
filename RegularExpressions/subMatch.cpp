#include <algorithm>
#include <iomanip>
#include <iostream>
#include <regex>
#include <string>

int main(){

  std::cout << '\n';

  std::string privateAddress="192.168.178.21";

  // regular expression for IP4 adresses
  std::string ip4RegEx(R"((\d{1, 3})\.(\d{1, 3})\.(\d{1, 3})\.(\d{1, 3}))");

  // regular expression holder
  std::regex rgx(ip4RegEx);

  // search result holder
  std::smatch smatch;

  // looking for the exact match
  if (std::regex_match(privateAddress, smatch, rgx)){

    for ( auto cap: smatch ){

      std::cout << "capture group: " << cap << '\n';
      if (cap.matched){

        // print each character in hexadecimal notation,  including the base
        std::cout << "hex: ";
        std::for_each(cap.first, cap.second, [](int v){std::cout << std::showbase << std::hex << v << " ";});
        std::cout << "\n\n";

      }

    }

  }

}
