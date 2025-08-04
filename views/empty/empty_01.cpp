#include <ranges>
#include <iostream>

int main() 
{
    auto v = std::views::empty<int>;
    std::cout << "Size: " << std::ranges::distance(v) << '\n';  
}
