#include <iostream>
#include <vector>
#include <algorithm>

struct Employee
{
	std::string m_name;
	int m_id;
};

struct Payslip
{
	std::string m_info;
	int m_id;
};

int main()
{
	namespace rng = std::ranges;

	std::vector<Employee> evec(100);
	std::vector<Payslip> pvec(100);
	// some code
	rng::sort(evec, {}, &Employee::m_id);
	rng::sort(pvec, {}, &Payslip::m_id);

	auto eq = rng::equal(evec, pvec, {}, 
		&Employee::m_id, &Payslip::m_id);

}
