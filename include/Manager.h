#pragma once
#include <iostream>
#include "Employee.h"
#include "Project.h"

class Manager : public Employee, public Project {
protected:

public:
	Manager() {};
	void project_payment(int sum, double contr) {
		payment = sum * contr;
	}
};