 #pragma once
#include"Employee.h"
#include"Project.h"

class Manager :public Employee, public Project
{
public:
	Manager(std::string Name);
	virtual ~Manager();
	void setPayment(int p, int m);
	int getPayment();
	int getWioutSalary();
	void setWithoutSalary(int s);
	virtual void print() const override;
	virtual int getProjectBonus() const override;
private:
	int _Payment;
	int _WithOut_Salary;
};