#include <ranges>
#include <vector>
#include <iostream>
#include <algorithm>

int main() 
{
    std::vector<int> v{ 1, 3, 5, 7, 9 };

    auto it1 = std::ranges::lower_bound(v, 5);
    std::cout << *it1 << '\n'; // 5

    auto it2 = std::ranges::upper_bound(v, 5);
    std::cout << *it2 << '\n'; // 7

    auto it3 = std::ranges::upper_bound(std::vector{ 1, 3, 5, 7, 9, 13 }, 9);
    std::cout << *it3 << '\n'; // error

}
