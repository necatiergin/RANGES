#include <vector>
#include <string>
#include "nutility.h" //rfill, cprint
#include <ranges>

int main()
{
	std::vector<std::string> svec;
	rfill(svec, 300, random_name);
	cprint(svec);

	auto pred = [](const std::string& s) { return s.front() == s.back(); };

	for (const auto& s : svec | 
		std::views::filter(pred) | 
		std::views::take(10))  
	{
		std::cout << s << '\n';
	}
}
