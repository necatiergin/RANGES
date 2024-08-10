#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <ranges>

int main()
{
	std::vector<int> vsource = { 2, 7, 8, 5, 6, 4, 1, 3, 9, 0, 12, 17, 13};
	
	auto vdest = vsource 
		| std::views::filter([](int i) {return i % 2 == 0; })
		| std::views::transform([](int i) {return i * i; });

	for (auto i : vdest) 
		std::cout << i << ' ';
}
