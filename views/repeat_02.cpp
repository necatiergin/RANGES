#include <ranges>
#include <string>
#include <iostream>

int main() 
{
    auto r = std::views::repeat(std::string("necati"), 5);

    for (const auto& s : r)
        std::cout << s << ' ';
}
