#pragma once
#include "Employee.h"
#include "WorkTime.h"
#include "Project.h"

class Engineer : public Employee, public Worktime, public Project {
protected:
	int base;
	int contribution;
public:
	Engineer() : Employee() {};
	int worktime_payment(int work_time, int base) {
		payment = worktime * base;
	}

	void project_payment(int summa, double contr) {
		payment += summa * contr;
	}

	void set_project(std::string name_proj, int tmp_summa) {
		project = name_proj;
		summa = tmp_summa;
	}
};