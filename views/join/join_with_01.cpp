#include <vector>
#include <string>
#include <ranges>
#include <iostream>

int main()
{
	namespace vw = std::views;
	std::vector<std::string> svec{ "ali", "ayse", "deniz" ,"murat" };

	auto jv = svec | vw::join_with(',');

	for (auto c : jv)
		std::cout.put(c);
	
	std::cout << '\n';

	auto str = svec | vw::reverse | vw::join_with(',') | std::ranges::to<std::string>();

	std::cout << "str = " << str << '\n';
}
