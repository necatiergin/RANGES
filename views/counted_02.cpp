#include <vector>
#include <ranges>
#include <iostream>
#include <algorithm>

// counted
// not pipelineable
// no counted_view type

int main()
{
	namespace rng = std::ranges;
	namespace vw = rng::views;

	std::vector vec{ 3, 1, 23, 4, 7, 9, 11, 2, 6, 5, 8, 0, 28 };
	rng::copy(vec, std::ostream_iterator<int>{std::cout, " "});
	std::cout << '\n';

	auto rv1 = vw::counted(vec.begin(), 3);
	rng::copy(rv1, std::ostream_iterator<int>{std::cout, " "});
	std::cout << '\n';

	auto rv2 = vw::counted(vec.begin() + 3, 4);
	rng::copy(rv2, std::ostream_iterator<int>{std::cout, " "});
	std::cout << '\n';

	auto rv3 = vw::counted(vec.rbegin(), 3);
	rng::copy(rv3, std::ostream_iterator<int>{std::cout, " "});
	std::cout << '\n';
}
