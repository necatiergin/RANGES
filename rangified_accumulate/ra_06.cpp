#include <vector>
#include <iostream>

template<std::input_iterator Iter, std::sentinel_for<Iter> Sentinel, typename Init = std::iter_value_t<Iter>, typename Op = std::plus<>>
Init Accumulate(Iter beg, Sentinel end, Init init = Init{}, Op op = {})
{
	while (beg != end)
	{
		init = std::invoke(op, std::move(init), *beg);
		++beg;
	}
	return init;
}

int main()
{
	std::vector vec {2, 5, 7, 9, -1, 8, -4, 3, -6};

	std::cout << Accumulate(vec.begin(), vec.end(), 0);
}
