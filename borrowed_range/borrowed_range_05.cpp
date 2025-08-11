#include <ranges>
#include <vector>
#include <span>
#include <string_view>

using std::ranges::borrowed_range;

static_assert(borrowed_range<std::vector<int>&>);             // lvalue → borrowed
static_assert(not borrowed_range<std::vector<int>>);          // rvalue → non-borrowed
static_assert(borrowed_range<std::span<int>>);                // enable_borrowed_range ==> true
static_assert(borrowed_range<std::string_view>);              // enable_borrowed_range ==> true
