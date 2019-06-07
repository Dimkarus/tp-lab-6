#include "Employee.h"
#include "Personal.h"
#include "WorkTime.h"
#include <iostream>


int main() {
	Employee emp(8, "ne,", 10);
	//emp(8, "ne,", 10);
	Personal pers;
	//pers(8,"mm", 19);
	pers.worktime_pay(10, 10);
	std::cout << pers.get_payment();
	system("pause");
	return 0;
}