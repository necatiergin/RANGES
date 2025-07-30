#include <vector>
#include <ranges>
#include <iostream>
#include <string>

void print(const std::ranges::input_range auto& con)
{
	for (const auto& elem : con)
		std::cout << elem << ' ';

	std::cout << '\n';
}

int main()
{
	std::vector<int> ivec{ 2, 5, 8, 3, 7, 9, 4, 1, 13};

	print(ivec |  std::views::take(4) 
		       | std::views::transform([](auto x) {return '[' + std::to_string(x) + ']'; }));
}
