#include <regex>

#include <iomanip>
#include <iostream>
#include <string>

int main(){

  std::cout << '\n';

  std::string future{"Future"};
  int len= sizeof(future);

  const std::string unofficial{"unofficial, C++0x"};
  const std::string official{"official, C++11"};

  std::regex regValues{"(.*), (.*)"};


  std::string standardText{"The $1 name of the new C++ standard is $2."};

  // using std::regex_replace
  std::string textNow= std::regex_replace(unofficial, regValues, standardText );

  std::cout <<  std::setw(len) << std::left << "Now: " << textNow << '\n';

  // using std::match_results
  // typedef match_results<string::const_iterator> smatch;
  std::smatch smatch;
  if ( std::regex_match(official, smatch, regValues)){

    std::string textFuture= smatch.format(standardText);
    std::cout <<  std::setw(len) << std::left << "Future: " << textFuture << '\n';

  }

  std::cout << '\n';

}
