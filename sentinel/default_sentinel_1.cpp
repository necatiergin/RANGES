namespace std {
  struct default_sentinel_t {
    constexpr default_sentinel_t() noexcept = default;
  };

  inline constexpr default_sentinel_t default_sentinel{};
}
