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
	std::vector<int> ivec(20);
	ivec[5] = -1;

	std::ranges::subrange sr(ivec.begin(), Sentinel<-1>());
	//static_assert(std::ranges::common_range<decltype(sr)>); //fails
	auto cv = std::views::common(sr);
	//auto cv2 = sr | std::views::common;
	auto cnt = count(cv.begin(), cv.end(), 0);
	std::cout << "cnt = " << cnt << '\n';
}
