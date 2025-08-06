template<typename Iter, typename Sentinel>
void callAlgo(Iter beg, Sentinel end)
{
	auto v = std::views::common(std::ranges::subrange(beg, end));
	algo(v.begin(), v.end()); // assume algo() requires iterators with the same type
}
