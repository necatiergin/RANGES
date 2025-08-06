#include <vector>
#include <ranges>
#include <deque>
#include <list>

int main()
{
	std::vector vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto veciter4 = std::ranges::find(vec, 5);
	auto v1 = std::views::counted(veciter4, 3); 
	std::deque dq{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto deqiter5 = std::ranges::find(dq, 5);
	auto v2 = std::views::counted(deqiter5, 3); 
	std::list<int> lst{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto lstiter3= std::ranges::find(lst, 3);
	auto v3 = std::views::counted(lstiter3, 3); 
}
