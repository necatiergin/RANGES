#include <vector>
#include <bitset>
#include <random>
#include <algorithm>
#include <iostream>

int main()
{
	using namespace std;
	vector<bitset<32>> bvec;
	mt19937 eng(random_device{}());

	for (int i{}; i < 500; ++i)
	{
		bvec.emplace_back(eng());
	}

	ranges::sort(bvec, {}, [](const bitset<32>& bs) { return bs.count(); });

	for (auto i : bvec)
		std::cout << i << '\n';
}
