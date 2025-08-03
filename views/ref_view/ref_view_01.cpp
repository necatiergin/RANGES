#include <vector>
#include <ranges>
#include <iostream>

int main() 
{
    std::vector<int> vec = { 10, 20, 30, 40 ,50 };

    auto v = std::views::all(vec);  
    static_assert(std::same_as<decltype(v), std::ranges::ref_view<std::vector<int>>>);

    for (int x : v)
        std::cout << x << ' ';
}
