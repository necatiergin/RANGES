#include <vector>
#include <ranges>
#include <iostream>

int main()
{
	using namespace std;

	vector vec{ 3, 1, 23, 4, 7, 9, 11, 2, 6, 5, 8, 0, 28};
	for (auto rng : views::chunk(vec, 2)) {
		cout << "[ ";
		for (int i : rng) {
			cout << i << ' ';
		}
		cout <<	"] ";
	}
}
