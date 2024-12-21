#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <ranges>

int main()
{
    using namespace std;

    vector source = { 4, 3, 6, 2, 12, 7, 9, 24, 15, 7, 21 };
    auto v = source
        | views::filter([](const int n) {return n % 3 == 0; })
        | views::transform([](const int n) {return n * n; })
        | ranges::to<vector>();

    for (auto i : v)
        cout << i << ' ';
}
