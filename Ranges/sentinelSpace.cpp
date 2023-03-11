// sentinelSpace.cpp

#include <iostream>
#include <algorithm>
#include <compare>
#include <vector>

struct Space {
bool operator== (auto pos) const {
    return *pos == ' '; 
}
};

int main() {

    std::cout << '\n';

    const char* rainerGrimm = "Rainer Grimm";
   
    std::ranges::for_each(rainerGrimm, Space{}, [] (char c) { std::cout << c; });
    std::cout << '\n';
    
    std::cout << "\n\n";
    
}