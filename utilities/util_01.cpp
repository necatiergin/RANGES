#include <ranges>
#include <vector>
#include <iostream>

template<std::ranges::input_range Range>
std::ranges::range_value_t<Range> get_min(Range&& rng)
{
  if (std::ranges::empty(rng)) {
    return std::ranges::range_value_t<Range>{};
  }
  auto pos = std::ranges::begin(rng);
  auto min = *pos;
  while (++pos != std::ranges::end(rng)) {
    if (*pos < min) {
      min = *pos;
    }
  }
  return min;
}

int main()
{
  std::vector ivec{ 9, 7, 2, 6, 5, 4 };

  std::cout << get_min(ivec);
}
