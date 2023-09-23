#include <ranges>
#include <vector>
#include <iostream>

auto foo()
{
	return std::vector{ 2, 3, 5, 7, 11, 13} | std::views::drop(3); // OK
}

auto bar()
{
	std::vector ivec{ 2, 3, 5, 7, 11, 13 };
	
	return std::move(ivec) | std::views::take(3); // OK
}


int main()
{
	auto rn1 = foo();
	for (auto i : rn1)
		std::cout << i << ' ';

	std::cout << '\n';

	auto rn2 = bar();
	for (auto i : rn2)
		std::cout << i << ' ';

	std::cout << '\n';
}
