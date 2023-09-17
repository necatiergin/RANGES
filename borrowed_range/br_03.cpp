//source : cppreference.com
// https://en.cppreference.com/w/cpp/ranges/borrowed_range

#include <algorithm>
#include <array>
#include <cstddef>
#include <iostream>
#include <ranges>
#include <span>
#include <type_traits>

template <typename T, std::size_t N>
struct MyRange : std::array<T, N> { };

template <typename T, std::size_t N>
inline constexpr bool std::ranges::enable_borrowed_range<MyRange<T, N>> = false;

template <typename T, std::size_t N>
struct MyBorrowedRange : std::span<T, N> { };

template <typename T, std::size_t N>
inline constexpr bool std::ranges::enable_borrowed_range<MyBorrowedRange<T, N>> = true;

int main()
{
    static_assert(std::ranges::range<MyRange<int, 8>>);
    static_assert(std::ranges::borrowed_range<MyRange<int, 8>> == false);
    static_assert(std::ranges::range<MyBorrowedRange<int, 8>>);
    static_assert(std::ranges::borrowed_range<MyBorrowedRange<int, 8>> == true);

    auto getMyRangeByValue = [] { return MyRange<int, 4>{ {1, 2, 42, 3} }; };
    auto dangling_iter = std::ranges::max_element(getMyRangeByValue());
    static_assert(std::is_same_v<std::ranges::dangling, decltype(dangling_iter)>);
    //  *dangling_iter; // compilation error (i.e. dangling protection works.)

    auto my = MyRange<int, 4>{ {1, 2, 42, 3} };
    auto valid_iter = std::ranges::max_element(my);
    std::cout << *valid_iter << ' '; // OK: 42

    auto getMyBorrowedRangeByValue = [] {
        static int sa[4]{ 1, 2, 42, 3 };
        return MyBorrowedRange<int, std::size(sa)>{sa};
        };
    auto valid_iter2 = std::ranges::max_element(getMyBorrowedRangeByValue());
    std::cout << *valid_iter2 << '\n'; // OK: 42
}
