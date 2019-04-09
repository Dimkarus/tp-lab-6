#pragma once
#include<iostream>
#include<string>
#include "employee.h"
using namespace std;
class Engineer :public Employee, public WorkTime, public Project{
protected:
	int rate;
	double part;
public:
	Engineer::Engineer(int id, string name, int worktime, int rate, double part,int fund) :Employee(id, name, worktime),Project(fund){};
	int WorkTime::countByTime(){};
	double Project::countByProject(){};
	int getPayment(){};
}; // инженер.Имеет ставку и оплату за час + бонусы от выполняемого проекта.

//third level
class Programmer:public Engineer{
public:
	Programmer::Programmer(int id, string name, int worktime, int rate, double part,int fund) :Engineer(id, name, worktime, rate, part, fund){};
	int Programmer::getPayment(){};
}; // инженер - программист.
class Tester: public Engineer{
public:
	Tester::Tester(int id, string name, int worktime, int rate, double part,int fund) :Engineer(id, name, worktime, rate, part, fund){};
	int Tester::getPayment(){};
}; //инженер по тестированию.

//forth level
class TeamLeader:public Programmer,public Heading{
private:
	int people;
	int rate_for_sub=tmp;
public:
	TeamLeader::TeamLeader(int id, string name, int worktime, int rate, double part,int fund, int people) :Programmer(id, name, worktime, rate, part, fund){};
	int countByHeading(){};
	int TeamLeader::getPayment(){};
}; // ведущий программист.
#endif