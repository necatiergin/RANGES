#include <ranges>
#include <iostream>

int main() 
{
    auto r = std::views::zip(
        std::views::iota(0),
        std::views::repeat("tick", 3)
    );

    for (auto [i, s] : r) {
        std::cout << i << ": " << s << '\n';
    }
    /*
    0: tick
    1: tick
    2: tick
    */
}
