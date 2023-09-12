#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector ivec{ 12, 5, 218, 9, 3, 24, -1, -9, -41, 6 };
//				     ------------projection----------
	std::ranges::sort(ivec, {}, [](int x) { return std::abs(x); });

	for (auto i : ivec)
		std::cout << i << ' '; 	// -1 3 5 6 9 -9 12 24 -41 218
}
