#include <unordered_set>
#include <ranges>
#include <iostream>

int main() 
{
    std::vector vec{ 1, 2, 2, 7, 7, 7,  9, 9, 9, 8};

    auto myset = vec | std::ranges::to<std::unordered_set>();

    for (int x : myset)
        std::cout << x << " ";
}
