template<typename BegT, typename EndT>
void callAlgo(BegT beg, EndT end)
{
	auto v = std::views::common(std::ranges::subrange(beg, end));
	algo(v.begin(), v.end()); // assume algo() requires iterators with the same type
}
