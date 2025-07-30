#include <iostream>
#include <ranges>

int main() 
{
    auto v = std::views::iota(1)
        | std::views::filter([](int n) { return n % 3 == 0; })
        | std::views::take(5)
        | std::views::transform([](int x) {return x * x / 2; });

    for (int x : v) {
        std::cout << x << ' '; 
    }
}
