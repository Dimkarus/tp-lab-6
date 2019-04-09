#pragma once
#include"Engineer.h"

class Tester: public Engineer
{
private:
	static int percent;
public:
	Tester(std::string Name,int Hour, int Money, int MoneyofProject, int NumberProject);
	virtual ~Tester();
	void print() const;
	static void setPercent(int p);
	static int getPercent();
};