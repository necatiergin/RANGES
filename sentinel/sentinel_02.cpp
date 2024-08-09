#include <iostream>
#include <vector>
#include <algorithm>


template<auto EndVal>
struct EndValue
{
	constexpr bool operator==(auto pos)const
	{
		return *pos == EndVal;
	}
};


int main()
{
	using namespace std;

	vector ivec{12, 59, 78, 96, 46, -1, 123, 74, 63, 71 };

	ranges::sort(ivec.begin(), EndValue<-1>{});

	for (auto i : ivec)
		cout << i << ' ';    // output : 12 46 59 78 96 -1 123 74 63 71      sorted until -1
}
