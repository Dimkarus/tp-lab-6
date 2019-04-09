#pragma once
#include<iostream>
#include<string>
#include "employee.h"
using namespace std;
class Personal :public Employee, public WorkTime{
protected:
	int rate;
public:
	Personal::Personal(int id, string name, int worktime, int rate):Employee(id, name, worktime){};
	int WorkTime::countByTime(){};
	int getPayment() override{};
}; //работник по найму с оплатой за фактически отработанное время.Имеет ставку за час.
//third level
class Cleaner:public Personal{
public:
	Cleaner::Cleaner(int id, string name, int worktime, int rate) :Personal(id, name, worktime, rate){};
	int Cleaner::getPayment(){};
	
}; //уборщица.
class Driver:public Personal{
private:
	int overtime;
public:
	Driver::Driver(int id, string name, int worktime, int rate, int overtime) :Personal(id, name, worktime, rate){};
	int Driver::getPayment(){};
}; // водитель.
#endif