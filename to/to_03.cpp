#include <string>
#include <ranges>
#include <iostream>

int main()
{
	namespace rng = std::ranges;
	namespace vw = std::views;
	std::string str{ "necati" };

	auto dest = str | vw::slide(2)
		| vw::join
		| rng::to<std::string>();

	std::cout << dest;
}
