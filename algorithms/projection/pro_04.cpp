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
	// code
	ranges::sort(evec, {}, &Employee::id);

	ranges::sort(pvec, {}, &Payslip::id);

	auto b = ranges::equal(evec, pvec, {}, &Employee::id, &Payslip::id);

}
