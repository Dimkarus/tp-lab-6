#pragma once
#include"Employee.h"
#include"Project.h"
#include"WorkTime.h"

class Engineer : public Employee, public Project, public WorkTime
{
public:
	Engineer(std::string Name, int  Hour, int Money, int MoneyofProject, int NumberProject);
	virtual ~Engineer();
	virtual int getProjectBonus() const override;

	int getHour_Rate() const;
	int getHour() const;
	int getMoney_Project() const;
	int getNumber_Project() const;
	int getPercent() const;
	void setPercent(int p);
	virtual int getPayment()const  override;
	virtual void print() const;

private:
	int _Money_Project;
	int _Hour_Rate;
	int _Hour;
	int _Number_Project;
	int _Percent_Worker;
};