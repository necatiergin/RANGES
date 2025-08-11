#include <ranges>
#include <vector>
#include <type_traits>
#include <iostream>

namespace rng = std::ranges;
namespace vw = std::views;

int main() 
{
    std::vector<int> v{ 1,2,3,4,5 };

    auto it0 = rng::find(v | vw::filter([](int x) {return x % 2; }), 3);
    static_assert(std::is_same_v<decltype(it0), rng::dangling>);

    auto odd = v | vw::filter([](int x) {return x % 2; });
    auto it1 = rng::find(odd, 3);
    static_assert(!std::is_same_v<decltype(it1), rng::dangling>);
    std::cout << *it1 << '\n'; // 3
}
