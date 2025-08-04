#include <vector>
#include <ranges>
#include <iostream>

int main() 
{
    std::vector<int> vec = { 10, 20, 30, 40 ,50 };

    //std::ranges::ref_view<std::vector<int>> v(vec);
    std::ranges::ref_view v(vec); //CTAD

    for (int x : v)
        std::cout << x << ' ';
}
