#include <vector>
#include <ranges>
#include <iostream>

int main()
{
	std::vector ivec{ 1, 2, 3, 4, 5, 15, 25, 40, 60 };

	for (auto i : std::views::drop(ivec, 5)) {
		std::cout << i << ' ';  //15 25 40 60
	}
}
