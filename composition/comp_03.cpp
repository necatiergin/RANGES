#include <vector>
#include <ranges>
#include <iostream>

int main()
{
	using namespace std;

	vector ivec{81, 45, 45, 55, 52, 65, 21, 87, 14, 90, 82, 35, 94, 120, 245};

	auto v = views::take(views::filter(ivec, [](int x) { return x % 5 == 0; }), 5);

	for (auto i : v)
		cout << i << ' '; // 45 45 55 65 90
}
