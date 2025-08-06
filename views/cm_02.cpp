#include <ranges>
#include <vector>

int main()
{
	std::vector vec{ 1, 4, 7, 9 };

	auto v1 = std::views::iota(20);
	auto v2 = std::views::zip(v1, vec);

	static_assert(std::ranges::common_range<decltype(vec)>);
	static_assert(std::ranges::common_range<decltype(v1)>);
	static_assert(std::ranges::common_range<decltype(v2)>);
}
