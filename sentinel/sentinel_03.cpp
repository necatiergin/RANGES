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

	vector ivec{12, 5, 218, 9, 3, 24, -1, 9, 41, 6}; //

	auto iter1 = ranges::find( ivec.begin(), EndValue<-1>{}, 9 );
	auto iter2 = ranges::find( ivec.begin(), EndValue<-1>{}, 41 );

	std::cout << distance(ivec.begin(), iter1) << '\n'; // index 3 
	std::cout << distance(ivec.begin(), iter2) << '\n'; // index 6. -1 index
}
