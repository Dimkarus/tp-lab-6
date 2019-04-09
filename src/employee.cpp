#include<iostream>
#include<string>
#include "employee.h"
using namespace std;

	Employee(int id, string name, int worktime){
	this->id = id;
	this->name = name;
	this->worktime = worktime;
	};
	string Employee::getName(){
		return name;
	}
	virtual int getPayment() = 0;

	virtual int countByTime() = 0;

	Project::Project(int fund){
		this->fund = fund;
	}
