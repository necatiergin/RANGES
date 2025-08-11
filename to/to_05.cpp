#include <ranges>
#include <vector>
#include <iostream>

int main() {
    std::vector vec{ 1, 2, 3, 4 };

    auto result = vec
        | std::views::transform([](int x) { return x * x; })
        | std::ranges::to<std::vector>();

    for (int x : result)
        std::cout << x << " ";
}
