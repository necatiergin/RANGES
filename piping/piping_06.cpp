#include <iostream>
#include <string>
#include <ranges>

int main() 
{
    std::string text = "one,two,three,four,five,six,seven,eight,nine,ten";

    for (auto word : text | std::views::split(',')) {
        for (char c : word) std::cout << c;
        std::cout << '\n';
    }
}
