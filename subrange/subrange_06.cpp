// source: stackoverflow

#include <ranges>

template <std::ranges::random_access_range Range>
auto left_half(Range r) 
{
    return std::ranges::subrange(std::begin(r), std::begin(r) + std::ranges::size(r) / 2);
}

template <std::ranges::random_access_range Range>
auto right_half(Range r) 
{
    return std::ranges::subrange(std::begin(r) + std::ranges::size(r) / 2, std::end(r));
}

