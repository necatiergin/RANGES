#include <iostream>
#include <vector>
#include <ranges>

int main() 
{
    std::vector<int> ivec = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    auto result = ivec
        | std::views::filter([](int n) { return n % 2 == 0; })  // even values
        | std::views::transform([](int n) { return n * n; });   // square it

    for (int x : result) {
        std::cout << x << ' '; // Output: 4 16 36
    }
}
