#include <list>
#include <string>
#include "nutility.h" 
#include <iostream>
#include <ranges>
#include <iomanip> //quoted

int main()
{
	std::list<std::string> slist;
	rfill(slist, 20, random_name);
	cprint(slist);
	std::size_t len;
	std::cout << "enter name length: ";
	std::cin >> len;

	auto v = std::views::drop_while(slist,
		[len](const std::string& s) {return s.size() > len; });

	std::ranges::for_each(v,
		[](const auto& s) {std::cout << std::quoted(s) << " "; });
}
