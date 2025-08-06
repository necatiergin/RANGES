template <typename R>
concept common_range = ranges::range<R> &&
                       std::same_as<ranges::iterator_t<R>, ranges::sentinel_t<R>>;
