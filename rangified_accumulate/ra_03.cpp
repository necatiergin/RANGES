#include <vector>
#include <iostream>

template<typename Iter, typename Sentinel, typename Init, typename Op = std::plus<>>
	requires std::input_iterator<Iter> && std::sentinel_for<Iter, Sentinel> //requires clause
Init Accumulate(Iter beg, Sentinel end, Init init, Op op = {})
{
	while (beg != end)
	{
		init = op(std::move(init), *beg);
		++beg;
	}
	return init;
}


int main()
{
	std::vector vec {2, 5, 7, 9, -1, 8, -4, 3, -6};

	std::cout << Accumulate(vec.begin(), vec.end(), 0);
}
