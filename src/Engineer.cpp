#include"Engineer.h"

Engineer::Engineer(std::string Name, int Hour, int Money, int MoneyofProject, int NumberProject) :Employee(Name), _Hour(Hour), _Hour_Rate(Money),
																							_Money_Project(MoneyofProject), _Number_Project(NumberProject)
{
	Employee::setPayment(Engineer::getPayment());
}
Engineer::~Engineer(){}
void Engineer::setPercent(int p)
{
	this->_Percent_Worker = p;
}
int Engineer::getPercent() const
{
	return this->_Percent_Worker;
}
int Engineer::getProjectBonus() const
{	
	return _Money_Project * Engineer::getPercent() / 100;
}
int Engineer::getHour_Rate() const
{
	return this->_Hour_Rate;
}
int Engineer::getHour() const
{
	return this->_Hour;
}
int Engineer::getPayment() const
{
	return this->_Hour * this->_Hour_Rate;
}
int Engineer::getMoney_Project() const 
{
	return this->_Money_Project;
}
int Engineer::getNumber_Project() const
{
	return this->_Number_Project;
}
void Engineer::print() const
{
	Employee::print();
	std::cout << "				All Payment		= " << Engineer::getPayment() + Engineer::getProjectBonus() << std::endl;
	std::cout << "				Hour Rate of worker = " << this->_Hour_Rate      << std::endl;
	std::cout << "				Percent of worker   = " << Engineer::getPercent() << std::endl;
	std::cout << "				Money of Project    = " << Engineer::getProjectBonus()     << std::endl;
	std::cout << "				Number of Project   = " << this->_Number_Project << std::endl;
	std::cout << "				Count of hours      = " << this->_Hour << std::endl;
	std::cout << "_____________________________________________________________________";
}