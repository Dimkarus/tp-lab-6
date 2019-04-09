#include"Tester.h"

int Tester::percent;
Tester::Tester(std::string Name, int Hour, int Money, int MoneyofProject, int NumberProject):Engineer(Name, Hour, Money, MoneyofProject, NumberProject) 
{
	Engineer::setPercent(Tester::getPercent());
}

Tester::~Tester() {}

void Tester::print() const
{
	Engineer::print();
	std::cout << std::endl; 
}

void Tester::setPercent(int p)
{
	Tester::percent = p;
}

int Tester::getPercent() 
{
	return Tester::percent;
}