#include <list>
#include <string>
#include <ranges>
#include <iostream>

int main()
{
	using namespace std;

	list<string> slist{ "deniz", "yusuf", "huseyin", "mahir", "taylan" };

	for (auto s : views::reverse(slist) | views::take(3)) {
		cout << s << ' ';
	}
}
