
// source : https://learn.microsoft.com/en-us/cpp/standard-library/keys-view-class?view=msvc-170

// requires /std:c++20 or later

#include <ranges>
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>

int main()
{
    // ========== work with a std::map

    std::map<std::string, int> cpp_standards
    {
        {"C++98", 1988},
        {"C++03", 2003},
        {"C++11", 2011},
        {"C++14", 2014},
        {"C++17", 2017},
        {"c++20", 2020},
        {"c++23", 2023},
        {"c++26", 2026},
    };

    // Extract all of the keys from the map
    for (const std::string& standards : std::views::keys(cpp_standards))
    {
        std::cout << standards << ' '; // C++03 C++11 C++14 C++17 C++98 c++20
    }
    std::cout << '\n';

    // ========== work with a range of std::pair

    std::vector<std::pair<std::string, int>> windows
    {
        {"Windows 1.0", 1985},
        {"Windows 2.0", 1987},
        {"Windows 3.0", 1990},
        {"Windows 3.1", 1992},
        {"Windows NT 3.1", 1993},
        {"Windows 95", 1995},
        {"Windows NT 4.0", 1996},
        {"Windows 95", 1995},
        {"Windows 98", 1998},
        {"Windows 1.0", 1985},
        {"Windows 2000", 2000}
    };

    // Another way to call the range adaptor using '|': create an keys_view from each pair
    for (const std::string& version : windows | std::views::keys)
    {
        std::cout << version << ' '; // Windows 1.0 Windows 2.0 Windows 3.0 ...
    }
}
