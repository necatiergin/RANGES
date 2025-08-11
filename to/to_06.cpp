#include <vector>
#include <string>
#include <ranges>
#include <map>
#include <iostream>


int main() 
{
    std::vector<std::pair<int, std::string>> myvec = {
        {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}
    };

    auto mymap = myvec | std::ranges::to<std::map>();

    for (const auto& [k, v] : mymap)
        std::cout << k << " -> " << v << '\n';
}
