namespace std {
	template<std::input_or_output_iterator I>
	class counted_iterator {
		...
			friend constexpr bool operator==(const counted_iterator& p,
				std::default_sentinel_t) {
			... // returns whether p is at the end
		}
	};
}
