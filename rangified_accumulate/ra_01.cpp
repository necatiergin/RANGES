#include <vector>
#include <iostream>

template<typename Iter, typename Init>
Init Accumulate(Iter beg, Iter end, Init init)
{
	while (beg != end)
		init = std::move(init) + *beg++;

	return init;
}

int main()
{
	std::vector vec {2, 5, 7, 9, -1, 8, -4, 3, -6};

	std::cout << Accumulate(vec.begin(), vec.end(), 0);
}
