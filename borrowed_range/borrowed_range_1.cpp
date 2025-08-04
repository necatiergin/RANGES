template<class T>
inline constexpr bool enable_borrowed_range = false;

template<class R>
concept borrowed_range = ranges::range<R> &&
                         (is_lvalue_reference_v<R> || enable_borrowed_range<remove_cvref_t<R>>);
