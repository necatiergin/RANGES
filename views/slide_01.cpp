#include <ranges>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>

int main(void)
{
	using namespace std;

	vector<string> svec{ "murat", "mert", "gul",
		"nihat", "cevahir", "jale", "seyhan" };
	
	ranges::copy(svec, ostream_iterator<string>(cout, " "));
	std::cout << '\n';

	for (auto rn : std::views::slide(svec, 3)) { 
		for (const auto& s : rn) {
			cout << s << " ";
		}
		cout << '\n';		
	}
}
