#include <vector>
#include <string>
#include "nutility.h" //rfill, print
#include <ranges>

int main()
{
	using namespace std;

	vector<string> svec;
	rfill(svec, 300, rname);
	print(svec);

	auto pred = [](const std::string& s) { return s.front() == s.back(); };

	for (const auto& s : svec | views::filter(pred) | views::take(10))  // take ilk 10 taneyi alıyor
	{
		cout << s << '\n';
	}
}
