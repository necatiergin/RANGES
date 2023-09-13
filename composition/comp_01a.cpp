#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

int main()
{
    using namespace std;

    vector source = {4, 3, 6, 2, 12, 7, 9, 24, 15, 7, 21};
    std::vector<int> intermediate;
    copy_if(source.begin(), source.end(), std::back_inserter(intermediate),
    [](int x) { return x % 3 == 0; });

    vector<int> dest;
    transform(intermediate.begin(), intermediate.end(), std::back_inserter(dest), [](int x) {return x * x; });

    copy(dest.begin(), dest.end(), ostream_iterator<int>{cout, "\n"});
}
