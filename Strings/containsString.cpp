// containsString.cpp

#include <iostream>
#include <string>

int main() {

    std::cout << std::boolalpha;

    std::cout << '\n';

    std::string helloWorld = "hello world";

    std::cout << "helloWorld.contains(hello): " 
              << helloWorld.contains("hello") << '\n'; // true
    std::cout << "helloWorld.contains(llo): "
              << helloWorld.contains("llo") << '\n';   // true
    std::cout << "helloWorld.contains(hello): "
              << helloWorld.contains('w') << '\n';    // true          
    std::cout << "helloWorld.contains(hello): "
              << helloWorld.contains('W') << '\n';    // false

}

