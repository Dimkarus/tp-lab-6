#include<iostream>
#include<string>
#include "employee.h"
#include "manager.h"
#define tmp 200
#define min_rate 10000

using namespace std;

	Manager::Manager(int id, string name, int worktime, double part, int fund) :Employee(id, name, worktime), Project(fund){
		this->part = part;
	};
	double Project::countByProject(){
		return fund*part;
	}
	int getPayment() override{
		payment = countByProject()+min_rate;
		return payment;
	}

	ProjectManager::ProjectManager(int id, string name, int worktime, double part,int fund, int people):Manager(id, name, worktime, part, fund){
		this->people = people;
	};
	int countByHeading() override{
		return  people*rate_for_sub;
	}
	int getPayment() override{
		payment = countByProject() + countByHeading() + min_rate;
		return payment;
	}

	SeniorManager::SeniorManager(int id, string name, int worktime, double part, int fund, int people) :ProjectManager(id, name, worktime, part,fund, people){};
	int SeniorManager::getPayment(){
		payment = ProjectManager::getPayment();
		return payment;
	}
