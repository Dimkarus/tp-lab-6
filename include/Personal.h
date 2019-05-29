#pragma once
#include"Employee.h"
#include"WorkTime.h"

class Personal:public Employee, public WorkTime
{
public:
	Personal(std::string& Name, int Hour, int Money);
	virtual ~Personal();
	int getHour_Rate() const;
	int getHour() const;
	virtual int getPayment()const  override;
	virtual void print() const;
private:
	int _Hour_Rate;
	int _Hour;
};