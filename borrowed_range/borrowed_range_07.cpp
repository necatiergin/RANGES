#include <ranges>
#include <vector>
#include <type_traits>
#include <iostream>

namespace rng = std::ranges;
namespace vw = std::views;

int main() 
{
    std::vector<int> v{ 1,2,3,4,5 };
    
    auto it = rng::find(rng::subrange(v.begin(), v.end()), 4);
    
    std::cout << *it << '\n';
}
