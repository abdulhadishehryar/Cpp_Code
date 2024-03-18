//Calculates and displays the weekly gross pay and net pay of two employees.The first employee is paid an hourly rate of $16.43, and the second is paid an hourly rate of $12.67 and both employees work 20 hours a week.The employees pay $40 in tax and $10 in voluntary contributions to an Individual Retirement Account(IRA) (Net pay = gross pay - deduction)



#include <iostream>
#include <cmath>

using namespace std;
int main() {

	const double hourlyRateEmployee1 = 16.43;
	const double hourlyRateEmployee2 = 12.67;
	const int workingWeekHours = 20;
	const double employeeTax = 40;
	const double IRAContribution = 10;

	// Employee 1 salary calculation
	const double grossPayEmployee1 = hourlyRateEmployee1 * workingWeekHours;
	const double netPayEmployee1 = grossPayEmployee1 - (employeeTax+IRAContribution);

	// Employee 2 salary calculation
	const double grossPayEmployee2 = hourlyRateEmployee2 * workingWeekHours;
	const double netPayEmployee2 = grossPayEmployee2 - (employeeTax + IRAContribution);

	// Employee 1 Results

	cout << "Employee 1:" << endl;
	cout << "Gross Pay: $" << grossPayEmployee1 << endl;
	cout << "Net Pay: $" << netPayEmployee1 << endl << endl;

	// Employee 2 Results

	cout << "Employee 2:" << endl;
	cout << "Gross Pay: $" << grossPayEmployee2 << endl;
	cout << "Net Pay: $" << netPayEmployee2 << endl;


	return 0;
}