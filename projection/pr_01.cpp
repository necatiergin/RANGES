#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
	std::vector vec{ 2, -5, 7, 5, 9, -5, 6, 5 };

	std::cout << std::ranges::count(vec, 5) << '\n';
	std::cout << std::ranges::count(vec, 5, {}) << '\n';
	std::cout << std::ranges::count(vec, 5, [](int x) {return std::abs(x); }) << '\n';
}
