#include <vector>
#include <tuple>
#include <bitset>
#include <string>
#include <ranges>
#include <iostream>


int main()
{
	namespace vw = std::views;
	std::vector<std::tuple<int, std::string, std::bitset<16>>> vec{
		{12, "ali", 567u},
		{33, "ceyhun", 87234u},
		{45, "zeynep", 192345u},
	};

	auto ivec = vec | vw::elements<0> | std::ranges::to<std::vector>();
	auto svec = vec | vw::elements<1> | std::ranges::to<std::vector>();
	auto bvec = vec | vw::elements<2> | std::ranges::to<std::vector>();
	
}
