#include <ranges>

class RefStr{
	//...
};

template <>
inline constexpr bool std::ranges::enable_borrowed_range<RefStr> = true;
