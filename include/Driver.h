#pragma once
#include "Personal.h"

class Driver : public Personal {
public:
	Driver(int id, std::string name, int worktime, int base) {
		this->id = id;
		this->name = name;
		this->worktime = worktime;
		this->base = base;
	}

	void worktime_pay(int worktime, int base) {
		this->payment = worktime * base;
	}
	
	~Driver() {}
};