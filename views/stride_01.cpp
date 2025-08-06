#include <ranges>
#include <vector>
#include <iostream>

// stride C++23

int main() 
{
    std::vector vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    for (int n : vec | std::views::stride(3)) {
        std::cout << n << ' '; 
    }
}



