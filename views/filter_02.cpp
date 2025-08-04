#include <vector>
#include <ranges>
#include <iostream>

int main()
{
	std::vector ivec{ 1, 2, 3, 4, 5, 15, 25, 40, 60 };

	//std::ranges::filter_view vw{ ivec, [](int x) { return x % 5 == 0; } }; //valid
	//auto vw = std::views::filter(ivec, [](int x) { return x % 5 == 0; }); //valid
	auto vw = ivec | std::views::filter([](int x) { return x % 5 == 0; }); //valid

	for (auto i : vw)
	{
		std::cout << i << " ";
	}
}
