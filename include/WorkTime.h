#pragma once
class Worktime {
protected:
	int base;
public:
	Worktime() {}

	virtual void worktime_pay(int worktime, int base) = 0;
	~Worktime() {}
};