#include <vector>
#include <ranges>
#include <iostream>

int main()
{
	std::vector vec{ 1, 3, 7, 9, 4, 6, 5, 2 };

	for (std::counted_iterator iter{ vec.begin(), 5 }; iter != std::default_sentinel; ++iter) {
		std::cout << *iter << ' ';
	}
}


