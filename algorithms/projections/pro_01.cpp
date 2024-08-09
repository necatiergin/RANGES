#include <string>
#include <vector>
#include <ranges>
#include <algorithm>
#include <iostream>

struct Person {
	int id;
	std::string name;
};

int main()
{
	using namespace std;
	namespace rng = ranges;

	vector<Person> pvec{ {34, "necati"}, {25, "burak"}, {11, "sacide"}, {14, "turgut"} };
	rng::sort(pvec, std::less{}, [](const auto& p) {return p.id; });

	for (const auto& [id, name] : pvec)
		cout << id << " " << name << '\n';
}
