#include <ranges>
#include <vector>

namespace vw = std::views;
std::vector<int> ivec(10);
//using type = decltype(ivec | vw::filter([](int x) {return x % 2 == 0; }));
//using type = decltype(ivec | vw::reverse);
//using type = decltype(ivec | vw::take(5));
//using type = decltype(ivec | vw::take_while([](int) {return true; }));

int main()
{
	namespace rng = std::ranges;

	static_assert(rng::range<type>); 
	static_assert(rng::input_range<type>); 
	static_assert(rng::forward_range<type>); 
	static_assert(rng::bidirectional_range<type>); 
	static_assert(rng::random_access_range<type>); 
	static_assert(rng::contiguous_range<type>); 
	static_assert(rng::sized_range<type>); 
}
