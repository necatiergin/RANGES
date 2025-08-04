#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <ranges>

int main(void)
{
	using namespace std;

	vector<string> svec{ "murat", "mert", "gul",
		"nihat", "cevahir", "jale", "seyhan" };

	ranges::copy(svec, ostream_iterator<string>(cout, " "));
	std::cout << '\n';

	for (auto rn : std::views::pairwise(svec)) {
		//for (auto rn : std::views::adjacent<2>(svec)) { 
		static_assert(same_as<decltype(rn), tuple<string&, string &>>); //holds
		const auto& [x, y] = rn;
		cout << x << ' ' << y << '\n';
	}
}
