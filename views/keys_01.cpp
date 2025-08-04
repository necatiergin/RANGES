#include <utility>
#include <string>
#include <vector>
#include <ranges>
#include <iostream>

using name_age = std::pair<std::string, int>;
using name_age_vec = std::vector<name_age>;

int main()
{
	name_age_vec v = { {"ali", 19},
		{"eda", 32},
		{"nur", 54},
		{"tan", 40},
		{"cem", 11},
		{"nil", 20},
	};

	for (const auto& name : std::views::keys(v))
		std::cout << name << ' ';

	std::cout << '\n';

	for (auto age : std::views::values(v))
		std::cout << age << ' ';
	
	std::cout << '\n';
}
