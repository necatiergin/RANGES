#include <vector>
#include <bitset>
#include <random>
#include <algorithm>
#include <iostream>

int main()
{
	std::vector<std::bitset<32>> bvec;
	std::mt19937 eng(std::random_device{}());

	for (int i{}; i < 500; ++i) {
		bvec.emplace_back(eng());
	}

	std::ranges::sort(bvec, {}, [](const std::bitset<32>& bs) { return bs.count(); });

	for (auto i : bvec)
		std::cout << i << '\n';
}
