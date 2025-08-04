#include <vector>
#include <string>
#include <ranges>
#include <iostream>

int main()
{
	std::vector<std::string> svec{ "ali", "mert", "can", "zeynep", "melike", "aykut", "necati", "tamer", "emre", "ahmet" };

	char c;

	std::cout << "icinde hangi karakter olanlar: ";
	std::cin >> c;

	for (const auto& s : std::views::filter(svec, [c](const auto& s) { return s.contains(c); }))
		std::cout << s << ' '; 
}
