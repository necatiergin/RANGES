#include<iostream>
#include<ranges>
#include<vector>
#include"nutility.h"


int main()
{
	using namespace std;

	vector ivec{ 81,45,45,55,52,65,21,87,14,90,82,35,94,120,245 };
	print(ivec);

	// Bunu yazmanın daha kolay yolu range adaptor kullanmak
	//ranges::take_view v{
	//ranges::transform_view{ ranges::filter_view(ivec, [](int x) {return x % 5 == 0; }), [](int x) { return x * x; }}, 5};	 

	// Range Adaptor kullanarak yazıldı
	auto v = views::take(
			 views::transform(
			 views::filter(ivec, [](int x) {return x % 5 == 0; }), [](int x) { return x * x; }), 5);
	 

	for (auto i : v)
	{
		std::cout << i << ' ';
	}
}
