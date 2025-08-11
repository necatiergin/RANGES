namespace std::ranges {
	template<template<typename...> typename C, typename R>
		requires /* conditions */
	constexpr auto to(R&& r);
}
