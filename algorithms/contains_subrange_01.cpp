#include <vector>
#include <iostream>
#include <algorithm>

//C++23

int main()
{
	std::vector vec{ 2, 3, 5, 7, 9, 11, 13, 17, 19, 23, 29, 31 };
	boolalpha(std::cout);
	const std::vector v{ 11, 13, 17 };

	std::cout << rng::contains_subrange(vec, v) << '\n';
	std::cout << rng::contains_subrange(vec, auto({ 19, 23 })) << '\n';
	std::cout << rng::contains_subrange(vec, auto({ 5, 6, 7 })) << '\n';
}
