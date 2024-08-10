#include <vector>
#include <algorithm>
#include <iterator>
#include <iostream>

int main()
{
	std::vector<int> vsource = { 2, 7, 8, 5, 6, 4, 1, 3, 9, 0, 12, 17, 13};
	std::vector<int> vdest;
	std::vector<int> vtemp;
	std::copy_if(vsource.begin(), vsource.end(), 
		std::back_inserter(vtemp), [](const int i) { return i % 2 == 0; });
	
	std::transform(vtemp.begin(), vtemp.end(), std::back_inserter(vdest), 
		[](const int i) {return i * i; });

	for (auto i : vdest) 
		std::cout << i << ' ';
}
