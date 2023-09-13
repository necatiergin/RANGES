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

void print(std::ranges::range auto &&r)
{
	for (const auto& val : r)
		std::cout << val << ' ';
	std::cout << '\n';
}

int main()
{
	using namespace std;

	auto vw = ranges::iota_view{ 0, 10 };
	vector vec(vw.begin(), vw.begin() + 10);

	ranges::subrange s1{ vec.begin(), vec.begin() + 7};
	ranges::subrange s2{ vec.begin(), Sentinel<5>{} };
	print(s1);
	print(s2);
}
