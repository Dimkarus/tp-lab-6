#include"TeamLider.h"

int TeamLider::percent;
TeamLider::TeamLider(std::string Name, int Hour, int Money, int MoneyofProject, int NumberProject, int CountWorker)
			:Programmer(Name, Hour, Money, MoneyofProject, NumberProject), _Count_Worker(CountWorker)
{
	Engineer::setPercent(this->getSalary());
}
TeamLider::~TeamLider(){}

int TeamLider::getCount_Worker() const
{
	return this->_Count_Worker;
}
void TeamLider::setPercent(int p)
{
	TeamLider::percent = p;
}
int TeamLider::getPercent()
{
	return TeamLider::percent;
}
int TeamLider::getSalary() const
{
	return this->getPercent() * this->_Count_Worker;
}
void TeamLider::print() const
{
	Engineer::print();
	
	std::cout << std::endl;
}