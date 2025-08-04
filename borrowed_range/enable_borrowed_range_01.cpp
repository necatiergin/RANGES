struct MyRange {
    int* begin() const;
    int* end() const;
};

template<>
inline constexpr bool std::ranges::enable_borrowed_range<MyRange> = true;
