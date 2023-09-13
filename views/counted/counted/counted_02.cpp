#include <vector>
#include <ranges>
#include <iostream>
#include <algorithm>

// counted
// not pipelineable
// no counted_view type

int main()
{
	using namespace std;

	std::vector vec{ 3, 1, 23, 4, 7, 9, 11, 2, 6, 5, 8, 0, 28};
	ranges::copy(vec, ostream_iterator<int>{cout, " "});
	cout << '\n';

	auto rv1 = ranges::views::counted(vec.begin(), 3);
	ranges::copy(rv1, ostream_iterator<int>{cout, " "});
	cout << '\n';

	auto rv2 = ranges::views::counted(vec.begin() + 3, 4);
	ranges::copy(rv2, ostream_iterator<int>{cout, " "});
	cout << '\n';

	auto rv3 = ranges::views::counted(vec.rbegin(), 3);
	ranges::copy(rv3, ostream_iterator<int>{cout, " "});
	cout << '\n';
}
