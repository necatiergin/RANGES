#include <iostream>
#include <ranges>

int main()
{
	auto v = std::views::iota(10, 14);
	for (auto i : v)
		std::cout << i << ' '; 
}


