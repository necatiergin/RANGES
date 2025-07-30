#include <ranges>
#include <string>
#include <iostream>

int main()
{
	auto v = std::views::iota(1, 100)
		| std::views::filter([](auto x) {return x % 4 == 0; })
		| std::views::drop(5)
		| std::views::take(7)
		| std::views::transform([](auto x) {return '[' + std::to_string(x) + ']'; });

	for (const auto& x : v)
		std::cout << x << " ";
}
