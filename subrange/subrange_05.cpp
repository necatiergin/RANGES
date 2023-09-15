#include <ranges>

// The type of subranges depends only on the type of the iterators
// (and whether or not size() is provided).
// source : C++20 - Jossutis

int main()
{
	int ar1[20]{};
	int ar2[20]{};

	using sbr_type1 = decltype(std::ranges::subrange{ ar1 });
	using sbr_type2 = decltype(std::ranges::subrange{ ar2 });
	static_assert(std::same_as<sbr_type1, sbr_type2>);
}

