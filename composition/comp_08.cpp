#include <ranges>
#include <vector>
#include <iostream>

int main()
{
  std::vector pvec{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
  
  for (auto i : pvec | 
    std::views::drop_while([](int x) {return x < 10; }) |
    std::views::reverse | 
    std::views::drop(3))
    std::cout << i << ' ';

  // 11 13 17 19 23 29
  // 29 23 19 17 13 12
  // 17 13 12
}
