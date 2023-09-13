#include <vector>
#include <ranges>
#include <iostream>

int main()
{
	using namespace std;

	vector ivec{ 1, 2, 3, 4, 5, 15, 25, 40, 60 };

	//ranges::filter_view vw{ ivec, [](int x) { return x % 5 == 0; } }; //valid
	//auto vw = views::filter(ivec, [](int x) { return x % 5 == 0; }); //valid
	auto vw = ivec | views::filter([](int x) { return x % 5 == 0; }); //valid

	for (auto i : vw)
	{
		cout << i << " ";
	}
}
