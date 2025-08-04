#include <ranges>
#include <vector>
#include <iostream>

int main()
{
    std::vector source{ 1, 4, 7, 8, 6, 2, 5, 9, 4, 12};
    auto vf = source | std::views::filter([](int v) {
        return v % 2 == 0;
    });
    std::vector dest(vf.begin(), vf.end());
    for (auto i : dest)
        std::cout << i << ' ';
}
