#include <iostream>
#include <ranges>

int main()
{
	using namespace std;

	for (auto x : views::iota(10)
		| views::transform([](int x) { return x + 10; })
		| views::take(20))
		cout << x << ' '; // 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39
}
