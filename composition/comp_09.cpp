#include <ranges>
#include <iostream>


constexpr bool isprime(int val)
{
  if (val < 2)
    return false;

  if (val % 2 == 0)
    return val == 2;

  if (val % 3 == 0)
    return val == 3;

  if (val % 5 == 0)
    return val == 5;

  for (int k = 7; k * k <= val; k += 2)
    if (val % k == 0)
      return false;

  return true;
}


int main()
{
  using namespace std;

  auto vw = views::iota(100'000, 200'000) |
    views::filter([](int x) { return x % 1000 == 437; }) |
      views::filter(isprime);

  for (auto i : vw)
    cout << i << '\n';
}
