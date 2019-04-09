#include<iostream>
#include<string>
#define tmp 100
#include "employee.h"
#include "engineer.h"
using namespace std;

	Engineer::Engineer(int id, string name, int worktime, int rate, double part,int fund) :Employee(id, name, worktime),Project(fund){
		this->rate = rate;
		this->part = part;
	};
	int WorkTime::countByTime(){
		return worktime*rate;
	}
	double Project::countByProject(){
		return fund*part;
	}
	int getPayment() override{
		payment = countByProject()+countByTime();
		return payment;
	}

	
	int Programmer::getPayment(){
		payment =Engineer::getPayment();
		return payment;
	}

	int Tester::getPayment(){
		payment =Engineer::getPayment();
		return payment;
	}

	TeamLeader::TeamLeader(int id, string name, int worktime, int rate, double part,int fund, int people) :Programmer(id, name, worktime, rate, part, fund){
		this->people = people;
	};
	int countByHeading() override{
		return  people*rate_for_sub;
	}
	int TeamLeader::getPayment(){
		payment = Programmer::getPayment() + countByHeading();
		return payment;
	}
