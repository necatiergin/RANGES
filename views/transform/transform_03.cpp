#include <iostream>
#include <ranges>
#include <vector>
#include "nutility.h"


int main()
{
	using namespace std;

	vector ivec{ 1,2,3,4,5,15,25,40,60 };

	auto vw = views::transform(views::filter(ivec, [](int x) {return x % 5 == 0; }), [](int x) { return x * x - 1; });
	
	for (auto i : vw)
	{
		std::cout << i << " "; // 24 224 624 1599 3599
	}
}
