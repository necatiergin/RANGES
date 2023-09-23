#include <iostream>
#include <vector>
#include <ranges>

namespace vw = std::views;

void print_range(std::ranges::input_range auto&& rng)
{
	for (const auto& val : rng)
		std::cout << val << ' ';
	
	std::cout << '\n';
}

int main()
{
	std::vector ivec{ 2, 3, 5, 1, 2, 8, 7};
	auto bt3 = [](auto i) { return i > 3; };
	auto v = ivec | std::views::filter(bt3);
	print_range(v); 
	++ivec[1];
	ivec [2] = 0; 
	print_range(v); 
}
