#include <vector>
#include <ranges>
#include <iostream>
#include <list>

int main()
{
	std::vector ivec{ 2, 3, 5, 7, 11, 13 };

	std::ranges::subrange sbvec{ next(ivec.begin()), prev(ivec.end()) };
	constexpr bool b1 = std::ranges::sized_range<decltype(sbvec)>; //true

	std::cout << std::boolalpha << "b1 = " << b1 << '\n';
	std::list ilist{ 2, 3, 5, 7, 11, 13 };

	std::ranges::subrange sblist{ ilist.begin(), ilist.end(), ilist.size() };
	//std::ranges::subrange sblist{ next(ilist.begin()), prev(ilist.end()) };
	constexpr bool b2 = std::ranges::sized_range<decltype(sblist)>; //true
	std::cout << "b2 = " << b2 << '\n';
}
