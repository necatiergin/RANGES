#include <ranges>
#include <iostream>

//C++23
int main()
{
	using namespace std;

	for (auto i : views::repeat(5, 7))
		std::cout << i;

	cout << '\n';

	for (auto i : views::repeat('A') | views::take(4))
		std::cout << i;

	cout << '\n';
}
