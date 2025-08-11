#include <ranges>
#include <vector>
#include <iostream>

int main() 
{
    std::vector vec{ 2, 5, 8, 9 };

    auto it = std::ranges::find(std::move(vec), 3);
    static_assert(std::is_same_v<decltype(it), std::ranges::dangling>);   // holds

    std::cout << *it << '\n';  //error
}
