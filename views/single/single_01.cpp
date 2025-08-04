#include <ranges>
#include <iostream>

int main() 
{
    auto v = std::views::single(42);
    for (int x : v)
        std::cout << x << '\n';  
}
