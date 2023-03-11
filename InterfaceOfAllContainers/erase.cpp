// erase.cpp

#include <iostream>
#include <numeric>
#include <deque>
#include <list>
#include <string>
#include <vector>

template <typename Cont>
void eraseVal(Cont& cont, int val) {
    std::erase(cont, val);
}

template <typename Cont, typename Pred>
void erasePredicate(Cont& cont, Pred pred) {
    std::erase_if(cont, pred);
}

template <typename Cont>
void printContainer(Cont& cont) {
    for (auto c: cont) std::cout << c << " ";
    std::cout << '\n';
}

template <typename Cont>
void doAll(Cont& cont) {
    printContainer(cont);
    eraseVal(cont, 5);
    printContainer(cont);
    erasePredicate(cont, [](auto i) { return i >= 3; } );
    printContainer(cont);
}

int main() {
    
    std::string str{"A sentence with e."};
    std::cout << "str: " << str << '\n';
    std::erase(str, 'e');
    std::cout << "str: " << str << '\n';
    
    std::cout << "\nstd::vector " << '\n';
    std::vector vec{1, 2, 3, 4, 5, 6, 7, 8, 9};
    doAll(vec);
    
    std::cout << "\nstd::deque " << '\n';
    std::deque deq{1, 2, 3, 4, 5, 6, 7, 8, 9};
    doAll(deq);
    
    std::cout << "\nstd::list" << '\n';
    std::list lst{1, 2, 3, 4, 5, 6, 7, 8, 9};
    doAll(lst);
    
}
    
    
    
    
    

