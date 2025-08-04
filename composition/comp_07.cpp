#include <list>
#include <string>
#include <ranges>
#include <iostream>

int main()
{
	std::list<std::string> slist{ "deniz", "yusuf", "huseyin", "mahir", "taylan" };

	for (auto s : std::views::reverse(slist) | std::views::take(3)) {
		std::cout << s << ' ';
	}
}
