template<class S, class I>
concept sentinel_for =
    std::semiregular<S> &&
    std::input_or_output_iterator<I> &&
    requires(const I& i, const S& s) {
        { i == s } -> std::convertible_to<bool>;
        { i != s } -> std::convertible_to<bool>;
        { s == i } -> std::convertible_to<bool>;
        { s != i } -> std::convertible_to<bool>;
    };


/*

std::semiregular<S> — Sentinel türü "semiregular" olmalı
Bu şu anlama gelir:
Default constructible - olmalı
Copyable - olmalı
Movable - olmalı
Destructible - olmalı
Assignable - olmalı

*/
