#include <ranges>
#include <vector>
#include <iostream>

int main()
{
    std::vector source{ 1, 4, 7, 8, 6, 2, 5, 9, 4, 12 };
    
    for (auto i : source | std::views::take(3))
        std::cout << i << ' ';
}
