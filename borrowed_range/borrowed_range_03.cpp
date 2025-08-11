#include <ranges>
#include <vector>
#include <type_traits>
#include <iostream>

int main() 
{
    auto it = std::ranges::find(std::vector<int>{1, 2, 3, 4}, 3);
    static_assert(std::is_same_v<decltype(it), std::ranges::dangling>);   // holds

    std::cout << *it << '\n';  //error
}
