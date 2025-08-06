#include <initializer_list>
#include <iterator>
#include <numeric>
#include <ranges>
#include <iostream>

int main()                                               
{
    auto list = { 1, 2, 3, 4, 5 };
    auto iter = std::counted_iterator{ list.begin(), std::ssize(list) };
    auto rn = std::ranges::subrange{ iter, std::default_sentinel };
    //auto sum = std::accumulate(rn.begin(), rn.end(), 0); 
    auto cv = std::ranges::common_view{ rn };
    std::cout << "accumulate: " << std::accumulate(cv.begin(), cv.end(), 0) << '\n';
}                                           
