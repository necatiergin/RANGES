/*
views::common(rng)

Geri dönüş türü

    a) rng begin ve end fonksiyonlarının geri dönüş değeri aynı türden olan bir view ise
	rng'nin türü
	b) rng begin ve end fonksiyonları türü aynı türden olan bir bir range ise 
	std::ranges::ref_view
	c) common_view
*/

#include <list>
#include <ranges>
#include <iostream>

int main()
{
	std::list<int> mylist(10);
	auto mytake = std::views::take(mylist, 4);
	auto myiota = std::views::iota(35, 45);

	auto x = std::views::common(mylist); //x is a ref_view
	auto y = std::views::common(mytake); //y is a common_view
	auto z = std::views::common(myiota); //z is a iota_view
}
