// startWithEndsWith.cpp

#include <iostream>
#include <string>

int main() {

    std::cout << std::boolalpha;

    std::cout << '\n';

    std::string helloWorld = "hello world";

    std::cout << "helloWorld.starts_with(hello): " 
              << helloWorld.starts_with("hello") << '\n'; // true
    std::cout << "helloWorld.starts_with(llo): "
              << helloWorld.starts_with("llo") << '\n';   // false

    std::cout << "helloWorld.ends_with(world): " 
              << helloWorld.ends_with("world") << '\n';   // true
    std::cout << "helloWorld.ends_with(wo);: " 
              << helloWorld.ends_with("wo") << '\n';      // false

}

