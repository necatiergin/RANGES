//source: C++20 Jossutis
#include <iostream>
#include <vector>
#include <list>
#include <ranges>

void print(const auto& rg)
{
    for (const auto& elem : rg) {
        std::cout << elem << ' ';
    }
    std::cout << '\n';
}

int main()
{
    std::vector ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    std::list   ilist{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    print(ivec | std::views::take(3));                      // OK
    print(ivec | std::views::drop(3));                      // OK

    print(ilist | std::views::take(3));                      // OK
    //print(ilist | std::views::drop(3));                      // ERROR
    for (const auto& elem : ilist | std::views::drop(3)) {   // OK
        std::cout << elem << ' ';
    }
    std::cout << '\n';

    auto isEven = [](const auto& val) {
        return val % 2 == 0;
        };
    //print(ivec | std::views::filter(isEven));               // ERROR
}
