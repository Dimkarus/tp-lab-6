#pragma once
#include"Programmer.h"
#include"Heading.h"

class TeamLider: public Programmer, public Heading
{
public:
	TeamLider(std::string Name, int Hour, int Money, int MoneyofProject, int NumberProject, int CountWorker);
	virtual~TeamLider();
	void print() const;
	int getCount_Worker() const;
	virtual int getSalary() const override;
	static void setPercent(int p );
	static int getPercent();
private:
	int _Count_Worker;
	static int percent;
};