#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <ranges>
#include <iostream>

int main()
{
	using namespace std;

	vector<int> ivec(100);
	iota(ivec.begin(), ivec.end(), 0);
	mt19937 eng{ random_device{}() };
	shuffle(ivec.begin(), ivec.end(), eng);

	//auto iter = ranges::find(ivec, 67);
	auto iter = ranges::find(ivec.begin(), unreachable_sentinel, 56);

	cout << iter - ivec.begin();
}
