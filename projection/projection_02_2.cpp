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
	// some code here

	rng::sort(evec, [](const Employee& e1, const Employee& e2) 
		{ return e1.m_id < e2.m_id; });

	rng::sort(pvec, [](const Payslip& e1, const Payslip& e2) 
		{ return e1.m_id < e2.m_id; });

	auto eq = rng::equal(evec, pvec, [](const Employee& e, const Payslip& p) 
		{ return e.m_id == p.m_id; });

}
