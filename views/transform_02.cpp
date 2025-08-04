#include <vector>
#include <string>
#include "nutility.h" //rfill, print
#include <ranges>


int main()
{
	using namespace std;

	vector<string> svec;
	rfill(svec, 30, rname);
	print(svec);

	auto v = views::transform(svec, [](const auto& s) { return s.length(); });

	//cout << typeid(*v.begin()).name() << '\n';

	for (auto len : v)
		cout << len << ' ';
}
