// ranges::to C++23

#include <ranges>
#include <vector>
#include <set>
#include <list>
#include <iostream>

int main()
{
	std::set<int> iset{ 2, 4, 5, 7, 8, 9};
	
	auto ivec = iset | std::ranges::to<std::vector>();
	
	auto ilist = ivec | std::ranges::to<std::list>();
	
	const auto print_container = [](const auto& c) {
		for (int i : c)
			std::cout << i;
		std::cout << '\n';
		};

	print_container(iset);
	print_container(ivec);
	print_container(ilist);
}



