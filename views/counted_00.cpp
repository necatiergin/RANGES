#include <iostream>
#include <ranges>

void foo(const int* data, std::size_t size)
{
	auto view = std::views::counted(data, size);
	// ...
}

