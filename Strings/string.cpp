#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main(int argc, char* argv[]){

  std::cout << '\n';

  std::cout << "Type in your names in the form FirstnameFamilyname." << '\n';

  std::string name, firstName, familyName;
  std::vector<std::pair<std::string, std::string> > allNames;
  
  for (int i= 1; i < argc; ++i){

    name=argv[i];
    
    auto strIt=std::find_if(name.begin()+1, name.end(), [](char c){ return std::isupper(c); });
    
    if ( strIt != name.end() ){
      firstName=std::string(name.begin(), strIt);
      familyName= std::string(strIt, name.end());
    
      allNames.push_back(std::make_pair(firstName, familyName));
    }
    
  }

  std::string greeting;
  
  std::cout << '\n';
  
  for ( auto pa: allNames ){
    greeting= "Hello " + pa.second + " " + pa.first;
    std::cout << greeting << '\n';
  }
  
  std::cout << '\n';

}