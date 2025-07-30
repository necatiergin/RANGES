#include <vector>
#include <ranges>
#include <tuple>
#include <string>
#include <algorithm>
#include <iostream>

int main() 
{
    std::vector<std::tuple<int, std::string, double>> records = {
        {1, "apple", 3.14},
        {2, "banana", 2.71},
        {3, "cherry", 1.41}
    };

   
    std::ranges::sort(records, {}, [](const auto& t) {
        return std::get<2>(t);
        });

    for (const auto& [id, name, val] : records) {
        std::cout << id << " - " << name << " - " << val << '\n';
    }
}
