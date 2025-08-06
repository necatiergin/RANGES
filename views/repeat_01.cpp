#include <ranges>
#include <iostream>

//C++23
int main()
{
	namespace vw = std::views;

	for (auto i : vw::repeat(5, 7))
		std::cout << i;

	std::cout << '\n';

	for (auto i : vw::repeat('A') | vw::take(4))
		std::cout << i;

	std::cout << '\n';
}
