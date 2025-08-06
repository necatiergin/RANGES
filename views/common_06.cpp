#include <list>
#include <iterator>
#include <ranges>
#include <numeric>
#include <iostream>

int main()
{
    auto ls = std::list{ 1, 2, 3, 4, 5 };
    auto iter = std::counted_iterator{ ls.begin(), std::ssize(ls) };
    auto v = std::ranges::subrange{ iter, std::default_sentinel };
    //auto sum = std::accumulate(v.begin(), v.end(), 0); // error
    auto cv = std::ranges::common_view{ v};
    std::cout << "accumulate: " << std::accumulate(cv.begin(), cv.end(), 0) << '\n';
}
