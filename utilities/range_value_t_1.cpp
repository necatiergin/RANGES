#include <ranges>
#include <vector>
#include <iostream>

int main() 
{
    std::vector vec = { 1, 2, 3 };
    auto view = vec | std::views::transform([](int x) { return x + 0.5; });

    using T = std::ranges::range_value_t<decltype(view)>;
    static_assert(std::same_as<T, double>);
}
