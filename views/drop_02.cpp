#include <iostream>
#include <ranges>
#include <vector>
#include <algorithm>

int main()
{
	std::vector ivec{ 40, 25, 2, 96, 74, 51, 14, 58, 69, 3, 6, 78 };
	std::ranges::sort(std::ranges::views::drop(ivec, 5));

	std::ranges::copy(ivec, std::ostream_iterator<int>{std::cout, " "});
}
