#include <iostream>
#include <ranges>
#include <compare>
#include <vector>
#include <algorithm>
#include <format>
#include "nutility.h" //rname, rfname, Irand


struct Employee {
	Employee() = default;

	Employee(std::string name, std::string surname, int id) :
		m_name{ std::move(name) },
		m_surname{ std::move(surname) },
		m_id{ id } { }

	auto operator<=> (const Employee&)const = default;

	friend std::ostream& operator<<(std::ostream& os, const Employee& e)
	{
		return os << std::format("{:<8} {:<16} {:<20}", e.m_id, e.m_name, e.m_surname);
	}

	std::string m_name{};
	std::string m_surname{};
	int m_id{};
};

int main()
{
	using namespace std;

	vector<Employee> evec;
	for (int i = 0; i < 10; ++i) {
		evec.emplace_back(rname(), rfname(), Irand{ 0, 100'000 }());
	}

	//ranges::sort(evec); //valid
	//ranges::sort(evec, ranges::greater{}); //valid
	//ranges::sort(evec.begin(), evec.end()); //valid
	//ranges::sort(evec, {}, &Employee::m_name); // valid

	ranges::sort(evec, {},
		[](const Employee& e) {
			return e.m_name + e.m_surname;
		}); // valid

	ranges::copy(evec, ostream_iterator<Employee>(cout, "\n"));
}
