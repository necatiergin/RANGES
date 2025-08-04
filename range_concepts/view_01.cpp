#include <ranges>

template<typename T>
concept myview =
std::ranges::range<T> &&
std::movable<T> && std::ranges::enable_view<T>;
