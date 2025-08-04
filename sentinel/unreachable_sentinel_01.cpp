namespace std {
  struct unreachable_sentinel_t {
    template<class I>
    friend constexpr bool operator==(const I&, unreachable_sentinel_t) noexcept {
      return false;
    }
    template<class I>
    friend constexpr bool operator==(unreachable_sentinel_t, const I&) noexcept {
      return false;
    }
  };

  inline constexpr unreachable_sentinel_t unreachable_sentinel{};
}
