template <class S, class I>
concept std::sized_sentinel_for =
std::sentinel_for<S, I>&&
    requires(const I& i, const S& s) {
        { s - i } -> std::same_as<std::iter_difference_t<I>>;
        { i - s } -> std::same_as<std::iter_difference_t<I>>;
};
