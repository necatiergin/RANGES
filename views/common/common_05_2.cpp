#include <vector>
#include <ranges>
#include <numeric>
#include <iostream>

int main()
{
    std::vector ivec{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    
    auto rng = ivec | std::views::take_while([](int x) {return x % 20;});

    //auto sum = std::accumulate(rng.begin(), rng.end(), 0); //error
    static_assert(std::ranges::common_range<decltype(rng)>); //fails
    //...
}
