#include <regex>

#include <iostream>
#include <string>
#include <vector>

int main(){

  std::cout << '\n';

  // a few books
  std::string text{"Pete Becker, The C++ Standard Library Extensions, 2006:Nicolai Josuttis, The C++ Standard Library, 1999:Andrei Alexandrescu, Modern C++ Design, 2001"};

  // regular expression for a book
  std::regex regBook(R"((\w+)\s(\w+), ([\w\s\+]*), (\d{4}))");

  // get all books from text
  std::sregex_token_iterator bookItBegin(text.begin(), text.end(), regBook);
  const std::sregex_token_iterator bookItEnd;

  std::cout << "##### std::match_results ######" << "\n\n";
  while ( bookItBegin != bookItEnd){
    std::cout << *bookItBegin++ << '\n';
  }

  std::cout << "\n\n" << "##### last name,  date of publication ######" << "\n\n";

  // get all last name and date of publication for the entries
  std::sregex_token_iterator bookItNameIssueBegin(text.begin(), text.end(), regBook, {{2, 4}});
  const std::sregex_token_iterator bookItNameIssueEnd;
  while ( bookItNameIssueBegin != bookItNameIssueEnd){
      std::cout << *bookItNameIssueBegin++ << ", ";
      std::cout << *bookItNameIssueBegin++ << '\n';
  }

  // regular expression for a book, using negativ search
  std::regex regBookNeg(":");

  std::cout << "\n\n" << "##### get each entry, using negativ search  ######" << "\n\n";

  // get all entries, only using ":" as regular expression
  std::sregex_token_iterator bookItNegBegin(text.begin(), text.end(), regBookNeg, -1);
  const std::sregex_token_iterator bookItNegEnd;
   while ( bookItNegBegin != bookItNegEnd){
       std::cout << *bookItNegBegin++ << '\n';
   }


  std::cout << '\n';

}
