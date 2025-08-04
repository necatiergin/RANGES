#include <iostream>
#include <string>
#include <ranges>

int main() 
{
    std::string text = "turkiye bir hukuk devletidir";

    auto vowels = text
        | std::views::filter([](char c) {
        return std::string("aeiouAEIOU").contains(c);
            });

    for (char v : vowels)
        std::cout << v;  
}
