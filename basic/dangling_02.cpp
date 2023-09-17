#include <ranges>
#include <vector>
#include <algorithm>

std::vector<int> getvec();

int main()
{
	namespace rng = std::ranges;
	
	auto iter = rng::find(getvec(), 12);
	//auto val = *iter;  //error
	const auto& vec = getvec();
	auto it = rng::find(vec, 12);
	auto x = *it; //valid
}
