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

	for (const auto& s : views::transform(svec, [](const auto& s) { return s + "can"; }))
		cout << s << '\n'; // dolasirken isimlerin sonuna 'can' eklendi.
}
