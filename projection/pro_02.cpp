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
	//...code

	sort(evec.begin(), evec.end(), 
		[](const Employee& e1, const Employee& e2) { return e1.id < e2.id; });

	sort(pvec.begin(), pvec.end(), 
		[](const Payslip& e1, const Payslip& e2) { return e1.id < e2.id; });

	auto b = equal(evec.begin(), evec.end(), pvec.begin(), pvec.end(),
		[](const Employee& e, const Payslip& p) { return e.id == p.id; });

}
