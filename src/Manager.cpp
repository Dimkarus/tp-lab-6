#include"Manager.h"

Manager::Manager(std::string Name) :Employee(Name)
{
	
}

Manager::~Manager() {}
int Manager::getProjectBonus() const 
{
	return this->_Payment;
}
void Manager::setPayment(int p, int m)
{
	this->_Payment = p * m / 100;
}
int Manager::getPayment()
{
	return this->_Payment;
}
int Manager::getWioutSalary()
{
	return _WithOut_Salary;
}
void Manager::setWithoutSalary(int s)
{
	this->_WithOut_Salary = _Payment + s;
}
void Manager::print() const
{
	Employee::print();
	std::cout << "		     All Payment           = " << this->_WithOut_Salary << std::endl;
}