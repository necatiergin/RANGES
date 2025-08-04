#include <ranges>

template< std::ranges::range R>
using borrowed_iterator_t = std::conditional_t<std::ranges::borrowed_range<R>,
    std::ranges::iterator_t<R>, std::ranges::dangling>;
