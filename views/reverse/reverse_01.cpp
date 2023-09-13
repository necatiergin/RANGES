#include <vector>
#include <ranges>
#include <iostream>

int main()
{
	std::vector ivec{ 3, 1, -3, 4, 7, 9, -1, 2, 6, 5, 8, 0, -4 };
	for (auto i : std::views::reverse(ivec)) {
		std::cout << i << ' ';
	}
	std::cout << '\n';
	// pipeline notation:
	for (auto i : ivec | std::views::reverse) { 
		std::cout << i << ' '; 
	} 
	std::cout << '\n';

	// a view variable:
	auto rv = std::views::reverse(ivec);
	//std::ranges::reverse_view rv = std::views::reverse(ivec);
	for (auto i : rv) {
		std::cout << i << ' '; 
	}
	std::cout << '\n';
}
