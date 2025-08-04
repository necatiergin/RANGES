#include <vector>
#include <ranges>
#include <iostream>

int main()
{
	namespace vw = std::views;
	std::vector ivec{ 2, 5, 1, 4, 1, 2, 9, 8, 7, 1, 5, 6 };	

	auto rg = ivec | vw::reverse | vw::split(1);

	for (auto sub : rg) {
		for (auto i : sub)
			std::cout << i;
		std::cout << '\n';
	}
}

