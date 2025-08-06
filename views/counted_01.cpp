#include <vector>
#include <ranges>
#include <iostream>
#include <algorithm>

// counted
// not pipelineable
// no counted_view type

int main()
{
	std::vector vec{ 3, 1, 23, 4, 7, 9, 11, 2, 6, 5, 8, 0, 28 };

	std::ranges::copy(vec, std::ostream_iterator<int>{std::cout, " "});
	std::cout << '\n';
	int n;

	std::cout << "enter number of elements : ";
	std::cin >> n;

	for (auto i : std::ranges::views::counted(vec.begin(), n))
		std::cout << i << ' ';

	std::cout << '\n';
}
