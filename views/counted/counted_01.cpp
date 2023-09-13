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
	int n;

	cout << "enter number of elements : ";
	cin >> n;

	for (auto i : ranges::views::counted(vec.begin(), n))
		cout << i << ' ';

	cout << '\n';
}
