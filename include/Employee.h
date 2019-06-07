#pragma once
#include <string>

class Employee {
protected:
	int id;
	std::string name;
	int worktime;
	int payment;
public:
	Employee() {}
	Employee(int id, std::string name, int worktime) {
		this->id		= id;
		this->name		= name;
		this->worktime	= worktime;
	}

	void set_id(int id) {
		this->id = id;
	}

	void set_name(std::string name) {
		this->name = name;
	}

	void set_worktime(int worktime) {
		this->worktime = worktime;
	}

	int get_id() {
		return id;
	}
	
	std::string get_name() {
		return name;
	}

	int get_worktime() {
		return worktime;
	}

	int get_payment() {
		return payment;
	}

	~Employee() {};
};