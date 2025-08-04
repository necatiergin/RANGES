#include <vector>
#include <ranges>
#include <iostream>
#include <algorithm>

int main()
{
	using namespace std;

	vector ivec{ 81, 45, 56, 82, 52, 77, 21, 3, 14, 56, 82, 35, 94 };
	ranges::for_each(ivec, [](int i) {cout << i << ' '; });
	cout << '\n';

	for (auto i : ranges::take_view{ ivec, 5 }) {
		cout << i << ' ';
	}
}
