#include <vector>
#include <ranges>
#include <list>

int main()
{
	std::vector ivec{ 2, 3, 5, 7, 9, 11, 13, 17, 19, 23, 29, 31 };
	std::list ilist{ 2, 3, 5, 7, 9, 11, 13, 17, 19, 23, 29, 31 };
	auto rng1 = std::views::counted(ivec.begin(), 5);
	//rng1 is a span
	auto rng2 = std::views::counted(ilist.begin(), 5);
	//rng is a subrange
}
