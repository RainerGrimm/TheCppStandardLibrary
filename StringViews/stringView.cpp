// stringView.cpp

#include <cassert>
#include <iostream>
#include <string>

#include <string_view>

void* operator new(std::size_t count){
    std::cout << "   " << count << " bytes" << '\n';
    return malloc(count);
}

void getString(const std::string& str){}

void getStringView(std::string_view strView){}

int main() {

    std::cout << '\n';

    std::cout << "std::string" << '\n';

    std::string large = "0123456789-123456789-123456789-123456789";
    std::string substr = large.substr(10);

    std::cout << '\n';

    std::cout << "std::string_view" << '\n';

    std::string_view largeStringView{large.c_str(), large.size()};
    largeStringView.remove_prefix(10);

    assert(substr == largeStringView);

    std::cout << '\n';

    std::cout << "getString" << '\n';

    getString(large);
    getString("0123456789-123456789-123456789-123456789");
    const char message []= "0123456789-123456789-123456789-123456789";
    getString(message);

    std::cout << '\n';

    std::cout << "getStringView" << '\n';

    getStringView(large);
    getStringView("0123456789-123456789-123456789-123456789");
    getStringView(message);

    std::cout << '\n';

}
  


