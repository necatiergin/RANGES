#include <iostream>
#include <ranges>
#include <vector>
#include "nutility.h"

int main()
{
	using namespace std;

	vector<int> ivec;
	generate_n(back_inserter(ivec), 20, Irand(0, 25));

	print(ivec);

	auto iter1 = ranges::min_element(ivec);
	cout << "min = " << *iter1 << " iter = " << iter1 - ivec.begin() << '\n';

	auto iter2 = ranges::min_element(vector{ 1,2,3,4,5 }); // vector{1,2,3,4,5} is rvalue expr.
	cout << "min = " << *iter2 << " iter = " << iter1 - ivec.begin() << '\n'; // invalid => *iter2
}
