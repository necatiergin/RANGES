//C++ 23

#include <vector>
#include <ranges>
#include <iostream>

int main() 
{
	std::vector ivec{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37 };

	auto destvec = ivec | std::views::filter([](int x) {return x > 10 && x < 20; })
		| std::views::transform([](int x) {return x * 10; })
		| std::ranges::to<std::vector<>>();

	for (auto val : destvec)
		std::cout << val << ' ';

}
