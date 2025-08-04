#include <vector>
#include <string>
#include <ranges>
#include <iostream>

int main()
{
	namespace vw = std::views;
	std::string str = "necati";
	std::vector ivec = {2, 4, 7, 9, 3};

	auto v = vw::zip(str, ivec);

	for (auto r : v) {
		auto [c, i] = r;
		std::cout << '(' << c << ',' << i << ")\n";
	}
}
