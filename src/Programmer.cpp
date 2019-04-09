#include"Programmer.h"

int Programmer::percent;

Programmer::Programmer(std::string Name, int Hour, int Money, int MoneyofProject, int NumberProject) 
			:Engineer(Name, Hour, Money, MoneyofProject, NumberProject) 
{
	Engineer::setPercent(Programmer::getPercent());
}

Programmer::~Programmer(){}
void Programmer::setPercent(int p)
{
	Programmer::percent = p;
}
int Programmer::getPercent()
{
	return Programmer::percent;
}

void Programmer::print() const
{
	Engineer::print();
	std::cout << std::endl;
}
