#pragma once
#include"Engineer.h"
#include"Heading.h"

class Programmer:public Engineer
{
private:
	static int percent;

public:
	Programmer(std::string Name, int Hour, int Money, int MoneyofProject, int NumberProject);
	virtual~Programmer();
	static void setPercent(int p);
	static int getPercent();
	void print() const;
};