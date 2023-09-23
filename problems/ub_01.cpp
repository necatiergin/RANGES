#include <ranges>
#include <vector>
#include <iostream>

auto get_values()
{
	std::vector ivec{ 1, 2, 3, 4, 5 };
	//...
	
	return ivec | std::views::drop(2); 
}


int main()
{
	auto rng = get_values();

	for (auto i : rng) { //??
		std::cout << i << ' ';
	}
}
