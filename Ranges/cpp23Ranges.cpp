// cpp23Ranges.cpp

#include <iostream>
#include <ranges>
#include <vector>

int main(){

    std::vector vec = {1, 2, 3, 4};

    for (auto i : vec | std::views::adjacent<2>) {
        std::cout << '(' << i.first << ", " << i.second << ") "; // (1, 2) (2, 3) (3, 4)
    }

    for (auto i : vec | std::views::adjacent_transform<2>(std::multiplies())) {
        std::cout << i << ' ';                                // 2 6 12
    }

    std::print("{}\n", vec | std::views::chunk(2));        // [[1, 2], [3, 4],
    std::print("{}\n", vec | std::views::slide(2));        // [[1, 2], [2, 3], [3, 4]

    for (auto i : vec | std::views::slide(2)) {
        std::cout << '[' << i[0] << ", " << i[1] << "] ";  // [1, 2] [2, 3] [3, 4] [4, 5]
    }

    std::vector vec2 = {1, 2, 3, 0, 5, 2};
    std::print("{}\n", vec2 | std::views::chunk_by(std::ranges::less_equal{}));   // [[1, 2, 3], [0, 5], [2]]

    for (auto i : vec | std::views::slide(2)) {
        std::cout << '[' << i[0] << ", " << i[1] << "] ";  // [1, 2] [2, 3] [3, 4] [4, 5]
    }
}
