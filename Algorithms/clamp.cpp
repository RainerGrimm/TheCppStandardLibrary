// clamp.cpp

#include <algorithm>
#include <iostream>
 
int main() {

    std::cout << '\n';

    auto values = {1, 2, 3, 4, 5, 6, 7};
    for (auto v: values) std::cout << v << ' ';
    std::cout << '\n';

    auto lo = 3;
    auto hi = 6;
    for (auto v: values) std::cout << std::clamp(v, lo, hi) << ' ';

    std::cout << '\n';

}