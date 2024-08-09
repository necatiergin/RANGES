#include <vector>
#include <iostream>
#include <algorithm>
#include <ranges>

int main()
{
	namespace rng = std::ranges;

	std::vector vec{ 2, 3, 5, 7, 9, 11, 13, 17, 19, 23, 29, 31 };
	boolalpha(std::cout);
	std::cout << rng::contains(vec, 9) << '\n';
	std::cout << rng::contains(vec, 24) << '\n';
}
