#include <ranges>
#include <vector>
#include <list>
#include <span>
#include <string_view>

int main()
{
	namespace rng = std::ranges;

	//static_assert(rng::view<std::vector<int>>);
	//static_assert(rng::view<std::list<int>>);
	static_assert(rng::view<std::string_view>);
	static_assert(rng::view<std::span<int>>);
}
