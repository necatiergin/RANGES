// C++23
#include <ranges>
#include <vector>
#include <string>
#include <iostream>

int main() 
{
    std::vector<std::string> svec{ "copy", "or", "move"};

    
    auto cp = svec | std::ranges::to<std::vector<std::string>>(); // copied

    std::cout << svec[0].length() << svec[1].length() << svec[2].length() << '\n';

    auto mv = svec
        | std::views::as_rvalue
        | std::ranges::to<std::vector<std::string>>(); // move

    std::cout << svec[0].length() << svec[1].length() << svec[2].length() << '\n';
}
