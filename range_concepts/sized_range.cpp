//source:  cppreference.com
// https://en.cppreference.com/w/cpp/ranges/sized_range

#include <forward_list>
#include <list>
#include <ranges>
 
static_assert
(
    std::ranges::sized_range<std::list<int>> and
    not std::ranges::sized_range<std::forward_list<int>>
);
