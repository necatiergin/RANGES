#include <ranges>
#include <vector>
#include <iostream>

int main()
{
	auto source = std::views::iota(10) | std::views::take(20) |
	std::views::filter([](int v) {
	    return v % 2 == 0;
	    });
	//std::vector<int> dest(source.begin(), source.end()); //not common range
	std::vector<int> dest;
	std::ranges::copy(source, std::back_inserter(dest));
	
	for (auto i : dest)
		std::cout << i << ' ';
}
