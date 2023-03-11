#include <iostream>
#include <thread>

int main() {
    
    std::cout << '\n';
    std::cout << std::boolalpha;
    
    std::jthread thr{[]{ std::cout << "std::jthread" << '\n'; }};
    
    std::cout << "thr.joinable(): " << thr.joinable() << '\n';
    
    std::cout << '\n';
    
}
