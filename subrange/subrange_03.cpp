#include <ranges>
#include <vector>
#include <iostream>

template <auto ENDVAL>
struct Sentinel {
	bool operator==(const auto x)const
	{
		return *x == ENDVAL;
	}
};

void print_range(std::ranges::range auto&& r)
{
	for (const auto& val : r)
		std::cout << val << ' ';
	std::cout << '\n';
}

int main()
{
	auto vw = std::ranges::iota_view{ 0, 10 };
	std::vector vec(vw.begin(), vw.begin() + 10);

	std::ranges::subrange sr1{ vec.begin(), vec.begin() + 7 };
	std::ranges::subrange sr2{ vec.begin(), Sentinel<5>{} };
	print_range(sr1);
	print_range(sr2);
}
