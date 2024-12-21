#include <iostream>
#include <vector>
#include <algorithm>

struct Employee
{
	std::string name;
	int id;
};

struct Payslip
{
	std::string pay_info;
	int id;
};

int main()
{
	using namespace std;
	vector<Employee> evec(100);
	vector<Payslip> pvec(100);

	ranges::sort(evec, [](const Employee& e1, const Employee& e2) { return e1.id < e2.id; });

	ranges::sort(pvec, [](const Payslip& e1, const Payslip& e2) { return e1.id < e2.id; });

	auto b = ranges::equal(evec, pvec, [](const Employee& e, const Payslip& p) { return e.id == p.id; });

}
