#include <regex>

#include <iomanip>
#include <iostream>
#include <string>

void showCaptureGroups(const std::string& regEx, const std::string& text){

  // regular expression holder
  std::regex rgx(regEx);

  // result holder
  std::smatch smatch;

  // result evaluation
  if (std::regex_search(text, smatch, rgx)){
    std::cout << std::setw(14) << regEx << std::setw(12) << text << std::setw(12) << smatch[0]  << std::setw(10) << smatch[1] << std::setw(10) << smatch[2] << std::setw(10) << smatch[3] << std::setw(10) << smatch[4] << '\n';
  }

}

int main(){

  std::cout << '\n';

  std::cout << std::setw(14) << "reg Expr" << std::setw(12) << "text" << std::setw(12) << "smatch[0]" << std::setw(10) << "smatch[1]" << std::setw(10) << "smatch[2]" << std::setw(10) << "smatch[3]" << std::setw(10) << "smatch[4]" << '\n';

  showCaptureGroups("abc+", "abccccc");

  showCaptureGroups("(a+)(b+)(c+)", "aaabccc");

  showCaptureGroups("((a+)(b+)(c+))", "aaabccc");

  showCaptureGroups("(ab)(abc)+", "ababcabc");

  std::cout << '\n';
  
}
