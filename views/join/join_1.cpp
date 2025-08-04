#include <iostream>
#include <vector>
#include <ranges>

int main() 
{
    std::vector<std::vector<int>> matrix{
        {1, 2, 3},
        {4, 5},
        {6, 7, 8, 9}
    };

    auto flat = matrix | std::views::join;

    for (int x : flat)
        std::cout << x << ' ';  
}
