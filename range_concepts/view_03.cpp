#include <ranges>

struct my_view {
    //...
    int* begin() const;
    int* end() const;
};

template<>
inline constexpr bool std::ranges::enable_view<my_view> = true;

static_assert(std::ranges::view<my_view>); // holds
