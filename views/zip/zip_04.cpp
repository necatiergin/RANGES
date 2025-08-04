#include <vector>
#include <string>
#include <ranges>
#include <iostream>

int main()
{
	using namespace std;

	vector<string> months{ "jan", "feb", "mar" ,"apr", "may", "jun", "jul", "aug", "sep" ,"oct" ,"dec" };

	for (const auto &[idx, mon] : views::zip(views::iota(1), months))
		cout << idx << ' ' << mon << '\n';
}
