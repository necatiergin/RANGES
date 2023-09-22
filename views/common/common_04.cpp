#include <ranges>
#include <vector>
#include <algorithm>
#include <iostream>

template <auto ENDVAL>
struct Sentinel {
	bool operator==(auto pos)const
	{
		return *pos == ENDVAL;
	}
};

int main()
{
	using namespace std;
	
	vector<int> ivec(20);
	ivec[5] = -1;

	ranges::subrange sr(ivec.begin(), Sentinel<-1>());
	auto cv = views::common(sr);
	auto cnt = count(cv.begin(), cv.end(), 0);
	cout << "cnt = " << cnt << '\n';
}
