#include <iostream>
#include <regex>
#include <string>

int main(){

  std::cout << '\n';

  // regular expression holder for time
  std::regex crgx("([01]?[0-9]|2[0-3]):[0-5][0-9]");

  // const char*
  std::cout << "const char*" << '\n';
  std::cmatch cmatch;

  const char* ctime{"Now it is 23:10."};

  if (std::regex_search(ctime, cmatch, crgx)){

     std::cout << ctime << '\n';
     std::cout << "Time: " << cmatch[0] << '\n';

   }

  std::cout << '\n';

  // std::string
  std::cout << "std::string" << '\n';
  std::smatch smatch;

  std::string stime{"Now it is 23:25."};
  if (std::regex_search(stime, smatch, crgx)){

    std::cout << stime << '\n';
    std::cout << "Time: " << smatch[0] << '\n';

  }

  std::cout << '\n';

  // regular expression holder for time
  std::wregex wrgx(L"([01]?[0-9]|2[0-3]):[0-5][0-9]");

  // const wchar_t
  std::cout << "const wchar_t* " << '\n';
  std::wcmatch wcmatch;

  const wchar_t* wctime{L"Now it is 23:47."};

  if (std::regex_search(wctime, wcmatch, wrgx)){

       std::wcout << wctime << '\n';
       std::wcout << "Time: " << wcmatch[0] << '\n';

  }

  std::cout << '\n';

  // std::wstring
  std::cout << "std::wstring" << '\n';
  std::wsmatch wsmatch;

  std::wstring  wstime{L"Now it is 00:03."};

  if (std::regex_search(wstime, wsmatch, wrgx)){

    std::wcout << wstime << '\n';
    std::wcout << "Time: " << wsmatch[0] << '\n';

  }

  std::cout << '\n';

}
