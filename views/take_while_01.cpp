#include <iostream>
#include <ranges>
#include <vector>

int main()
{
	std::vector ivec{40, 25, 96, 74, 51, 14, 58, 69, 78 };

	std::cout << "Degeri girin : "; // 15
	int ival;
	std::cin >> ival;

	for (auto i : ivec | std::views::take_while([ival](int x) { return x > ival; })) {
		std::cout << i << ' ';	//40 25 96 74 51
	}
}
