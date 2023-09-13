#include <list>
#include <string>
#include "nutility.h" //rfill, print
#include <iostream>
#include <ranges>
#include <iomanip> //quoted

int main()
{
	using namespace std;

	list<string> slist;

	rfill(slist, 20, rname); 
	print(slist); 
	size_t len;
	cout << "enter name length: ";
	cin >> len;

	auto v = views::drop_while(slist,
		[len](const string& s) {return s.size() > len; });
	ranges::for_each(v,
		[](const auto& s) {cout << quoted(s) << " "; });
}
