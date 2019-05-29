#include"Personal.h"

Personal::Personal(std::string& Name, int Hour, int Money):Employee(Name), _Hour_Rate(Money), _Hour(Hour)
{
	Employee::setPayment(this->getPayment());
}
Personal::~Personal(){}

int Personal::getHour_Rate() const
{
	return this->_Hour_Rate;
}
int Personal::getHour() const
{
	return this->_Hour;
}
int Personal::getPayment() const
{
	return _Hour * _Hour_Rate;
}
void Personal::print()const
{
	Employee::print();
	std::cout << "				Hour Rate of worker = " << this->_Hour_Rate   << std::endl;
	std::cout << "				Count of hours      = " << this->_Hour        << std::endl;
	std::cout << "_____________________________________________________________________"; 
	
}