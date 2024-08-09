#include <iostream>
#include <ranges>
#include <vector>
#include <print>
#include <iterator>

int main()
{
	using namespace std;

	vector<int> ivec{ 9, 7, 3, 4, 1, 6, 7, 12, 78, 25 };

	//print("{}\n", ivec); //C++23
	ranges::copy(ivec, ostream_iterator<int>{cout, " "});
	cout << '\n';
	auto iter1 = ranges::min_element(ivec);
	cout << "min = " << *iter1 << "idx for min = " << iter1 - ivec.begin() << '\n';

	auto iter2 = ranges::min_element(vector{ 1,2,3,4,5 }); // vector{1,2,3,4,5} is rvalue expr.
	//cout << "min = " << *iter2 << " iter = " << iter1 - ivec.begin() << '\n'; // invalid => *iter2
}
