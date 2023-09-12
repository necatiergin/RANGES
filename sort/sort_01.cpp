#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector ivec{ 12, 5, 218, 9, 3, 24, -1, -9, -41, 6 };

	std::ranges::sort(ivec);

	for (auto i : ivec)
		std::cout << i << ' ';		// -41 -9 -1 3 5 6 9 12 24 218
}
