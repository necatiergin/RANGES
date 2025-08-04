#include <vector>
#include <ranges>
#include <iostream>
#include <format>

int main()
{
	std::vector ivec{ 1, 2, 3, 4, 5 };

	std::ranges::subrange sr1{ ivec }; // CTAD

	//subrange is a view
	std::cout << "sizeof(sr1) = " << sizeof(sr1) << '\n';
	static_assert(std::ranges::view<decltype(sr1)>);

	auto& r1 = sr1.front(); //valid
	auto& r2 = sr1.back(); //valid

	std::cout << r1 << ' ' << r2 << '\n';

	std::ranges::subrange sr2{ ivec.begin(), ivec.end() };

	for (const auto i : sr2)
		std::cout << i << ' '; //1,2,3,4,5 

	std::cout << std::format("\n{}\n{}\n", sr1, sr2); //C++23
}

