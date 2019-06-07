#pragma once
#include "Employee.h"
#include "WorkTime.h"

class Personal : public Employee, public Worktime {

public:
	Personal() {}

	void set_base(int base) {
		this->base = base;
	}

	int get_base() {
		return base;
	}
	~Personal() {}
};