#include <iostream>
#include <regex>
#include <string>
#include <vector>

int main(){

  std::cout << '\n';

  // regular expression for a number, not including an exponent
  std::string numberRegEx(R"([-+]?([0-9]*\.[0-9]+|[0-9]+))");

  // regular expression holder
  std::regex rgx(numberRegEx);

  // using const char*
  const char* numChar{"2011"};
  if (std::regex_match(numChar, rgx)){
    std::cout << numChar << " is a number." << '\n';
  }

  // using std::string
  const std::string numStr{"3.14159265359"};
  if (std::regex_match(numStr, rgx)){
    std::cout << numStr << " is a number." << '\n';
  }

  // using bidirectional iterators
  const std::vector<char> numVec{{'-', '2', '.', '7', '1', '8', '2', '8', '1', '8', '2', '8'}};
  if (std::regex_match(numVec.begin(), numVec.end(), rgx)){
    for (auto c: numVec){ std::cout << c ;};
    std::cout << " is a number." << '\n';
  }

  std::cout << '\n';

}
