#include <iostream>
#include <list>
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
	std::list ilist{ 2, 3, 5, 7, 11, 13};
	auto v = ilist | std::views::drop(3);
	print_range(v); // 
	ilist.push_front(-1); // 
	print_range(v); 
}
