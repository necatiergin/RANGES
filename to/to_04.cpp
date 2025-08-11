#include <vector>
#include <ranges>
#include <iostream>

int main() 
{
    std::vector<int> vec = std::views::iota(1) | 
        std::views::stride(3) | 
        std::views::take(10) |
        std::ranges::to<std::vector>();

    for (int i : vec)
        std::cout << i << ' ';
}
