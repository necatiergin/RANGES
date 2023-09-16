#include <vector>
#include <ranges>
#include <iostream>
#include <format>

template <auto ENDVAL>
class Sentinel {
public:
	bool operator==(auto x)const
	{
		return *x == ENDVAL;
	}
};

int main()
{
	using namespace std;
	vector<int> ivec{ 1, 3, 5, 7, 2, 9 };
	ranges::subrange sb(ivec.begin(), Sentinel<13>{});
	
	for (auto val : sb) {
		std::cout << val;
	}

	//std::cout << format("{}\n", sb); //C++23
}
