#include <iostream>
#include <vector>
#include <ranges>

int main() 
{
    std::vector<int> ivec = { 10, 20, 30, 40, 50, 60 };

    auto piped = ivec
        | std::views::take(4)
        | std::views::reverse;

    for (int x : piped) {
        std::cout << x << ' '; 
    }
}
