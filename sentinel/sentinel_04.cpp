#include <string>
#include <algorithm>
#include <ranges>
#include <iostream>

struct nullchar_t {
	bool operator==(auto pos)const
	{
		return *pos == '\0';
	}
};

inline constexpr nullchar_t nullchar;

int main()
{
	const char* p = "biz bugun range kutuphanesini ogreniyoruz";

	//for (auto ptr{ p }; ptr != nullchar_t{}; ++ptr)
	for (auto ptr{ p }; ptr != nullchar; ++ptr)
		std::cout << *ptr << ' ';

	std::cout << "\n";

	std::ranges::for_each(p, nullchar, [](char c) {std::cout.put(c); });
};
